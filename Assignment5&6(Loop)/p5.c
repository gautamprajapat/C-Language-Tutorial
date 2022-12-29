/*  Write a program to calculate factorial of a number
7. Write a program to count digits in a given number
*/

#include<stdio.h>
void countDigit();
void revNum();
int main()
{
    printf("\n *************************** Factorial ***************************");
    int n,i,fact=1;
    printf("\nEnter a number :");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("\nfactorial of the number is %d",fact);
    countDigit();
    primeNum();
    revNum();

return 0;
}

void countDigit()
{
    printf("\n *************************** Count Digit ****************************");
    int num,count=0;
    printf("\n Enter number");
    scanf("%d",&num);
    while(num>0)
    {
        num=num/10;
        count++;

    }
    printf("\nNumber of digits are:%d",count);

}

void revNum()
{
      printf("\n *************************** Reverse Number ****************************");
      int num,rem,rev=0;
      printf("\nEnter a number:");;
      scanf("%d",&num);
      while(num>0)
      {
          rem=num%10;
          rev=rev*10+rem;
          num=num/10;
      }
      printf("\nReversed number is %d",rev);



}


