#ifndef COMPLEXNUMBERS_H
#define COMPLEXNUMBERS_H

struct s_complexNumber {
    float re;   // Real part of the number
    float im;   // Complex part of the number
};

typedef struct s_complexNumber complexNumber;

char * formatComplexNumber(complexNumber c);

#endif