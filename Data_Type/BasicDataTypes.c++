#include <iostream>
using namespace std;

int main() {
    int i;
    long long x;
    char y;
    float z;
    double d;

    cin >> i >> x >> y >> z >> d;

    cout << i << "\n" << x << "\n" << y << "\n" << z << "\n" << d << "\n";

    return 0;
}


/*
java 
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int i;
        long x;
        char y;
        float z;
        double d;

        i = scanner.nextInt();
        x = scanner.nextLong();
        y = scanner.next().charAt(0);
        z = scanner.nextFloat();
        d = scanner.nextDouble();

        System.out.println(i);
        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
        System.out.println(d);
    }
}

*/