#include<stdio.h>
void main()
{
    // variable declaration

    int n; //  set of no. for average
    int number, count=0,sum=0;
    float avg ;

    printf(" enter the set of numbers you want average for\n");
    scanf("%d", &n);

    printf("enter the numbers\n");
    while(count < n )
    {
         scanf("%d", &number);
         sum= sum +number;
         count ++;

    }
   avg= sum/n;
   printf("average of %d numbers is: %d", n , sum);
   printf(" \ntherefore the average is: %f", avg);
}
