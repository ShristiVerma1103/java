 import java.util.*;
 
 // this is if else conditional statement program
 
 public class if_else {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a, b;
        System.out.print("Enter first integer: ");
        a = scanner.nextInt();
        System.out.print("Enter second integer: ");
        b = scanner.nextInt();
        scanner.close();

        if (a > b) {
            System.out.println("The first integer is greater than the second integer.");
        } else if (a < b) {
            System.out.println("The first integer is less than the second integer.");
        } else {
            System.out.println("Both integers are equal.");
        }
    }

}
