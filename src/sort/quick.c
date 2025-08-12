#include <stdio.h>
#include <stdlib.h>
#include "ACN_types.h"
#include "sort_util.h"


S2 partition(S4 *array, S2 left, S2 right, U4 *count) {
    S2 j;
    S2 i = left - 1;
    for(j = left; j < right; j++) {
        if(array[j] < array[right]) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i+1], &array[right]);
    (*count)++;
    return i + 1;
}

VD quicksort(S4 *array, S2 left, S2 right, U4 *count) {
    S2 pi = 0;
    if(left < right) {
        pi = partition(array, left, right, count);

        quicksort(array, left, pi - 1, count);
        quicksort(array, pi + 1, right, count);
    }
}

VD qsort_main(S4 *array, U4 size)
{
    // printf("平均回数: 1/4 * n(n - 1)\n");
    // printf("理論値: %ld\n", (size) / 2);
    // printf("最悪回数: 1/2 * n(n - 1)\n");
    U4 count = 0U;

    quicksort(array, 0, size-1, &count);

    printf("整列までに %lu 回シャッフルしました\n", count);
}

