/*Write a c program to ptint sum of the row and column+ of the matrix */
#include<stdio.h>

int main()
{

    int p,q,count=0;
     printf("Enter the size of matrix1\n");
     printf("Row:");
     scanf("%d",&p);
     printf("Col:");
     scanf("%d",&q);
     int a[p][q];

     printf("Enter element in  matrix1");
     for(int i=0;i<p;i++)
     {
         for(int j=0;j<q;j++)
         {
             scanf("%d",&a[i][j]);
         }

     }

   printf("matrix1:\n");
     for(int i=0;i<p;i++)
     {
         for(int j=0;j<q;j++)
         {
             printf("%d ",a[i][j]);
         }
         printf("\n");
     }

    int index=-1;
    int c[q];
     for( int i=0;i<p;i++)
     {
         int count=0;
         for(int j=0;j<q;j++)
         {
             if(a[i][j]==1)
             {
                 count++;
             }

         }
         c[i]=count;

     }
     printf("\n");
     for(int i=0;i<p;i++)
     {
         printf("\n%d Row with %d 1's  ",i,c[i]);
     }

}




