#include<stdio.h>int
main(){
    int a,b,c,big;
    printf("Enter the Numbers :");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b && a>c);
    big=a;
    else if(b>a&&b>c)
    big=b;
    else
    big=c;
    printf("Largest number is=%d, big");
    return 0;    
}