#include<stdio.h>
void main()
{
     int a[5]={2,5,8,7,10};
     int arr[10];
     int i;

     for(i=0;i<10;i++)
    {
       printf("%d\t",i);
    }
  printf("\n");
    for(i=0;i<10;i++)
    {   
        printf("enter the element of the array");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {   
        printf("%d\t",arr[i]); 
    }
}
