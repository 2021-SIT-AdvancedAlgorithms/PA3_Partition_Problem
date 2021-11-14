#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NGRP 99

typedef struct element {
    int index;
    int value;
    int groupId[MAX_NGRP];
} element;

void sort_elements(element *elements, int start, int end);

int partition_by_greedy(element* elements, int nmemb);
int partition_by_dp(element* elements, int nmemb);