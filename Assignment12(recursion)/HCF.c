#include<stdio.h>
int main()
{

  int a,b,result;
  printf("Enter two number:");
  scanf("%d%d",&a,&b);

  result=HCF(a,b);
  printf("%d ",result);
  return 0;
}


int HCF(int a,int b)
{

    if(a==0)
        return b;
    HCF(b%a,a);
}
