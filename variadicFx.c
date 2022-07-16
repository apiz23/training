// C program for the above approach
#include <stdarg.h>
#include <stdio.h>

// Variadic function to add numbers
int LargestNumber(int n,...){
	int min = 0;

	// Declaring pointer to the argument list
	va_list ptr;

	// Initializing argument to the
	// list pointer
	va_start(ptr, n);

	for (int i = 0; i < n; i++) {
		// Accessing current variable
		// and pointing to next
		int temp = va_arg(ptr, int);
		min = temp > min ? temp : min;
	}

	// End of argument list traversal
	va_end(ptr);

	return min;
}

// Driver Code
int main(){
	printf("\n\n Variadic functions: \n");

	// Variable number of arguments
	printf("\n %d ",LargestNumber(2, 1, 2));

	printf("\n %d ",LargestNumber(3, 3, 4, 5));

	printf("\n %d ",LargestNumber(4, 6, 7, 8, 9));

	printf("\n");

	return 0;
}
