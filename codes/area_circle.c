#include<stdio.h>
//Its a area calculator
//It can clculate area of a circle
int main() {
    float r ;
    float pi =3.1416;
    printf("Enter the value of Radius = ");
    scanf("%f",&r);
    printf("The area of the circle = %f\n",pi*r*r);
    return 0;
}
