//Program to reverse a string//
#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("Enter a string\n");
    fgets(s,50,stdin);



    myReverse(s);



return 0;
}
void myReverse(char*s)
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
    printf("\nReversed String is:\t%s",s);

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
