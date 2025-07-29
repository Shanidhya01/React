import java.util.Scanner;
public class Quadratic {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter value of a: ");
        double a = input.nextDouble();
        System.out.println("Enter value of b: ");
        double b = input.nextDouble();
        System.out.println("Enter value of c: ");
        double c = input.nextDouble();
        double root1, root2;
        double det = (b * b) - (4 * a * c); 
        if (det > 0) {
            root1 = (-b + Math.sqrt(det)) / (2 * a);
            root2 = (-b - Math.sqrt(det)) / (2 * a);
            System.out.printf("First Root = %.2f\nSecond Root = %.2f\n", root1, root2);
        } else if (det == 0) {
            root1 = root2 = -b / (2 * a);
            System.out.printf("First Root = %.2f\nSecond Root = %.2f\n", root1, root2);
        } else {
            double real = -b / (2 * a);
            double imaginary = Math.sqrt(-det) / (2 * a);
            System.out.printf("First Root = %.2f + %.2fi\nSecond Root = %.2f - %.2fi\n",
                    real, imaginary, real, imaginary);
        }
    }
}
