#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// The below snippet gives you an array of 10 int pointers
	int *ptr[10];
	int array1[10] = {1,2,3,4,5,6,7,8,9,10};

	// The below snippet gives you a pointer that can point to 10 integers.
	int (*p)[10];
	p = &array1;
	for (int i = 0; i < 10; i ++)
	{
		printf("%i\n", (*p)[i]);
		// I am using the line below to initilize the ptr array
		ptr[i] = &array1[i];
	}
	
	printf("---------------------\n");
	for (int i = 0; i < 10; i ++)
	{
		printf("%i\n", *ptr[i]);
	}
	// This line of code also gives you a pointer that points to 10 integers.
	int *ptr2;
	ptr2 = (int *)malloc(sizeof(int) * 10);
	// for (int i = 0; i < 10; i ++)
	// {
	// 	ptr2[i] = i;
	// 	printf("%i\n", ptr2[i]);
	// }

	
	free(ptr2);
	// The difference between ptr2 and p is that p stores the address of the entire array, similar to a string.
	// But it does not contain the actual first element

	// ptr2 however, contains the actual first element of the array.
}