#include<stdio.h>
#include<stdbool.h>

int main(void){
    bool running = true;

    float r;
    float area;
    const float pi = 3.14159;

    printf("---Circle Area Calculator---\n");
    while (running)
    {
        printf("\nEnter a radius: ");
        scanf("%f", &r);

        area = pi * r * r;
        printf("\nThe area of the circle is: %f ", area);

    }
    return 0;
}