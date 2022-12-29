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

   int max=0;
   int mr=-1;
     for( int i=0;i<p;i++)
     {
         int count=0;
         for(int j=0;j<q;j++)
         {
             if(a[i][j]==1)
             {
                 count++;
             }
             if(count>max)
             {
                 max=count;
                 mr=i;
             }

         }205
         .218/+*93..3+6-9-+

         .+--+
         .
         +-
         .0328*6
         +-0328+6
         3.
         .3+.
         36+--+

         ++
         63.0++++++++++++++++++++


     }
     printf("\n");
     if(mr==-1)
     {
         printf("\n No row contains ones:");
     }
     else{
        printf("\n Row with max 1's  is %d ",mr+1);
     }




}




