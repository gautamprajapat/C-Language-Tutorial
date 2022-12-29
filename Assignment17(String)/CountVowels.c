/* Write a program to count vowels in a given string*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isVowel(ch)
{
    ch=tolower(ch);
    if(ch=='a'||
       ch=='e'||
       ch=='i'||
       ch=='o'||
       ch=='u')
    {
        return 1;

    }
    else{
        return 0;
    }
}
int getVowelCount(char str[])
{
    int i,count=0;
    for(i=0;str[i];i++)
    {
        if(isVowel(str[i]))
            count++;
    }
    return count;

}
int main()
{
    int n;
    char str[200];
    printf("Enter a string\n");
    fgets(str,200,stdin);
    n=getVowelCount(str);
    printf("\nNumber of Vowels:%d",n);
    return 0;

}
