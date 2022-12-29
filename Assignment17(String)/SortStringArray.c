/*Write a C program to sort a string array in ascending order.*/
/*Write a program in C to copy one string to another string.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[200],temp;

    int i,j,length;
    printf("\nEnter a string:");
    fgets(str,200,stdin);
    length=strlen(str)-1;
    printf("\n%d ",length);

//    for(i=0;i<length;i++)
//    {
//        for(j=i+1;j<length;j++)
       for(i=0;i<length;i++)
       {
           for(j=0;j<length-i-1;j++)
           {

            if(str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
printf("\n Sorted string is:%s",str);
    return 0;
}

