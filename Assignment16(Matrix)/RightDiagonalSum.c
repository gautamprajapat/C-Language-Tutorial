/*Write a c program to ptint sum of the right diagonal of the matrix */
#include<stdio.h>

int main()
{

    int p,q,m,n,i,j,k,diagonalSum=0;
     printf("Enter the size of matrix1\n");
     printf("Row:");
     scanf("%d",&p);
     printf("Col:");
     scanf("%d",&q);
     int a[p][q];
     if(p==q)
     {



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
             if(i+j==p-1&&i+j==q-1)
             {
                 diagonalSum=diagonalSum+a[i][j] ;

             }

         }
     }
     printf("Right Diagonal sum of the  matrix is:%d\n",diagonalSum);
     printf("Output of the diagonal element:\n");
          for( i=0;i<q;i++)
     {
         for(j=0;j<p;j++)
         {
             if(i==j||i+j==p-1&&i+j==q-1)
             {
                 printf("%d",a[i][j]);
                 printf("\t");

             }
             else{
                printf(" ");
                printf("\t");
             }

         }
         printf("\n");
     }

     }
     else{
        printf("Square matrix is not valid:\n");
     }

}

