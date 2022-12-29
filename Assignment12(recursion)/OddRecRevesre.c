/*
4. Write a recursive function to print first N odd natural numbers in reverse order
*/
#include<stdio.h>

void OddRec(int n)
{
  if(n==0)
  {
      return;
  }
  printf("%d ",2*n-1);
  OddRec(n-1);


}


int main()
{

int n=10;
OddRec(n);
return 0;


}
