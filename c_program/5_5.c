#include <stdio.h>

void str_cpy(char *s, char *t)
{
    while ((*s = *t) != '\0') {
        s++;
        t++;
    }
}

void str_cpy_v2(char *s, char *t)
{
    while ((*s++ = *t++) != '\0')
        ;
}

void str_cpy_v3(char *s, char *t)
{
    while ((*s++ = *t++))
        ;
}

int main()
{
    char s[100];
    char *t = "This is just where I came in.";
    str_cpy(s, t);
    printf("%s\n", s);
    str_cpy_v2(s, t);
    printf("%s\n", s);
    str_cpy_v3(s, t);
    printf("%s\n", s);
}
