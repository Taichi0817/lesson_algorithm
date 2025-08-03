#include <stdio.h>
#include <stdlib.h>
#include "ACN_types.h"
#include "sort_util.h"

/*
 * 概要 : 配列をボゴソートで整列する
 * 引数 : array 配列のポインタ
 *        size  配列の要素数
 * 戻り値 : なし
 */
VD bogosort(S4 *array, U4 size)
{
    printf("最小回数: 1\n");
    printf("平均回数: n!\n");
    printf("最悪回数: ∞\n");
    printf("理論値: %ld\n", cal_factorial(size));
    U4 count = 0U;

    while (is_sorted(array, size) == (BL)0U)
    {
        shuffle_array(array, size);
        count++;
    }

    printf("整列までに %lu 回シャッフルしました\n", count);
}
