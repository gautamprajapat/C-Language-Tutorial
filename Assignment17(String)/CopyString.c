/*Write a program in C to copy one string to another string.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    char copystr[200];
    int i;
    printf("\nEnter a string:");
    fgets(str,200,stdin);
//    strcpy(copystr,str);
//    fputs(copystr,stdout);
    for(i=0;str[i];i++)
    {
        copystr[i]=str[i];
    }
printf("\n Copied string is:%s",copystr);
    return 0;
}
