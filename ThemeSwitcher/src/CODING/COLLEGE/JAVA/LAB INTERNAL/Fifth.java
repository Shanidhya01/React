import java.util.Scanner;
public class Fifth {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the first integer (a): ");
        int a = scanner.nextInt();
        System.out.print("Enter the second integer (b): ");
        int b = scanner.nextInt();
        try {
            if (b == 0) {
                throw new ArithmeticException("Division by zero is not allowed.");
            }
            int result = a / b;
            System.out.println("The result of " + a + " / " + b + " is: " + result);
        }
        catch (ArithmeticException e) {
            System.out.println("Error: " + e.getMessage());
        }
        finally {
            scanner.close();
        }
    }
}