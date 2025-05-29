import java.util.*;

// This program calculates the sum of two integers

public class sum {
    
    public static void main(String[] args) {
        int a,b, sum=0;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter first integer: ");
        a = scanner.nextInt();
        System.out.print("Enter second integer: ");
        b = scanner.nextInt();
        scanner.close();


        sum= a+b;

        System.out.println("The sum is: " + sum);
    }

}
