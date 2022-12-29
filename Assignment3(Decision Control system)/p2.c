#include<stdio.h>
int main()
{
    int year;
    printf("\nEnter year");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("\n%d year is leep year",year);
        }


    }
    else if(year%4==0)
    {
        printf("\n%d year is leep year",year);
    }
    else{
        printf("\nNon-Leep Year");
    }



return 0;
}
