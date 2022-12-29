/*
10. Write a program in C to Find the Frequency of Characters*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str[100];
    char freq[150]={0};
    printf("Enter a String:");
    //fgets(str,50,stdin);
    gets(str);

//    while(str[i]!='\0')
//    {
//        freq[str[i]]++;
//        i++;
//    }
    for(i=0;str[i];i++)
     {
    freq[str[i]]++;
     }

    for(j=0;j<150;j++)
    {
        if(freq[j]!=0)
        {
            printf("%c==>%d\n",j,freq[j]);
        }
    }


    return 0;
}
