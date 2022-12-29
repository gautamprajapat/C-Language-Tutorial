/*
. Write a program to find second largest in an array.Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int i,n;
    float avg,sum=0.0;

    printf("Enter size of Array\n");
    scanf("%d",&n);
    float arr[n];
    printf("Enter  %d number in Array\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d.Enter number",i+1);
        scanf("%f",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%f ",arr[i]);
    }
