#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "ACN_types.h"
#include "sort_util.h"

#define ARRAY_SIZE 10  // ← 配列サイズはここで変更可能

/* bogosort関数のプロトタイプ宣言 */
VD bogosort(S4 *array, U4 size);

/* bubblesort関数のプロトタイプ宣言 */
VD bubblesort(S4 *array, U4 size);
/*
 * 概要 : メイン関数
 * 引数 : なし
 * 戻り値 : 0固定
 */
int main(VD)
{
    S4 array[ARRAY_SIZE] = {0};
    S4 array_bubble[ARRAY_SIZE] = {0};
    S4 array_bogo[ARRAY_SIZE] = {0};
    U4 size = ARRAY_SIZE;

    /* 乱数の初期化 */
    srand((U4)time(NULL));

    /* 配列をランダムに初期化（例：1〜99） */
    for (U4 i = 0; i < size; i++) {
        array[i] = (S4)(rand() % 99 + 1);  // 1〜99のランダム整数
    }

    memcpy(array_bogo, array, sizeof(S4) * ARRAY_SIZE);
    memcpy(array_bubble, array, sizeof(S4) * ARRAY_SIZE);
    printf("bogo\n");
    printf("整列前: ");
    print_array(array, size);
    bogosort(array_bogo, size);
    printf("整列後: ");
    print_array(array_bogo, size);

    printf("bubble\n");
    printf("整列前: ");
    print_array(array, size);
    bubblesort(array_bubble, size);
    printf("整列後: ");
    print_array(array_bubble, size);

    return 0;
}
