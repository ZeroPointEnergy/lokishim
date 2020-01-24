#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>

void *__builtin_new(size_t size)
{
    return malloc(size);
}

void __builtin_delete(void *ptr)
{
    free(ptr);
}

void *__builtin_vec_new(size_t size)
{
    return malloc(size);
}

void __builtin_vec_delete(void *ptr)
{
    free(ptr);
}
