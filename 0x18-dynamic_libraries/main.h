#ifndef _MAIN_H_
#define _MAIN_H_

/* Defined functions*/

int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
int _islower(int c);
int _strcmp(char *s1, char *s2);
int _isalpha(int c);
int _abs(int i);
int _putchar(char c);
int _atoi(char *s);

unsigned int _strspn(char *s, char *accept);

char *_strcpy(char *dest, char *src);
char *_strpbrk(char *s, char *accept);
char *_strchr(char *s, char c);
char *_strncat(char *dest, char *src, int n);
char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *_strstr(char *haystack, char *needle);

void _puts(char *str);

#endif
