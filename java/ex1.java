import java.util.Scanner;

public class ex1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String expression = scanner.nextLine();
        String[] parts = expression.split("[\\+\\-\\*/]");
        int A = Integer.parseInt(parts[0]);
        char operation = expression.charAt(parts[0].length());
        int B = Integer.parseInt(parts[1]);
        int result = 0;
        switch (operation) {
            case '+':
                result = A + B;
                break;
            case '-':
                result = A - B;
                break;
            case '*':
                result = A * B;
                break;
            case '/':
                result = A / B;
                break;
        }

        System.out.println(result);
    }
}
