/*
Write a recursive function to print first N even natural numbers
*/
#include<stdio.h>

void EvenRec(int n)
{
  if(n==0)
  {
      return;
  }

  EvenRec(n-1);
  printf("%d ",2*n);


}


int main()
{

int n=10;
EvenRec(n);
return 0;


}
