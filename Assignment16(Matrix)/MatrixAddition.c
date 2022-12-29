/*Program to add two matrix of 3*3  */

#include<stdio.h>
int main()
{
     int p,q,m,n,i,j;
     printf("Enter the size of matrix1");
     scanf("%d %d",&p,&q);
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

     printf("Enter the size of matrix2");
     scanf("%d %d",&m,&n);
     int b[m][n];
     int c[m][n];
      printf("Enter element in  matrix2");
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             scanf("%d",&b[i][j]);
         }
     }
     printf("Matrix2:\n");

     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             printf("%d ",b[i][j]);
         }
         printf("\n");
     }

     printf("Sum of Matrix1 and Matrix2 is  Matrix3:\n");
       for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
            c[i][j]=a[i][j]+b[i][j];
         }
     }


     for(i=0;i<p;i++)
     {
         for(j=0;j<q;j++)
         {
             printf("%d ",c[i][j]);
         }
         printf("\n");
     }



}
