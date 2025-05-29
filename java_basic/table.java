import java.util.*;


public class table {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter the number you wnat to print table for");
        int number = scanner.nextInt();
        System.out.println("Multiplication table for " + number + ":");

        for (int i = 1; i <= 10; i++) {
            int result = number * i;
            System.out.println(number + " x " + i + " = " + result);
        }

    }
}
