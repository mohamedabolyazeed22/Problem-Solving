import java.util.Scanner;

public class ex9 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int y = scanner.nextInt();

        int z = x % y;
        int s = Math.min(z, y - z);
        System.out.println((int) s);
    }
}
