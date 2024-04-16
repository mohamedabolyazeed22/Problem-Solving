import java.util.Scanner;

public class Solution {

    static int[] calculateSeries(int a, int b, int n) {
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            int term = a;
            for (int j = 0; j < i; j++) {
                term += Math.pow(2, j) * b;
            }
            arr[i] = term;
        }
        return arr;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int num= scanner.nextInt();

        for (int q = 0; q < num; q++) {

            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int n = scanner.nextInt();

            int[] arr = calculateSeries(a, b, n);

            for (int i = 1; i < n; i++) {
                System.out.print(arr[i]);
                if (i < n - 1) {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }

        scanner.close();
    }
}


/*
import java.io.*;
import java.util.Scanner;

class Solution {
    public static void main(String[] argh) {

        Scanner in = new Scanner(System.in);

        int t = in.nextInt();


        for (int j = 0; j < t; j++) {

            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();

            int calce = a + b;
            System.out.print(calce + " ");

            for (int i = 1; i < n; i++) {
                calce += (Math.pow(2, i) * b);
                System.out.print(calce + " ");
            }
            System.out.println();
        }

        in.close();
    }
}

*/