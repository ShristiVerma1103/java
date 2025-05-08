#include<stdio.h>
#include<math.h>
int roots();
void week();


int main()
{
    // if statement 
    roots();

    // switch statement
    week();    

    return 0;
}
 /*
writing  a quadratic expression program for finding its roots 
 */
 
int roots()
{
int a,b,c,D;
float X1, X2;
printf("enter the coefficients of x in expression a, b, c respectively: \n");
scanf("%d %d %d", &a,&b,&c);

D=(b*b)- 4*a*c;

if (a==0 && b==0)
{
    printf("no solution");
}
else if(a==0 && b!=0){
    printf("there is only one solution: %f", -c/b);
}
else if( D>0)
{
 printf("two distinct roots exists");
 X1 = (-b + sqrt(D))/ 2*a;
 X2 = (-b - sqrt(D))/ 2*a;

 printf(" roots are : \n  x1= %f\n x2= %f", X1,X2 );
}
else if (D==0){
    printf("two equal roots exists");
    X1 = X2 = (-b )/ 2*a;  

    printf(" roots are : \n  x1= %f\n x2= %f", X1,X2 ); 
}
else{
 printf(" two roots are imaginary \n hemce roots are no real roots");
}
 return X1, X2;   
}

/*
using switch statement for day in a week
*/

 void week ()
 {
    char a ;
    printf("\n \n enter the char for day in the week \n");
    printf("choose from these\n mon, tue,wed,thur , fri ,sat, sun respectively\n");

    scanf("%c", &a);

    switch(a){

    case 'm': printf("mon represents the Monday in the week");
              break;
    case 't': printf("tue represents the tuesday in the week");
              break;     
    case 'w': printf("wed represents the wednesday in the week");
              break;
    case 'T': printf("thur represents the thursday in the week");
              break;
    case 'f': printf("fri represents the friday in the week");
              break;
    case 'S': printf("sat represents the saturday in the week");
              break; 
    case 's': printf("sun represents the sunday in the week");
              break;  
    default:  printf("INVALID !!!");


}
}