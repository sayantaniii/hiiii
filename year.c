#include<stdio.h>

int main ()
{
    int year;
    printf("enter a 4 digit year\n");
    scanf("%d",&year);

    if (year%400==0 || year%4==0 )
    {
        printf("given year is a leap year");
    }
    else{
        printf("given year is not a leap year");
    }
    return 0;
}