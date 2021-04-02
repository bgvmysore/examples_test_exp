#include "test1.h"

void set_info_t(info_t* _info_t_obj, char const* _Name, int _Age){
		_info_t_obj->name = (char *) _Name;
		_info_t_obj->age = _Age;
		return;
}

void print_info_t(info_t _info_t_obj){
		printf("Name: %s \t Age: %d\n", _info_t_obj.name, _info_t_obj.age);
		return;
}
