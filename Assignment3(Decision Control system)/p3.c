#include<stdio.h>
//Write a program to check whether a given character is an alphabet (uppercase), an
//alphabet (lower case), a digit or a special character
int main()
{
    char ch;
    printf("\nEnter the character\n");
    scanf("%c",&ch);
    if((ch>='a')&&(ch<='z'))
    {
        printf("\nLower-case");

    }
    else if((ch>='A')&& (ch<='Z'))
    {
        printf("\nUpper-case");
    }
    else if((ch>=0)||(ch<=9)){
        printf("\nNumber");
    }
    else{
        printf("\nSpecial Character");
    }







    return 0;
}
