import java.util.Scanner;

public class ex8 {

    public static int multiply(int num) {
        int x;
        String y = Integer.toString(num);
        x = y.length();
        if (num > 0) {
            x = y.length();
        } else if (num < 0) {
            x = y.length() - 1;
        }
        return num * (int) Math.pow(5, x);
    }

    public static void main(String[] args) {
        System.out.print("Enter a number: ");
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        System.out.print("Multiply: " + multiply(a));
    }
}