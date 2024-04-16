import java.util.Scanner;

public class LowestNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int[] a = new int[n];
        int minEL = Integer.MAX_VALUE;
        int position = -1;

        for (int i = 0; i < n; ++i) {
            int num = scanner.nextInt();
            a[i] = num;
            if (num < minEL) {
                minEL = num;
                position = i + 1;
            }
        }

        System.out.println(minEL + " " + position);

        scanner.close();
    }
}
