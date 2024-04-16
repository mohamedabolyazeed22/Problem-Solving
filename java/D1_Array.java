import java.util.Scanner;

public class D1_Array {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            int num = scanner.nextInt();
            arr[i] = num;
        }

        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }

        scanner.close();
    }
}