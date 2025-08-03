#ifndef SORT_UTIL_H
#define SORT_UTIL_H
#include "ACN_types.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 *  --------------------------------------------------------------------------
 *  関数プロトタイプ宣言
 *  --------------------------------------------------------------------------
*/

/* 配列の内容を表示する関数 */
VD print_array(const S4 *array, U4 size);

/* 配列が昇順に整列されているかチェックする関数 */
BL is_sorted(const S4 *array, U4 size);

/* 配列の要素をランダムに並び替える関数 */
VD shuffle_array(S4 *array, U4 size);

/* 配列の要素を入れ替える関数 */
VD swap(S4 *a, S4 *b);

U4 cal_factorial(U4 sise);

#endif /* SORT_UTIL_H */
