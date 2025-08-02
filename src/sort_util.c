#include "sort_util.h"

/* 配列の内容を表示 */
VD print_array(const S4 *array, U4 size)
{
    U4 i;

    for (i = 0U; i < size; i++)
    {
        printf("%ld ", array[i]);
    }
    printf("\n");
}

/* 配列が昇順に整列済みか判定 */
BL is_sorted(const S4 *array, U4 size)
{
    U4 i;

    for (i = 0U; i < (size - 1U); i++)
    {
        if (array[i] > array[i + 1U])
        {
            return (BL)0U;
        }
    }
    return (BL)1U;
}

/* 配列の要素をランダムに並び替え */
VD shuffle_array(S4 *array, U4 size)
{
    U4 i;
    U4 j;

    for (i = 0U; i < size; i++)
    {
        j = (U4)(rand() % size);
        swap(&array[i], &array[j]);
    }
}

/* 2つの要素を入れ替え */
VD swap(S4 *a, S4 *b)
{
    S4 temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
