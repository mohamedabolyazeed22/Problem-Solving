import java.util.Scanner;

public class ex6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int year = scanner.nextInt(); 

        int result = calculateValue(year);
        System.out.println("Result: " + result);

        scanner.close(); 
    }

    public static int calculateValue(int year) {
        if (year % 100 == 0) {
            return year / 100;
        } else {
            return year / 100 + 1;
        }
    }
}
