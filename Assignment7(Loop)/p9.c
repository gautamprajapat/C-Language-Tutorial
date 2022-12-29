#include<stdio.h>
int main()
{
    int i,r,s=0,temp;
    for(i=1;i<=1000;i++)
    {
        temp=i;
        while(temp>0)
        {
            r=temp%10;
            s=s+(r*r*r);
            temp=temp/10;
        }
        if(i==s)
        {
           printf("\n%d",i);
        }

        s=0;
    }
    return 0;
}
