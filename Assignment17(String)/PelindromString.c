//String Pelindrom

#include<stdio.h>
#include<string.h>
int main()
{
    int length,i,flag=0;
    char str[100];

    printf("Enter a string:");
    fgets(str,100,stdin);
    length = strlen(str)-1;
    printf("\%d",length);
    for(i=0;i<length;i++)
    {
        if(str[i]!=str[length-i-1])
        {
            flag=1;
            break;
        }
    }
    //printf("\n%d",flag);
    if(flag)
    {
        printf("\nNot pelindrom:%s",str);
    }
    else{
        printf("\nPelindrom:%s",str);
    }


    return 0;

}






