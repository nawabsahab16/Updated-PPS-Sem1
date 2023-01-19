/*  Aim: to find whether a year is leap or not

step1: Start
step2: Get the required year
step3: using if condition and logical operation check the year
step4: print whether the year is leap or not 
step5 : stop
*/

#include<stdio.h>
#include<conio.h>
void main() {
    int year;
    clrscr();
    printf("Enter the Year: ");
    scanf("%d, &year");
    if(year%4==0) {
        if(year%100==0){
            if(year%400==0)
            printf("%d is a leap year." , year);
            else
            printf("%d is not a leap year.", year);
        }
        else 
        printf("%d is leap year.", year);
    }
    else printf("%d is not a leap year . ", year);
    getch();
}