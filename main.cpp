#include <stdio.h>

char Puts(const char* str)
{
    int i = 0;

    for (; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    if (str[i] == '\0')
    {
        printf("\n");
        return '\n';
    }
    else
    {
        return EOF;
    }

    return EOF;
}

int main() 
{
    const char* String = "This is string, that i want to print";
    printf("%c", Puts(String));
}

