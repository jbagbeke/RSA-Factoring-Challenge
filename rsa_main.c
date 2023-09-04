#include "rsa.h"

/**
 * main - Entry point of functions
 * @argc: Argument counter
 * @argv: Argument Vector being the file to open
 * Return: 0(Success)
 */
int main(int argc, char **argv)
{
	char *line = NULL;
	int line_number = 1;
	size_t line_ptr;
	ssize_t line_size;
	long long int num_to_fact, factor1, factor2, fc1, fc2;
	FILE *rsa_number;
	long long int hehe1, hehe2;

	if (argc != 2)
	{
		fprintf(stderr, "Invalid number of arguments passed.\n");
		exit(EXIT_FAILURE);
	}

	rsa_number = fopen(argv[1], "r");
	if (rsa_number == NULL)
	{
		fprintf(stderr, "Error: File cannot be opened\n");
		exit(EXIT_FAILURE);
	}

	while (line_size = getline(&line, &line_ptr, rsa_number) != -1)
	{
		num_to_fact = rsa_atoi(line, line_number);
		factorise(&factor1, &factor2, num_to_fact);
		printf("%lld=%lld*%lld\n", num_to_fact, factor1, factor2);

		line_number++;
	}

	fclose(rsa_number);
	return (0);
}
