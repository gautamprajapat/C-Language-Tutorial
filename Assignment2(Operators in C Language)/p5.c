#include<stdio.h>
//Write a program to input a three-digit number and display the sum of the digits.

int main()
{
    int num,r,sum=0;

    printf("\nEnter a three digit number:");
    scanf("%d",&num);
    while(num)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;

    }
    printf("\nSum of three digit number is %d",sum);

    return 0;
}
