// table from 1 to n with different loops
#include<stdio.h>
#include<stdio.h>

void table_for(int n)
{
    for(int i=1; i<=n; i++){
        for(int j=1; j<=10; j++)
        {
          printf("%d\t", i*j);
        }
        printf("\n");
    }
}

void table_while(int n){
      int i=1;
    while(i<=n){
                  int j=1;
                  while(j<=10)
                  {
                     printf("%d\t", i*j);
                     j++;
                  }
                  printf("\n");
                  i++;
    }
}

void table_dowhile(int n){
          int i=1;
          do{
              int j=1;
              do{
                  printf("%d\t", i*j);
                  j++;
              } while(j<=10);
              printf("\n");
              i++;
          } while(i<=n);
}

void main()
{
    int n;
    printf("enter the number till you want the table from:\n");
    scanf("%d", &n);

    table_for(n);
    printf("\n\n");

    table_while(n);
    printf("\n\n");

    table_dowhile(n);
}
