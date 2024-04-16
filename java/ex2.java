import java.util.Scanner;

public class ex2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double X = scanner.nextInt();
        double P = scanner.nextInt();
        double originalPrice = (double) P * 100 / (100 - X);
        System.out.printf("%.2f\n", originalPrice);
    }
}
