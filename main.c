#include <stdio.h>
#include <stdlib.h>

#include "complexNumbers.h"
#include "quadraticEquationSolver.h"

int main(int argc, char** argv) {
    
    float a, b, c;
    complexNumber x1, x2;
    
    printf("Inserisci a: ");
    scanf("%f", &a);
    printf("Inserisci b: ");
    scanf("%f", &b);
    printf("Inserisci c: ");
    scanf("%f", &c);
    
    x1 = calcoloX1(a, b, c);
    x2 = calcoloX2(a, b, c);
    
     printf("\nx1: %s\nx2: %s\n", formatComplexNumber(x1), formatComplexNumber(x2));

    return (EXIT_SUCCESS);
}