#ifndef SORT_UTIL_H
#define SORT_UTIL_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "ACN_types.h"

typedef uint8_t u8;
typedef int16_t s16;
typedef uint32_t u32;

VD print_array(const S4 *array, U4 size);
BL is_sorted(const S4 *array, U4 size);
VD shuffle_array(S4 *array, U4 size);
VD swap(S4 *a, S4 *b);

#endif /* SORT_UTIL_H */
