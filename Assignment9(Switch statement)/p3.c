/*
Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/
#include<stdio.h>
int main()
{
    int a,b,c ;
    int choice;
    while(1)
    {
    printf("\n1. for Isosceles Triangle");
    printf("\n2. for Right Angled Triangle");
    printf("\n3. for Equileteral Triangle");
    printf("\n4. for Exit");
    printf("\nEnter  sides of triangle");

    scanf("%d%d%d",&a,&b,&c);
    printf("\nEnter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        if(a==b||b==c||c==a)
        {
            printf("\n Isosceles triangle");

        }
        else{
            printf("\nNot Isosceles");
        }
        break;
    case 2:
        if((a*a)+(b*b)==c*c || (b*b)+(c*c)==a*a || (c*c)+(a*a)==(b*b))
        {
            printf("\nright angled Triangle");
        }
        else
        {
            printf("\nNot right angled Triangle ");
        }
        break;

    case 3:
        if(a==b && b==c && c==a)
        {
            printf("\nEquileteral Triangle");
        }
        else
        {
           printf("\nNot right Equileteral ");
        }
        break;
    case 4:
        exit(1);
//        break;

    default:
        printf("\nInvalid Inputs");
    }
    }


}
