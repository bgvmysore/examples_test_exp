/**
 * @file si.h
 * @author bgv (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _SI_H_
#define _SI_H_

#include <stdlib.h>

typedef enum error_t{
    SUCCESS = 0,
    FAILURE = -1
}error_t;

/**
 * @brief Calsulates simple interest
 * 
 * @param _P Principal amount 
 * @param _T Time in years 
 * @param _R Rate of interest per annum 
 * @param _SI (float*) SI = PTR/100
 * @return error_t returs error_t SUCCESS or FAILURE
 */
error_t SI_f(float _P, float _T, float _R, float* _SI);

#endif //