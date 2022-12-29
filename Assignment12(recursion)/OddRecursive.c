/*
Write a recursive function to print first N odd natural numbers
*/
#include<stdio.h>

void OddRec(int n)
{
  if(n==0)
  {
      return;
  }

  OddRec(n-1);
  printf("%d ",2*n-1);

}


int main()
{

int n=10;
OddRec(n);
return 0;


}
