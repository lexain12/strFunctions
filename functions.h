#include <stdio.h> 

/* Function that work exactly like c func puts
 * @param [in] str string that you want to print
 * @return '\n' if successfully, EOF if unsuccessfully
 * **/
char Puts(const char* str);

const char* Strchr(const char* str, const char chr);

size_t Strlen(const char* str);

char* Strcpy(char* dest, const char* src);

char* Strcat( char* destptr, const char* srcptr);

char* Strncat (char *destination, const char *append, size_t n);

char* Fgets(char* str, int count, FILE* stream);

char* Strdup(const char *str);

FILE* Getline(FILE* is,char* str,char delim = '\n');
