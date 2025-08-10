#include <stdio.h>
#include <stdlib.h>
#include "ACN_types.h"
#include "sort_util.h"

U4 cal_min(U4 size) {
    S4 result = 0U;
    result = (size * (size-1)) / 2;
    return result;
}

VD bubblesort(S4 *array, U4 size)
{
    printf("平均回数: 1/4 * n(n - 1)\n");
    printf("理論値: %ld\n", cal_min(size) / 2);
    printf("最悪回数: 1/2 * n(n - 1)\n");
    U4 count = 0U;
    U1 i, tmp;
    
    while (is_sorted(array, size) == (BL)0U)
    {
        for(i=0U;i<size;i++) {
            if(array[i] > array[i+1]) {
                tmp = array[i];
                array[i] = array[i+1];
                array[i+1] = tmp;
                count++;
            }

        }
    }

    printf("整列までに %lu 回シャッフルしました\n", count);
}

