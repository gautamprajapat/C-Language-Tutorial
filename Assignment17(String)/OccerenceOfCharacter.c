
/* Write a program to count the occurence of a given character*/


#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];

    int i,count=0;
    printf("Enter the string\n");
    fgets(str,30,stdin);
    char ch;
    printf("\nEnter the character\n");
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    {
        if(str[i]==ch){
                count++;
        }

    }
    printf("\nFrequency of character %c  is %d",ch,count);
}
