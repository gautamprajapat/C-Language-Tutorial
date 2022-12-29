/* Program to print frequency of each character element*/
#include<stdio.h>
int main()
{
    int a[10]={2,3,5,2,3,7,8,5,7,2};
    int freq[100]={0},i;
    for(i=0;i<10;i++)
    {
        freq[a[i]]++;
    }
//    for(i=0;i<10;i++)
//    {
//        printf("\n%d ==> %d ",a[i],freq[a[i]]);
//    }
//improved version
for(i=0;i<100;i++)
    {
        if(freq[i]!=0){
            printf("\n%d ==> %d ",i,freq[i]);
        }

    }


return 0;

}
