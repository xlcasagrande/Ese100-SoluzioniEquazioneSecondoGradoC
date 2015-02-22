#include "quadraticEquationSolver.h"

#include <math.h>

float computeDeterminant(float a, float b, float c) {
    return (float)pow(b, 2) - 4 * a * c;
}

complexNumber computeX1(float a, float b, float c) {
    complexNumber r;
    double delta;
    delta  = computeDeterminant(a, b, c);
    if(delta < 0) {
        r.re = -b;
        r.im = sqrt(-delta);
    }
    else {
        r.re = (-b + sqrt(delta));
        r.im = 0;
    }
    r.re /= (2*a);
    r.im /= (2*a);
    return r;
}

complexNumber computeX2(float a, float b, float c) {
    complexNumber r;
    double delta;
    delta  = computeDeterminant(a, b, c);
    if(delta < 0) {
        r.re = -b;
        r.im = -sqrt(-delta);
    }
    else {
        r.re = (-b - sqrt(delta));
        r.im = 0;
    }
    r.re /= (2*a);
    r.im /= (2*a);
    return r;
}