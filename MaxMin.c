/* step1: Start
   step2: Get the size of the array and get the elements of the array
   step3: let the zero th index number is maximum and minimum
   step4: compare the zero index number with 1st element in array
   step5: if the 1st index element is greater than the 0th index element then set 1st index element as greater
   step6: add all the numbers in the array and find the average of the numbers
   step8: stop

*/

#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int i,max,min,size,sum;
    float avg;
    clrscr();
    printf("Enter size of the array: \n");
    scanf("%d" , &size);
    printf("Enter elements in the array:\n");
    for(i=0; i<size; i++) 
    {
        scanf("%d", &arr[i]);

    }
    max = arr[0]; min = arr[0];
    for(i=1; i<size; i++) {
        if(arr[i]>max) 
        {
            max=arr[i];
        }
        if(arr[i] < min) 
        {
            min=arr[i];
        }

    }
    for(i=0;i<size; i++) 
    {
        sum=sum+arr[i];
    }
    avg=sum/size;
    printf("Maximum element = %d\n", max);
    printf("Minimum element =%d\n", min);
    printf("average = %.1f\n" ,avg);
    getch();
    return 0;
}