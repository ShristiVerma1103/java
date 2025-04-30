#include<stdio.h>
void main()
{
    // variable declaration

    int n; //  set of no. for average
    int number, count;
    float avg, sum=0;

    printf(" enter the set of numbers you want average for");
    scanf("%d", &n);

    printf("enter the numbers");
    while(count < n )
    {
         scanf("%d", &number);
         sum= sum +number;
         count ++;

    }
   average= sum/n;
   printf("average of %d numbers is: %d", n , sum);
   printf(" therefore the average is: %d", avg);
}