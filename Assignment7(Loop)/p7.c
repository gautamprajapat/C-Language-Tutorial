/*
Write a program to find next Prime number of a given number
9. Write a program to check whether a given number is an Armstrong number
or not
10. Write a program to print all Armstrong numbers under 100
*/
#include<stdio.h>
#include<math.h>
void main()
{
   int n,i,j,flag=0,out;

   printf("enter the num\n");

   scanf("%d",&n);

   for(i=n+1;;i++)
   {

      flag=0;

      for(j=2;j<i;j++)
      {
         if(i%j==0)
         {
            flag=1;
            break;
         }
      }

      if(flag==0)
      {
         printf("next prime is:%d",i);
         break;
      }
   }

}
