#include<stdio.h>
#include<stdio.h>
void add(int[3][3], int[3][3]);
void mul(int[3][3], int[3][3]);
void transpose(int[3][3]);
void starprint();
void M_print(int[3][3], int[3][3]);
int main()
{
    int a[3][3],b[3][3],i,j;
    int choice;
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    

    printf("Enter the elements of second matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    do
    {
        printf("1. Addition\n");
        printf("2. Multiplication\n");
        printf("3. Transpose\n");
        printf("4. Star Print\n");
        printf("5. Print Matrices\n");
        printf("6. Exit\n");
        printf("Enter your choice:\n");
        int ch;
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: add(a,b);
                    break;
            case 2: mul(a,b);
                    break;
            case 3: transpose(a);
                    break;
            case 4: starprint();
                    break;
            case 5: M_print(a,b);
                    break;
            case 6: return 0;
                    break;
            default: printf("Invalid choice\n");
                     break;
        }
        printf("Do you want to continue? (1 for yes, 0 for no): ");
        scanf("%d",&choice);
    } while (choice==1);


}
void add(int x[3][3], int y[3][3])
{  int z[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            z[i][j]=x[i][j]+y[i][j];
        }
    }
    printf("Addition of two matrices is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",z[i][j]);
        }
        printf("\n");
    }

}

void mul(int x[3][3], int y[3][3])
{
    int i,j,k;
    int c[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)   
            {
                c[i][j]=c[i][j]+x[i][k]*y[k][j];
            }
        }
    }
    printf("Multiplication of two matrices is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

void transpose(int x[3][3])
{
    int i,j;
    int t[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            t[i][j]=x[j][i];
        }
    }
    printf("Transpose of the matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
}
void starprint()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void M_print(int x[3][3], int y[3][3])
{
    printf("First matrix is:\n");
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix is:\n");
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",y[i][j]);
        }
        printf("\n");
    }
}
}