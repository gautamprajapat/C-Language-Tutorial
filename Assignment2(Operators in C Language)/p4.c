#include<stdio.h>
//Write a program to print a given number without its last digit.
int main()
{
int num;
printf("Enter a number:");
scanf("%d",&num);
printf("\n Number wirhout last digit is %d",num/10);
return 0;
}
