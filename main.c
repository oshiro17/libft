#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void    change_ptr(char **s1, char *s2)
{
    *s1 = NULL;
    s2 = NULL;
}

int main(void)
{
    char    *str1;
    char    *str2;
    str1 = calloc(1,1);
    str2 = calloc(1,1);
    printf("%p\t%p\n", str1, str2);
    change_ptr(&str1, str2);
    printf("%p\t%p\n", str1, str2);
    return (0);
}
