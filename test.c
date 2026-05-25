#include <stdio.h>

int main(void)
{
    char c = 'A';
    char *ptr;

    ptr = &c;

    printf("ponteiro %p \n", ptr);
    return 0;
}