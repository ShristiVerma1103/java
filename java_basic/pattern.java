public class pattern {
    public static void main(String[] args) {
        
System.out.println("solid  rectangle\n");
        // solid rectangle
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= 5; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }

 System.out.println("\nhollow rectangle\n");
        // hollow rectangle
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= 5; j++) {
                if (i == 1 || i == 4 || j == 1 || j == 5) {
                    System.out.print("* ");
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
 System.out.println("\nhalf pyramid\n");
        //half pyramid
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
 System.out.println("\ninverted half pyramid\n");
        // inverted half pyramid
        for (int i = 4; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }

        // inverted half pyramid rotated with 180 degree
 System.out.println("\ninverted half pyramid rotated with 180 degree\n");
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= 4 - i; j++) {
                System.out.print("  ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();

        }
 System.out.println("\nhalf pyramid with numbers\n");
        //half pyramid with numbers
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
System.out.println("\ninverted half pyramid with numbers\n");
        // inverted half pyramid with numbers
        for (int i = 5; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
 System.out.println("\nfloyd's triangle\n");
        // floyd's triangle
        int n=5;
        int number = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(number + " ");
                number++;
            }
            System.out.println();
        }
 System.out.println("\n0-1 triangle\n");
        //0-1 triangle
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= i; j++) {
                if ((i + j) % 2 == 0) {
                    System.out.print("1 ");
                } else {
                    System.out.print("0 ");
                }
            }
            System.out.println();
        }
}
}