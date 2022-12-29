#include<stdio.h>
#include<string.h>
int main()
{
    char city[10];

    int i,count=0;
    printf("Enter city name\n");
    fgets(city,10,stdin);
    for(i=0;city[i];i++)
    {
        count++;
    }
    printf("\nLength of the string is %d",count);
}
