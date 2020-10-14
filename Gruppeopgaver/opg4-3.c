#include <stdio.h>

int main(void){
    int input, output;

    printf("Enter n: ");
    scanf("%d", &input);
    
    if(input > 0)
    {
        output = input;
        for (int i = input; i < input *2; i++)
            output += i;    
    }
    else
    {
        output = input*2;
        for (int i = input*2; i > input; i--)
            output += i;       
    }
    printf("\n output: %d", output);
    return 0;
}