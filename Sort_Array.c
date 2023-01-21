#include<stdio.h>
#include<conio.h>
void main()  
{
    int a[20],i,j,n,t,k;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    for(i=0;i<n;i++);
    {
        printf("Enter the number %d:", i);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }

printf( " \n print the sorted elements \n");
for(i=0;i<n;i++)
{
    printf("\t %d", a[i]);
}

printf("\n\n\n Enter the position of element: \n");
scanf("%d", &k);
printf("\n the %d smallest element of the list is %d\n",k, a[k-1] );

}