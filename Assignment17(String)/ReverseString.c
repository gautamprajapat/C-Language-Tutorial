//Program to reverse a string//
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[30];
    char t;
    printf("Enter a string\n");
    fgets(str,30,stdin);
    int startIndex=0;
    int endIndex=strlen(str)-1;
    //printf("\n%d ",endIndex);

    while(startIndex<=endIndex)
    {
        t=str[startIndex];
        str[startIndex]=str[endIndex];
        str[endIndex]=t;
        startIndex++;
        endIndex--;

    }
    printf("\n%s ",str);


return 0;
}
