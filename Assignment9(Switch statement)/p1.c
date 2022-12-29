/*
1. Write a program which takes the month number as an input and display
number of days in that month.

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter month number:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("\n January 31");
        break;
    case 2:
        printf("\n Fabruary 28 or 29");
        break;
    case 3:
        printf("\n March 31");
        break;
    case 4:
        printf("\n April 30");
        break;
    case 5:
        printf("\n May 31");
        break;
    case 6:
        printf("\n June 30");
        break;
    case 7:
        printf("\n July 31");
        break;
    case 8:
        printf("\n August 31");
        break;
    case 9:
        printf("\n September 30");
        break;
    case 10:
        printf("\n October 31");
        break;
    case 11:
        printf("\n November 30");
        break;
    case 12:
        printf("\n December 31");
        break;
    default:
        printf("\n Invalid month numbder");
    }
    return 0;
}
