/*
Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include<stdio.h>
#include<stdlib.h>
char* menu();
int main()
{
    int a,b ;
    char* op;
    printf("\nEnter first number:");
    scanf("%d",&a);
    printf("\nEnter second number:");
    scanf("%d",&b);
    if(b>0){
    op=menu();
    printf(" Operation is %s",op);
    switch(op)
    {
    case 'A':
        printf("\nThe sum id %d",a+b);
        break;
    case 'S':
        printf("\nThe subtraction id %d",a-b);
        break;
    case 'M':
        printf("\nThe multiplication id %d",a*b);
        break;
    case 'D':
        printf("\nThe division is %.2f",(a/(float)b));
        break;
    default:
        printf("\nInvalid Operator");
    }
}

    return 0;

}
char* menu()
{
    char *ch="A";




    printf("\nPress A for addition");
    printf("\nPress S for Subtraction");
    printf("\nPress M for Multiplication");
    printf("\nPress D for Division");
    printf("\nPress 5 for exit");
    printf("\nEnter Opreration:");


    return ch;
}
