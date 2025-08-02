#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "ACN_types.h"
#include "sort_util.h"

/* bogosort関数のプロトタイプ宣言 */
VD bogosort(S4 *array, U4 size);

/*
 * 概要 : メイン関数
 * 引数 : なし
 * 戻り値 : 0固定
 */
int main(VD)
{
    S4 array[] = {3, 1, 4, 5, 2};
    U4 size = (U4)(sizeof(array) / sizeof(array[0]));

    /* 乱数の初期化 */
    srand((U4)time(NULL));

    printf("整列前: ");
    print_array(array, size);

    bogosort(array, size);

    printf("整列後: ");
    print_array(array, size);

    return 0;
}
