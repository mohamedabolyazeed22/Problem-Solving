import java.util.Scanner;
import java.util.ArrayList;

public class positionsinArray {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        ArrayList<Integer> a = new ArrayList<>(n);

        for (int i = 0; i < n; i++) {
            int num = scanner.nextInt();
            a.add(num);
            if (num <= 10) {
                System.out.println("A[" + i + "] = " + num);
            }
        }

        scanner.close();
    }
}
