#include <stdio.h>
#include <stdlib.h>

#include "complexNumbers.h"
#include "quadraticEquationSolver.h"

int main(int argc, char** argv) {
    
    float a, b, c;
    complexNumber x1, x2;
    
    puts("Benvenuto nel più innvoativo software di calcolo soluzioni per equazioni");
    puts("di secondo grado in forma canonica: a*x^2 + b*x + c = 0\n");
    
    printf("Inserisci il coefficiente a: ");
    scanf("%f", &a);
    printf("Inserisci il coefficiente b: ");
    scanf("%f", &b);
    printf("Inserisci il coefficiente c: ");
    scanf("%f", &c);
    
    x1 = computeX1(a, b, c);
    x2 = computeX2(a, b, c);
    
    printf("\nx1: %s\nx2: %s\n", formatComplexNumber(x1), formatComplexNumber(x2));
    
    return (EXIT_SUCCESS);
}

