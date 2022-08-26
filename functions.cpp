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

    size_t index = 0;
    
    for (; str[index] != '\0'; i++)
    {
        if (str[index] == chr)
        {
            return str+index;
        }
    }
    if (str[index] == '\0')
    {
        return NULL;
    }

    return NULL;
}

size_t Strlen(const char* str)
{
    assert(str != NULL);

    size_t i = 0;

    for (; str[i] != '\0'; i++) {;}

    return i;
}

char* Strcpy(char* dest, const char* src)
{
    int i = 0;

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
    char curChar = NULL;

    curChar = fgetc(stream);
    int i = 0;
    
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
    size_t length = Strlen(str);

    char* dest = (char*) malloc(sizeof(char) * (length + 1));

    for (int i = 0; i <= length + 1; i++)
    {
        dest[i] = str[i];
    }

    return dest;
}

FILE* Getline(FILE* is, char* str,char delim)
{ 
    char curChar = NULL;

    curChar = fgetc(is);
    int i = 0;
    
    for (;curChar != delim && curChar != EOF; i++)
    {
        str[i] = curChar; 
        curChar = fgetc(is);
    }
    str[i] = '\0';
    
    return is;
}
