/*Write a program in C to count the total number of alphabets, digits and special
characters in a string*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    printf("\nEnter a string:");
//    fgets(str,50,stdin);//fgets count space or newline into special character
gets(str);
    int AlphaCount=0,digitCount=0,SpecialCount=0;
   for(int i=0;str[i];i++)
    {
        if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
        {
            AlphaCount++;
        }
        //else if(str[i]>='0'&&str[i]<='9')
             else if(str[i]>=48&&str[i]<=57){
                digitCount++;

        }
        else{
            SpecialCount++;
        }
    }
    printf("\nThe string has %d Alphabets ,\n%d Digits and \n%d SpecialCacracter",AlphaCount,digitCount,SpecialCount);

    return 0;
}
