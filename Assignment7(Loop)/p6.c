
#include<stdio.h>
//Write a program to print all Prime numbers under 100
// Write a program to print all Prime numbers between two given numbers

#include<stdio.h>




int main()
{
    int i,j,n=100,count;
//    printf("\nEnter the required term:");
//    scanf("%d",&n);

    for(int i=1;i<100;i++)
    {

        count=0;
      for(j=1;j<=i;j++)
      {
            if(i%j==0)
            {
                count++;
            }
        }


    //printf("\n%d",count);
    if(count==2)
        printf("\nPrime number%d",i);

}
return 0;
}


