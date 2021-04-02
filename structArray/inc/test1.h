#pragma once

#include <stdio.h>

typedef struct info_t {
	char* name;
	int age;
} info_t;

void set_info_t(info_t* _info_t_obj, char const* _Name, int _Age);

void print_info_t(info_t _info_t_obj);
