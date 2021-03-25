#include <stdio.h>
#include "si.h"

int main(){
    float p = 1234.56, t = 1.5, r = 2;
    float si;
    SI_f(p, t, r, &si);
    printf("%f", si);
    return 0;
}