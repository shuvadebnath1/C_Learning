#include<stdio.h>

int main() {

    int a,b;
    // to get input from the user
    printf("Enter the first value = ");
    scanf("%d",&a);
    printf("Enter the second value = ");
    scanf("%d",&b);

    int sum = a + b;

    //Printing the final value
    printf("Sum = %d\n", sum);

    return 0;
}