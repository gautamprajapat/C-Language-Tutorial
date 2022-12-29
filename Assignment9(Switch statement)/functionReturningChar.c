#include<stdio.h>
char* display();
int main()
{
    char *str;
    str=display();
    printf(" string is: %s ",str);


}

char* display()
{
    char *str="a";

    return str;
}
