#include <stdlib.h>
#include "test1.h"

int main(){
		info_t* arr = NULL;
		short N = 5;
		arr = malloc(N * sizeof(info_t) );

		for(int i=0; i<N; i++)
				set_info_t(&arr[i], "bgv", i+1);

		for(int i=0; i<N; i++)
				print_info_t(arr[i]);

		free(arr);
		return 0;
}
