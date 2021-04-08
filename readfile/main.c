#include <stdio.h>
#include <stdlib.h>

typedef struct myObj
{
    float n1, n2, n3;
} myObj;


void getDataFromFile(myObj* _obj);

float power(myObj* _obj);

int main(void){
    myObj data;
    getDataFromFile(&data);
    printf("%f\n", power(&data));
    return 0;
}

void getDataFromFile(myObj* _obj){
    FILE *_fptr = NULL;
    _fptr = fopen("data.txt", "r");
    for(int i=0; i<3; i++){
        char str[100];
        fgets(str, 100, _fptr);
        switch (i)
        {
            case 0:
                _obj->n1 = atof(str); break;
            case 1:
                _obj->n2 = atof(str); break;
            case 2:
                _obj->n3 = atof(str); break;
        }
    }
    fclose(_fptr);
}

float power(myObj* _obj){
    return (_obj->n1 * _obj->n2 * _obj->n3);
}