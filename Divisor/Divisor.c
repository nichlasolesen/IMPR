#include <stdio.h>

int GetGreaterCommonDivisor(int, int);

int main(void){
    int a = 0, b = 0, output;
    while (1)
    {
        while (a < 1 ||b < 1)
        {
            printf("\nEnter value a: ");
            scanf("%d", &a);
            printf("\nEnter value b: ");
            scanf("%d", &b);

            if(a <= 0 ||b <= 0)
                printf("\nFalse Input. Both a and b most be a positiv integer. Try again :)");
        }   
    
        output = GetGreaterCommonDivisor(a,b);
        printf("\nThe greater common divisor is: %d", output);

        a = 0;
        b = 0;
    }
    
    return 0;
}

int GetGreaterCommonDivisor(int a, int b){
    int lowerNumber = a <= b ? a: b;

    for (int i = lowerNumber; i > 0; i--)
        if(a % i == 0 && b % i == 0)
            return i;  
}
