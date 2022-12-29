#include<stdio.h>
//. Write a program to swap values of two int variables without using a third variable
int main()
{
int a,b;
//int x=5,y;
//y=x++;
//printf("\n%d%d",x,y);
printf("Enter numbers:");
scanf("%d%d",&a,&b);
if(a>b){
    a=a-2;
    b=b+2;

}
else{
    a=a+2;
    b=b-2;
}
printf("\n Swapped Num %d%d",a,b);


return 0;
}
