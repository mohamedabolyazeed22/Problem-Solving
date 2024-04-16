import java.util.Scanner;

public class summation {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int size = scanner.nextInt();
        long sum = 0;

        for (int i = 1; i <= size; i++) {
            int num = scanner.nextInt();
            sum += num;
        }

        System.out.println(Math.abs(sum)); 

        scanner.close();
    }
}
