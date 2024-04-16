import java.util.Scanner;

public class ex10 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        if (z(a, b) > 1) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }

    public static int z(int a, int b) {
        if (b == 0) {
            return a;
        }
        return z(b, a % b);
    }
}
