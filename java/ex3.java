import java.util.Scanner;

public class ex3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char letter = scanner.next().charAt(0);
        char nextLetter = (char) (letter + 1);
        System.out.println(nextLetter);
    }
}
