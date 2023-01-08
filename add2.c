#include <stdio.h>

int addTwoNumbs(int x, int y)
{
	return x + y;
}

int main()
{
	int a, b, sum;

	//Function pointer declaration 
	int (*ptr_sum)(int, int);

	//Function initialization
	ptr_sum = &addTwoNumbs;

	a = 20;
	b = 33;

	//function calling
	sum = (*ptr_sum)(a, b);

	printf("Sum is: %d\n", sum);

	return 0;

}
