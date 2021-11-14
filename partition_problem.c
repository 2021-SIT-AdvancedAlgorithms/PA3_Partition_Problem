#include "kernel.h"

int main(int argc, char** argv)
{
	if (argc != 2) {
		fprintf(stderr, "usage: ./partition_problem <g|dp>\n");
		exit(1);
	}

    /* Handle input file */

    int nmemb;
    scanf("%d\n", &nmemb);

	element elements[nmemb]; // Data of each elements.

	for (int i = 0; i < nmemb; i++){
		scanf("%d\n", &elements[i].value);
		elements[i].index = i;

		// Initializing groupIds.
		for (int j = 0; j < MAX_NGRP; j++)
			elements[i].groupId[j] = -1;
	}

	/* Run algorithm */

	int partitionable = -1;

	if (strcmp(argv[1], "g") == 0) {
		partitionable = partition_by_greedy(elements, nmemb);

	} else if (strcmp(argv[1], "dp") == 0) {
		partitionable = partition_by_dp(elements, nmemb);
	} else {
		fprintf(stderr, "Invalid arguments\n");
		exit(1);
	}

	/* Print result */

	int sum[2] = {0, };

	printf("%d\n\n", partitionable);

	for (int j = 0; j < partitionable; j++) {
		printf("[%02d]\n", j);
		for (int i = 0; i < nmemb; i++) {
			printf("%d\n", elements[i].groupId[j]);
			sum[elements[i].groupId[j]] += elements[i].value;
		}
		printf("Sum of each group : [%d, %d]\n\n", sum[0], sum[1]); // Print to console
	}
	
	return 0;
}