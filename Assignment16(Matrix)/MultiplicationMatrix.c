/*Program to add two matrix of 3*3  */

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
     printf("Enter element in  matrix1\n");
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

     printf("Enter the size of matrix2\n");

     printf("Row:");
     scanf("%d",&m);
     printf("Col:");
     scanf("%d",&n);

     int b[m][n];
     int c[m][n];



      printf("Enter element in  matrix2\n");
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
    if(q==m)
     {

     printf("Product of Matrix1 and Matrix2 is  Matrix3:\n");

       for(i=0;i<m;i++)
     {

         for(j=0;j<n;j++)
         {
             sum=0;
             for(k=0;k<m;k++)
             {
                 sum=sum+a[i][k]*b[k][j];
                 c[i][j]=sum;
             }

         }
     }


     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             printf("%d ",c[i][j]);
         }
         printf("\n");
     }
     }
     else{
        printf("Multiplication is not possible:\n");
     }



}
