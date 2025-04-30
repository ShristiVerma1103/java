 // program to subtract two number from user
#include<stdio.h>
void main()
{
    // variable declaration
    int a, b, sub=0;       
    printf(" enter the two digit for sum");

    //input of two numbers from user
    scanf("%d %d", &a, &b);

    //subtract operation by no. comparision
    if (a>b)
    {
    sub= a-b;
    }
   
    else
    {
    sub= b-a;
    }
    

}