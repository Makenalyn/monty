#include <stdio.h>
#include "monty.h"

int main (__attribute__((unused)) int argc, char *argv[])
{
	if (argc > 2 || argc < 2)
	{
		printf("USAGE: monty file\n");
	}
	return (0);
}
