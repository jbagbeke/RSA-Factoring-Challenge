#include "rsa.h"

/**
 * factorise - Finds two factors of a number
 * @factor1: Result of division by factor2
 * @factor2: Factor of the number
 * @number: Number whose factor we're to find
 * Return: Void
 */
void factorise(long long int *factor1, long long int *factor2, long long int number)
{
	int arr1[16] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
	int arr2[14] = {59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113};
	int arr3[11] = {127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179};
	int arr4[11] = {181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239};
	int arr5[10] = {241, 251, 257, 263, 269, 271, 277, 281, 283, 293};
	int len, concat[62], len1, len2, len3, len4, len5, i, j = 0;

	len1 = sizeof(arr1) / sizeof(arr1[0]);
	len2 = sizeof(arr2) / sizeof(arr2[0]);
	len3 = sizeof(arr3) / sizeof(arr3[0]);
	len4 = sizeof(arr4) / sizeof(arr4[0]);
	len5 = sizeof(arr5) / sizeof(arr5[0]);
	len = len1 + len2 + len3 + len4 + len5;

	for (i = 0; i < len1; i++)
	{
		concat[j] = arr1[i];
		j++;
	}
	for (i = 0; i < len2; i++)
	{
		concat[j] = arr2[i];
		j++;
	}
	for (i = 0; i < len3; i++)
	{
		concat[j] = arr3[i];
		j++;
	}
	for (i = 0; i < len4; i++)
	{
		concat[j] = arr4[i];
		j++;
	}
	for (i = 0; i < len5; i++)
	{
		concat[j] = arr5[i];
		j++;
	}

	for (i = 0; i < len; i++)
	{
		if (number % concat[i] == 0)
		{
			*factor1 = number / concat[i];
			*factor2 = concat[i];
			break;
		}
	}
}
