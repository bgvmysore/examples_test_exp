#include <stdio.h>
#include "./includes/circles.h"

int main(){
    float a, b, c;
    a = 0.1f;
    b = 4.5f;
    c = 3.141592f;

    printf("%f %f %f %f\n\n", diameter_of_circle(a), radius_of_circle(a),
    perimeter_of_circle(a), area_of_circle(a));

        printf("%f %f %f %f\n\n", diameter_of_circle(b), radius_of_circle(b),
    perimeter_of_circle(b), area_of_circle(b));

        printf("%f %f %f %f\n\n", diameter_of_circle(c), radius_of_circle(c),
    perimeter_of_circle(c), area_of_circle(c));

    return 0;
}