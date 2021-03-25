#include "si.h"

error_t SI_f(float _P, float _T, float _R, float* _SI){
    (*_SI) = _P*_T*_R/100;
    if(_SI == NULL)
        return FAILURE;
    else
        return SUCCESS;
}