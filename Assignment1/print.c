//program to check greatest number among three number.Print number once if the greatest number appears two or three times

#include<stdio.h>
int main()
{

  int a,b,c,i;
  for(i=0;i<3;i++){
  printf("\nEnter three number:");
  scanf("%d%d%d",&a,&b,&c);
//  a>b?a>c?printf("%d",a):printf("%d",c):b>c?printf("%d",b):printf("%d",c);
   printf("%d",a>b?a>c?a:c:b>c?b:c);


  }

  return 0;
}

