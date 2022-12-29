/*
Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include<stdio.h>
int main()
{
    int a,b ;
    int op;
    printf("\nEnter first number:");
    scanf("%d",&a);
    printf("\nEnter second number:");
    scanf("%d",&b);
    if(b>0){
    op=menu();
    switch(op)
    {
    case 1:
        printf("\nThe sum id %d",a+b);
        break;
    case 2:
        printf("\nThe subtraction id %d",a-b);
        break;
    case 3:
        printf("\nThe multiplication id %d",a*b);
        break;
    case 4:
        printf("\nThe division is %.2f",(a/(float)b));
        break;
    default:
        printf("\nInvalid Operator");
    }
}

    return 0;

}
int menu()
{
    int c;


    printf("\nPress 1 for addition");
    printf("\nPress 2 for Subtraction");
    printf("\nPress 3 for Multiplication");
    printf("\nPress 4 for Division");
    printf("\nPress 5 for exit");
    printf("\nEnter Opreration:");

    scanf("%d",&c);
    return c;
}
