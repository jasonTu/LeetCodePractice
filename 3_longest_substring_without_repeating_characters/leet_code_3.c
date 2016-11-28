/**
 * 26 ms C solution.
 * Author: Jason Tu.
 * Contain simple test case also.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getLongestLength(char *s)
{
    int cnt = 0;
    int i = 0;
    char arr[256] = {0};
    while (*s != '\0') {
        i = *s - 0;
        if (!arr[i]) {
            arr[i] = 1;
            cnt++;
        } else {
            break;
        }
        s++;
    }
    return cnt;
}

int lengthOfLongestSubstring(char *s)
{
    int i;
    int t_length;
    int length = 0;
    int s_len = strlen(s);
    for (i = 0; i < s_len; i++) {
        if (s_len - i < length) {
            break;
        }
        t_length = getLongestLength(&s[i]);
        if (length < t_length) {
            length = t_length;
        }
    }
    return length;
}

int main()
{
    char *s = "abcabcbb";
    int ret = lengthOfLongestSubstring(s);
    printf("ret is %d", ret);
}
