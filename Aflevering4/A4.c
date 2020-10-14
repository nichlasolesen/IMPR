#include <stdio.h>
#include <math.h>

void SolveQuadraticEquation(double, double, double);
double Discriminant(double, double, double);
double GetRoot1(double, double, double);
double GetRoot2(double, double, double);

int main(void) {
    double a, b, c;

    printf("give 3 numbers \n");
    scanf("%lf %lf %lf", &a, &b, &c);
    SolveQuadraticEquation(a, b, c);

    while (a != 0 && b != 0 && c != 0)
    {
        printf("give 3 numbers \n");
        scanf("%lf %lf %lf", &a, &b, &c);
        if(a != 0 && b != 0 && c != 0)
            SolveQuadraticEquation(a, b, c); 
        else
            break;
    }
    
    return 0;
}

/* Prints roots of the quadratic equation a * x*x + b * x + c = 0 */
void SolveQuadraticEquation(double a, double b, double c)
{
    double discriminant, root1, root2;

    discriminant = Discriminant(a, b, c);

    if (discriminant < 0)
        printf("No roots\n");
    else if (discriminant == 0){
        root1 = -b/(2*a);
        printf("One root: %f\n", root1);
    }
    else {
        root1 = GetRoot1(a,b, discriminant);
        root2 = GetRoot2(a,b, discriminant);
        printf("Two roots: %f and %f\n", root1, root2);
    }
} 

double Discriminant(double a, double b, double c){
    return b * b - 4 * a * c;
}

double GetRoot1(double a, double b, double discriminant){
   return (-b + sqrt(discriminant))/(2*a);
}

double GetRoot2(double a, double b, double discriminant){
    return (-b - sqrt(discriminant))/(2*a);
}
