#include <stdio.h>
#include <stddef.h>
#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

int_putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

#endif /* _FUNCTION_POINTERS_H_ */
