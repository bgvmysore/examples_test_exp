/**
 * @file circles.c
 * @author bgv (bgv@bgv.com)
 * @brief Contains functions defenitions of circles.h
 * @version 0.1
 * @date 2021-03-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "./includes/circles.h"

float diameter_of_circle(float _radius){
    return (2*_radius);
}

float radius_of_circle(float _diameter){
    return (_diameter/2);
}

float perimeter_of_circle(float _radius){
    return (2*3.141592f*_radius);
}

float area_of_circle(float _radius){
    return (3.141592f*_radius*_radius);
}