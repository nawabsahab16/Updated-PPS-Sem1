#include<stdio.h>
#include<conio.h>
void main() {
    float celsius, fahrenheit;
    clrscr();
    printf("%f, &celsius");
    scanf("%f, &celsius");
    fahrenheit = (1.8* celsius) + 32;
    printf("\n Temeprature in fahrenheit : %f, fahrenheit");
    getch();
}