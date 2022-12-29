/* Lower triangular matrix */
#include<stdio.h>
#define n 3

int main()
{

    int a[n][n];

    printf("Enter element in the triangle:");
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);


        }
    }

    printf("Lower triangular matrix is :\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>i)
            {
                printf("0 ");

            }
            else{
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }

}






