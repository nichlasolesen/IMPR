#include <stdio.h>

int main(void){
    int n = 1,m = 0;
    int hyp, side1, side2;

    while (n > m)
    {
        printf("Definer n: ");
        scanf("%d", &n);
        printf("Definer m: ");
        scanf("%d", &m);
        if(n > m)
            printf("n is greater than m, try again.\n");
    }
    side1 = m*m-n*n;
    side2 = 2*m*n;
    hyp = m*m+n*n;

    printf("\nSide1 = %d \nSide2 = %d \nHypotenuse = %d\n", side1, side2, hyp);
    
}