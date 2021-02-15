#include "Piscine.h"

#include <stdlib.h>
#include <stdio.h>

#include <unistd.h>
#include <stdbool.h>


// If we add more characters to the string, the compiler will detect a segmentation fault line [24]

int main()
{
    char str[] = "Necko le cool"; 
    int strlen = 0;
    char nextchr = 'H';
    int number = 15;
    int number2 = -15;

    // my_put_char(nextchr); 
    // nextchr = my_previous_char(nextchr);
    // printf("%c", nextchr);
    printf("%d",is_odd(number));


    // strlen = my_str_len(str);
    // printf("%d", strlen);
    return 0;
}

void my_put_char(char c)
{
    write(1, &c, 1);
}

void my_put_str(char* str)
{
    char c;
    int i;

    while (str[i] != '\0')
    {
        c = str[i];
        i++;
        my_put_char(c);
    }
}

int my_str_len(char* str)
{
    int length;
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    length--;
    return length;
}

char my_next_char(char c)
{
    char nextchar;
    if (c == 'Z')
        nextchar = 'A';
    else if (c == 'z')
        nextchar = 'a';
    else
    // pas besoin de forcer le type car le compilateur prendra toujours le type le plus gros en bytes
        nextchar = c+1; 
    return nextchar;
}

char my_previous_char(char c)
{
    char nextchar;
    if (c == 'A')
        nextchar = 'Z';
    else if (c == 'a')
        nextchar = 'z';
    else
        nextchar = c-1;
    return nextchar;
}

bool is_negative(int i)
{
    if(i >= 0)
    {
        return false;
    }
    return true;  // else optionnel ici, car if(quand condition non remplie) return false, sinon true   
}

bool is_odd(int i)
{
    if(i % 2)
    {
        return true;
    }
    return false;
}

bool is_even(int i)

{
    if(i % 2)
    {
        return false;
    }
    return true;
}

void my_put_ints();