/*Write a program in c to transpose a given matrix*/
#include<stdio.h>
int main()
{

    int p,q,m,n,i,j,k,sum=0;
     printf("Enter the size of matrix1\n");
     printf("Row:");
     scanf("%d",&p);
     printf("Col:");
     scanf("%d",&q);
     int a[p][q];

     printf("Enter element in  matrix1");
     for(i=0;i<p;i++)
     {
         for(j=0;j<q;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }

   printf("matrix1:\n");
     for(i=0;i<p;i++)
     {
         for(j=0;j<q;j++)
         {
             printf("%d ",a[i][j]);
         }
         printf("\n");
     }

     int b[q][p];
     for( i=0;i<q;i++)
     {
         for(j=0;j<p;j++)
         {
             b[i][j]=a[j][i];
         }
     }
     printf("Transpose matrix is:\n");
    for(i=0;i<q;i++)
     {
         for(j=0;j<p;j++)
         {
             printf("%d ",b[i][j]);
         }
         printf("\n");
     }

}
