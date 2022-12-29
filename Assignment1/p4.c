#include<stdio.h>
#include<math.h>
#define Pi 3.14
/*WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius.*/
int main()
{
    int r;
    double area;
    printf("\nEnter the radius of circle:");
    scanf("%d",&r);
    area=Pi*r*r;
    printf("\nArea of circle is %0.2lf having the radius %d",area,r);

    return 0;
}
