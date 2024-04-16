import java.util.Scanner;

public class ex7 {
    public static void main(String[] args) {
        int a, b, c;
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter three numbers: ");
        a = scanner.nextInt();
        b = scanner.nextInt();
        c = scanner.nextInt();

        boolean result = calculateValue(a, b, c);
        System.out.println("Result: " + result);
    }

    public static boolean calculateValue(int a, int b, int c) {
        return (b % a == 0 && c % a == 0);
    }
}
