//Program to reverse a string//
#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int c;
    printf("Enter a string\n");
    fgets(s,50,stdin);
    char*s1;
    s1=myReverse(s);
    for(c=1;s1[c]!='\0';c++)
    {
        printf("%s ",*(s1+c));
    }

return 0;
}
char* myReverse(char*s)
{
    int length,c;
    char *begin,*end,temp;
    length=stringLength(s)-1;
    begin=s;
    end=s;
    //for(c=1;s[c]!='\0';c++)
    for(c=0;c<length-1;c++)
    {
        end++;
    }
    for(c=0;c<length/2;c++)
    {
        temp=*end;
        *end=*begin;
        *begin=temp;
        begin++;
        end--;
    }
    //printf("\nReversed String is:\t%s",s);
    return *s;

}
int stringLength(char* s)
{

    int c=0;
    while(*(s+c)!='\0')
    {
        c++;
    }
    return c;
}
