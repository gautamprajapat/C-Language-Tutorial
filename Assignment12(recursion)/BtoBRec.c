

/*
Write a recursive function to print binary of a given decimal number
*/
#include<stdio.h>

void DtoB(int n)
{
  if(n>0)
  {
  DtoB(n/2);
  printf(" %d ",n%2);
  }

}


int main()
{

int n,i;
printf("Enter Decimal Value:");
scanf("%d",&n);

DtoB(n);
return 0;


}
