import java.util.Scanner;

public class intToString {

        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);

            int n = scanner.nextInt();
            scanner.close();

            String s = Integer.toString(n);

            if (s != null && s.equals(100)) {
                System.out.println("Good job");
            } else {
                System.out.println("Wrong answer"); 
            }
        }
    }


