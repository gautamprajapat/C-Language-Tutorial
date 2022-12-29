/*Write a program to convert a given string into uppercase
 Write a program to convert a given string into lowercase*/
 #include<stdio.h>
 #include<string.h>
 #include<ctype.h>
 void toUpper(char str[])
 {
     strupr(str);
 }

 void toLower(char str[])
 {
     strlwr(str);
 }
 int main()
 {
     int n;
     char str[200];
     printf("Enter a string\n");
     fgets(str,200,stdin);
     printf("\n1 For UpperCase\n");
     printf("\n2 For LowerCase\n");
     scanf("%d",&n);
     switch(n){
     case 1:
        toUpper(str);
        printf("%s",str);
        break;
     case 2:
        toLower(str);
        printf("%s",str);
        break;


     }
     return 0;
 }

