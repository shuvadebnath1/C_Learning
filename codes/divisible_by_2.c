#include<stdio.h>
//This code shows if a number is divisible by 2 or not
//If the output is 0 it is false
//if the output is 1 it is true
int main() {
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("%d\n", a%2 == 0);
    return 0;
}