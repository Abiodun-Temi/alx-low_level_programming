/**
 * reverse_array - A function that reverses the order of the elements
 *					in an array of integers.
 * @a: The array of integers to sort.
 * @n: The number of elements in the array to reverse.
 * Return: Does not return a value.
*/

void reverse_array(int *a, int n)
{
	int temp, t, e;

	t = 0;
	e = n - 1; /* The index of the final element to sort. */

	/* While the ofrward index has not equalised with the backward index */
	while (t < e)
	{
		temp = a[t];

		/* Swap the elements at the offset t and e */
		a[t] = a[e];
		a[e] = temp;
		t++; /* Shift the forward index forward */
		e--; /* Shift the backward index backward */
	}
}
