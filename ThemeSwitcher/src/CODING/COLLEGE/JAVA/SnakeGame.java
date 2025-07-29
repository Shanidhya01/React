import java.awt.*;
import java.awt.event.*;
import java.util.ArrayList;
import java.util.Random;
import javax.swing.*;
// Main Class
public class SnakeGame {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Snake Game");
        GamePanel gamePanel = new GamePanel();
        frame.add(gamePanel);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setResizable(false);
        frame.pack(); // Automatically sizes the window
        frame.setVisible(true);
    }
}
// Game Panel
class GamePanel extends JPanel implements ActionListener {
    private final int TILE_SIZE = 25; // Size of each tile
    private final int GAME_WIDTH = 1000; // Width of the game screen
    private final int GAME_HEIGHT = 700; // Height of the game screen
    private final int ALL_TILES = (GAME_WIDTH * GAME_HEIGHT) / (TILE_SIZE * TILE_SIZE);
    private final Timer timer;
    private final Snake snake;
    private final Food food;
    private boolean running = false;
    public GamePanel() {
        this.setPreferredSize(new Dimension(GAME_WIDTH, GAME_HEIGHT));
        this.setBackground(Color.BLACK);
        this.setFocusable(true);
        this.addKeyListener(new KeyAdapter() {
            @Override
            public void keyPressed(KeyEvent e) {
                snake.changeDirection(e.getKeyCode());
            }
        });
        snake = new Snake();
        food = new Food();
        timer = new Timer(100, this); // Delay between movements
        startGame();
    }
    private void startGame() {
        snake.reset();
        food.spawnFood(GAME_WIDTH, GAME_HEIGHT, TILE_SIZE);
        running = true;
        timer.start();
    }
    @Override
    public void paintComponent(Graphics g) {
        super.paintComponent(g);
        if (running) {
            food.draw(g, TILE_SIZE);
            snake.draw(g, TILE_SIZE);
        } else {
            showGameOver(g);
        }
    }
    private void showGameOver(Graphics g) {
        g.setColor(Color.RED);
        g.setFont(new Font("Arial", Font.BOLD, 40));
        FontMetrics metrics = getFontMetrics(g.getFont());
        String message = "Game Over!";
        g.drawString(message, (GAME_WIDTH - metrics.stringWidth(message)) / 2, GAME_HEIGHT / 2);
    }
    @Override
    public void actionPerformed(ActionEvent e) {
        if (running) {
            snake.move(); // Move the snake first
            checkFoodCollision(); // Check if food is eaten
            checkWallCollision(); // Check if the snake hits the wall
            if (snake.checkCollision()) { // Check for self-collision after moving
                running = false; // Stop the game if collision is detected
            }
        }
        repaint(); // Refresh the game screen
    }
    private void checkFoodCollision() {
        if (snake.getHeadX() == food.getX() && snake.getHeadY() == food.getY()) {
            snake.grow(); // Mark the snake to grow
            food.spawnFood(GAME_WIDTH, GAME_HEIGHT, TILE_SIZE); // Respawn food
        }
    }
    private void checkWallCollision() {
        if (snake.getHeadX() < 0 || snake.getHeadY() < 0 ||
                snake.getHeadX() >= GAME_WIDTH || snake.getHeadY() >= GAME_HEIGHT) {
            running = false;
        }
    }
    private void checkSelfCollision() {
        if (snake.checkCollision()) {
            running = false;
        }
    }
    
}
// Snake Class
class Snake {
    private final ArrayList<Point> body = new ArrayList<>();
    private int dx = 0, dy = 0; // Movement direction
    private boolean growing = false;
    public Snake() {
        reset();
    }
    public void reset() {
        body.clear();
        body.add(new Point(5, 5)); // Initial starting position
        dx = 0;
        dy = 0;
        growing = false;
    }
    public void move() {
        // Calculate new head position
        Point newHead = new Point(body.get(0).x + dx, body.get(0).y + dy);
        // Add the new head to the front of the snake
        body.add(0, newHead);
        // Remove the tail if not growing
        if (!growing) {
            body.remove(body.size() - 1);
        } else {
            growing = false; // Reset growth after one move
        }
    }
    public void grow() {
        growing = true; // Mark that the snake should grow on the next move
    }
    public void changeDirection(int keyCode) {
        switch (keyCode) {
            case KeyEvent.VK_UP:
                if (dy == 0) { // Prevent reversing direction
                    dx = 0;
                    dy = -1;
                }
                break;
            case KeyEvent.VK_DOWN:
                if (dy == 0) {
                    dx = 0;
                    dy = 1;
                }
                break;
            case KeyEvent.VK_LEFT:
                if (dx == 0) {
                    dx = -1;
                    dy = 0;
                }
                break;
            case KeyEvent.VK_RIGHT:
                if (dx == 0) {
                    dx = 1;
                    dy = 0;
                }
                break;
        }
    }
    public int getHeadX() {
        return body.get(0).x * 25; // Convert grid position to pixel position
    }
    public int getHeadY() {
        return body.get(0).y * 25;
    }
    public boolean checkCollision() {
        Point head = body.get(0);
        for (int i = 1; i < body.size(); i++) {
            if (head.equals(body.get(i))) {
                return true; // Head collides with the body
            }
        }
        return false;
    }
    public void draw(Graphics g, int tileSize) {
        g.setColor(Color.GREEN);
        for (Point p : body) {
            g.fillRect(p.x * tileSize, p.y * tileSize, tileSize, tileSize);
        }
    }
}
// Food Class
class Food {
    private int x, y;
    public void spawnFood(int width, int height, int tileSize) {
        Random random = new Random();
        x = random.nextInt(width / tileSize) * tileSize;
        y = random.nextInt(height / tileSize) * tileSize;
    }
    public int getX() {
        return x;
    }
    public int getY() {
        return y;
    }
    public void draw(Graphics g, int tileSize) {
        g.setColor(Color.YELLOW);
        g.fillRect(x, y, tileSize, tileSize);
    }
}