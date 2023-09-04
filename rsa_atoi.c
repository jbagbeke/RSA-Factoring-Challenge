#include "rsa.h"

/**
 * rsa_atoi - Converts a string of any length into an int
 * @line: Pointer to the string to be converted
 * @line_number: Current line being read
 * Return: The converted number
 */
long long int rsa_atoi(char *line, int line_number)
{
	long long int num = 0;
	int length, i = 0;
	int sign = 1;

	length = strlen(line);

	if (line[i] == '-')
	{
		sign = -1;
		i++;
	}

	if (line[length - 1] == '\n')
	{
		line[length - 1] = '\0';
		length--;
	}

	for (; i < length; i++)
	{
		if (line[i] >= '0' && line[i] <= '9')
		{
			num = num * 10 + (line[i] - '0');
		}
		else
		{
			fprintf(stderr, "L%d: Invalid Number\n", line_number);
			return (-1);
		}
	}
	num = num * sign;

	return (num);
}
