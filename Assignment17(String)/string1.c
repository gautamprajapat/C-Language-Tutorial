#include<stdio.h>
#include<string.h>
int main()
{
//    char city[10]={'B','H','O','P','A','L'};
//    //char city="Delhi";
//
//    int i,count=0;
//    //for(i=0;city[i]!='\0';i++)
//    for(i=0;city[i];i++)
//    {
//        count++;
//    }
//    printf("\nLength of the string is %d",count);



char str[20];
//char str2[20]="BHOPAL";

printf("Enter your name:");
//scanf("%s",str);
//printf("Hello %s",str);


//Using gets function
//gets(str);
fgets(str,20,stdin);
//char*str1;
//str1=strupr(str);
//strupr(str);
//strlwr(str);
//strrev(str);
//strcpy(str,str2);
//strcpy(str,"NewDelhi");
//strcat(str,"Prajapati");
//int r=strcmp("Amar","Amar");
//printf("%d ",r);
////printf("Hello %s",str);
////fputs(str,stdout);

char*s=mystrUper(str);
display(s);




    return 0;

}

char* mystrUper( str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    return str*;

}
void display(str)
{
    int i;
    for(i=0;str[i];i++)
    {
        printf("%c ",str[i]);
    }
}
