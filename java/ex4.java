import java.util.Scanner;

public class ex4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            System.out.print("Enter a number: ");
            int a = scanner.nextInt();

            int result = calculateValue(a);
            System.out.println("Result: " + result);
        } catch (java.util.InputMismatchException e) {
            System.out.println("Invalid input. Please enter an integer.");
        } finally {
            scanner.close();
        }
    }

    public static int calculateValue(int a) {
        if (a % 2 == 0) {
            return a * 8;
        } else {
            return a * 9;
        }
    }
}
