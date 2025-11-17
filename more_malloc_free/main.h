#ifndef MAIN_H
#define MAIN_H
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
int _isdigit(char *s);
void _puts(char *s);
void print_number(char *s, int size);
void init_result(char *res, int size);
void multiply(char *num1, char *num2, char *res, int len1, int len2);
#endif