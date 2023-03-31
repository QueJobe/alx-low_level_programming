#include "main.h"
/**
 * reverse_array - prints array in reverse
 * @a: pointer to array
 * @n: array size
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
