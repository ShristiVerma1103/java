import java.util.*;


public class calculator {
    public static void main(String[] args) {
    Scanner sc= new Scanner(System.in);
    int result = 0;
    int a= sc.nextInt();
    int b= sc.nextInt();
    
     System.out.println("enter the operation character you want to perform at operator(+,-,*,/,%): ");
    String operator = sc.next();
     
    
    switch(operator) {
        case "+":{
            result = a + b;
            break;
        }
        case"-": {
            result = a - b;
            break;
        }
        case "*":{
            result = a * b;
            break;
        }
        case "%":{
            result= a % b;
            break;    
        }
        case "/":
            if (b != 0) {
                result = a / b;
            } else {
                System.out.println("Error: Division by zero is not allowed.");
                return; // Exit the program if division by zero
            }
            break;
        default:
            System.out.println("Invalid operator. Please use +, -, *, or /.");
            return; // Exit the program for invalid operator
    }
    
    System.out.println("Result: " + result);

}
}