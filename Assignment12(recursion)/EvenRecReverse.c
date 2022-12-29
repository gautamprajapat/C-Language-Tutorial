/*
Write a recursive function to print first N even natural numbers in reverse Order
*/
#include<stdio.h>

void EvenRec(int n)
{
  if(n==0)
  {
      return;
  }

  printf("%d ",2*n);
  EvenRec(n-1);



}


int main()
{

int n=10;
EvenRec(n);
return 0;


}
