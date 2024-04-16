import java.util.Arrays;
import java.util.Scanner;

public class arraysort {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] arr = new int[4];

        for (int i = 0; i < 4; i++) {
            arr[i] = scanner.nextInt();
        }
        Arrays.sort(arr);

        if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3]) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
