#include "functions.h"

int main() 
{
    const char* String   = "This is string, that i want to print";
    const char chrToFind = 's';
    char strToCopyIn[100]; 

    printf("Function Puts:\n");
    printf("%c\n", Puts(String));

    printf("Function Strchr:\n");
    printf("%p\n", Strchr(String, chrToFind));
    printf("%c\n", *Strchr(String, chrToFind));

    printf("Function Strlen:\n");
    printf("%lu\n", Strlen(String));

    printf("Function Strcpy:\n");
    Strcpy(strToCopyIn, String);
    printf("%s\n", Strcpy(strToCopyIn, String));

    char str[50] = "Hello ";
    char str2[50] = "World!";
    printf("Function Strcat:\n");
    Strcat(str, str2);
    Puts(str); 

    printf("Function Strncat:\n");
    Strncat(str, " Goodbye World!", 3);
    Puts(str);

    printf("Function Fgets:\n");
    printf("%s", fgets(str, 10, stdin));

    printf("Function Strdup:\n");
    printf("%s\n", Strdup(str2));

    fflush(stdin);
    printf("Function getline:\n");
    Getline(stdin, str);
    printf("%s", str);
    }

