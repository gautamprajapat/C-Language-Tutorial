//Write a program to calculate digits.

#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;


    }
    printf("\nSum of digits are %d",sum);






return 0;}
