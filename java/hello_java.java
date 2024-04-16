import java.util.Scanner;

public class hello_java {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read two strings
        String firstString = scanner.nextLine();
        String secondString = scanner.nextLine();

        int sumOfLengths = firstString.length() + secondString.length();
        System.out.println(sumOfLengths);

        String comparisonResult = (firstString.compareTo(secondString) > 0) ? "Yes" : "No";
        System.out.println(comparisonResult);

        String capitalizedFirstString = firstString.substring(0, 1).toUpperCase() + firstString.substring(1);
        String capitalizedSecondString = secondString.substring(0, 1).toUpperCase() + secondString.substring(1);
        System.out.println(capitalizedFirstString + " " + capitalizedSecondString);

    }
}