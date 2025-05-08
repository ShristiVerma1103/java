// operartor in C
#include<stdio.h>
void main()
{
    // arithmetic operator

 int a,b, sum, sub, mod, mul ;
 float div;
 printf("enter two numbers\n");
scanf ("%d %d", &a,&b);
// operations

 sum=a+b;
 sub=a-b;
 mod=a%b;
 mul= a*b;
 div= a/b;

 printf("printing arithematic operations\n");
 printf("sum = %d\n sub= %d \n mod= %d \n mul= %d \n div= %f", sum, sub, mod , mul, div );

 // REALATIONAL OPERATORS(<,>, >=,<=,==,!=)
        //  with LOGICAL OPERATORS(&&, ||, !)
// (comparisons of variables)        

 int x=10, y=5, z=8 ;
 if (x>y && x>z)
 {
    printf("a is greater");

 }
 if (x<y || y<z)
 {
    printf("c is greater");

 }
if (x!=y)
{
    printf("a is not equal to b");
}
}
