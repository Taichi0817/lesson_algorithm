#include <stdio.h>
#include <stdlib.h>
#include "ACN_types.h"
#include "sort_util.h"

/*
 * 概要 : 配列をスターリンソートで整列する
 * 引数 : array 配列のポインタ
 *        size  配列の要素数
 * 戻り値 : なし
 */
VD stalinsort(S4 *array, U4 size)
{
    printf("平均回数: O(n)\n");
    printf("理論値: %lu\n", size);
    printf("最悪回数: O(n)\n");
    U4 count = 0U;
    U4 i;
    U4 j = 0U;
    S4 max_item;

    if (size == 0U) {
        return;
    }

    max_item = array[0];
    array[j] = max_item;
    j++;

    for (i = 1U; i < size; i++) {
        if (array[i] >= max_item) {
            max_item = array[i];
            array[j] = max_item;
            j++;
        } else {
            count++;
        }
    }

    for (i = j; i < size; i++) {
        array[i] = 0;
    }

    printf("整列までに %lu 個の要素を粛清しました\n", count);
}
