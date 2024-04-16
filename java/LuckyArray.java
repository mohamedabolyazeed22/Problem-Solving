import java.util.Scanner;

import java.util.Scanner;

public class LuckyArray {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt() ;
        int min = Integer.MAX_VALUE ;
        int count = 0;
        for (int i = 0; i < N; i++) {
            int num = scanner.nextInt();
            if (num < min) {
                min = num;
                count = 1;
            } else if (num == min) {
                count++;
            }
        }
        System.out.println(count % 2 == 1 ? "Lucky" : "Unlucky");

    }
}

/*
public class LuckyArray {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = scanner.nextInt();
        }
        String result = isLuckyArray(N, A);
        System.out.println(result);
    }

    public static String isLuckyArray(int N, int[] A) {
        int minElement = A[0];
        int minCount = 1;
        for (int i = 1; i < N; i++) {
            if (A[i] < minElement) {
                minElement = A[i];
                minCount = 1;
            } else if (A[i] == minElement) {
                minCount++;
            }
        }

        if (minCount % 2 == 1) {
            return "Lucky";
        } else {
            return "Unlucky";
        }
    }
}


 */