#ifndef HOLBERTON_H
#define HOLBERTON_H

/*
 * Structs,  enums and unions definitions
 * Typedef
 * Function prototypes
 */

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *g);
char *leet(char *g);
char *rot13(char *g);

#endif /* HOLBERTON_H */
