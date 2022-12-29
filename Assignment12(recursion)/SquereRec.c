/*
Write a recursive function to print squares of first N natural numbers
*/
#include<stdio.h>

void EvenRec(int n)
{
  if(n==0)
  {
      return;
  }


  EvenRec(n-1);
  printf("%d ",n*n);



}


int main()
{

int n=10;
EvenRec(n);
return 0;


}
