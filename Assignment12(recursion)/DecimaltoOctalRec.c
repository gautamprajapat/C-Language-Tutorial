



/*
Write a recursive function to print octal of a given decimal number
*/
#include<stdio.h>

void DtoOct(int n)
{
  if(n>0)
  {
  DtoOct(n/8);
  printf("%d ",n%8);
  }

}


int main()
{

int n,i;
printf("Enter Decimal Value:");
scanf(" Octal Value is %d",&n);

DtoOct(n);
return 0;


}
