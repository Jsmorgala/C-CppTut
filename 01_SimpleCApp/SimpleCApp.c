#include <stdio.h>
#include <stdint.h>

int32_t f(int32_t x);
void print_fx(int32_t x, int32_t y);

int main()
{
	int32_t x = 5;

	int32_t y = f(x);
	int32_t y2 = f(2 * x);
	int32_t y3 = f(3 * x);
	int32_t y4 = f(4 * x);

	print_fx(1 * x, y);
	print_fx(2 * x, y2);
	print_fx(3 * x, y3);
	print_fx(4 * x, y4);


	return 50;
}

int32_t f(int32_t x)
{
	return x * x + 5 * x + 5;
}

void print_fx(int32_t x, int32_t y)
{
	printf("f(%i) = %i, ", x, y);
}