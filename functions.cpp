#include "functions.h"

#include <assert.h>

char Puts(const char* str)
{
    if (str == nullptr) return EOF;

    for (const char* current = str; *current != '\0'; ++current)
        putchar(*current);

    putchar('\n');
    return '\n';
}

const char* Strchr(const char* str, const char chr)
{
    assert(str != NULL);

    for (size_t index = 0; str[index] != '\0'; i++)
    {
        if (str[index] == chr)
        {
            return str + index;
        }
    }

    return NULL;
}

size_t Strlen(const char* str)
{
    assert(str != NULL);

    size_t i = 0;

//    for (; str[i] != '\0'; i++) {;}
    while (str[i++] != '\0');

    return i;
}

char* Strcpy(char* dest, const char* src)
{
    assert(dest != NULL);
    assert( src != NULL);

    size_t i = 0;

    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = src[i];    

    return dest;
}

char* Strcat(char* destptr, const char* srcptr)
{
    int i = 0;

    for (; destptr[i] != '\0'; i++) {;}

    return Strcpy(&destptr[i], srcptr);
}

char* Strncat (char *destination, const char *append, size_t n)
{
    assert(destination != nullptr);
    assert(append != nullptr);

    int i = 0;
    for (; destination[i] != '\0'; i++) {;}

    int j = 0;
    for (; j < n; j++)
    {
        destination[i + j] = append[j];
    }

    destination[i + j] = '\0';

    return destination;
}

char* Fgets(char* str, int count, FILE* stream)
{ 
    assert(str    != nullptr);
    assert(stream != nullptr);

    char curChar = fgetc(stream);

    size_t i = 0;
    
    for (; i <= count && curChar != '\n' && curChar != EOF; i++)
    {
        str[i] = curChar; 
        curChar = fgetc(stream);
    }
    str[i] = '\0';
    
    if (str[i] == '\n' || str[i] == EOF || i == count)
    {
        return str;
    }
    
    return NULL;
}

char* Strdup(const char *str)
{
    assert(str != nullptr);

    size_t length = Strlen(str);

    char* dest = (char*) malloc(sizeof(char) * (length + 1));

    Strcpy(dest, src);

    return dest;
}

FILE* Getline(FILE* inputStream, char* str, char delimiter)
{ 
    assert(is  != nullptr);
    assert(str != nullptr);

    char curChar = 0;

    curChar = fgetc(inputStream);
    int i = 0;
    
    for (; curChar != delimiter && curChar != EOF; i++)
    {
        str[i]  = curChar; 
        curChar = fgetc(inputStream);
    }
    str[i] = '\0';
    
    return inputStream;
}
