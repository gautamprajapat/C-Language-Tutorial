#include<stdio.h>
//WAP to find the first set bit in LSB
int main()
{
int n;
n=64;
int pos=1,m=1;
while(!(n&m))
{
    m=m<<1;
    pos++;

}
printf("%d",pos);
return 0;




}

