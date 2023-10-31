#include <string.h>
#include "libft.h"

int main(void)
{
	int arr1[] = {5, 2}; //0 0 0 3 0 0 0 2
	int arr2[] = {1, 2};

	if(memchr(arr1, 5, 2 * sizeof(int)) != NULL)
	{
		printf("found byte");
	}
	else
	{
		printf("nothing");
	}
}
