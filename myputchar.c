#include <stdlib.h>
#include <stdio.h>
#include "Piscine.h"

int main()
{
    char c;

    c = 'a';

    my_put_char(c);

    return 0;
}

void my_put_char(char c)
{
    write(1, &c, 1);
}