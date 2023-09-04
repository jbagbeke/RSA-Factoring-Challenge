#ifndef RSA_H
#define RSA_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>

long long int rsa_atoi(char *line, int line_number);
void factorise(long long int *factor1, long long int *factor2, long long int number);

#endif
