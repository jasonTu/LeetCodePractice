#include <stdio.h>

int lengthOfLongestSubstring(char *s)
{
    char *start, *end;
    int result = 1;
    start = s;
    if (*start == '\0')
        return 0;
    while (*start != '\0') {
        end = start;
        int tmp_result = 1;
        while (*end != '\0') {
            char *candidate_end = end + 1;
            if (*candidate_end == '\0')
                break;
            if (start == end) {
                if (*start != *candidate_end) {
                    end = candidate_end;
                    tmp_result++;
                    result = result ? result > tmp_result : tmp_result;
                    continue;
                }
            }
            int flag = 1;
            char *tmp = start;
            while (tmp <= end) {
                if (*tmp == *candidate_end) {
                    flag = 0;
                    break;
                }
                tmp++;
            }
            if (flag) {
                end = candidate_end;
                tmp_result++;
                result = result > tmp_result ? result : tmp_result;
            } else {
                break;
            }
        }
        start++;
    }
    return result;
}

int main(void)
{
    char *s = "bbbbb";
    int result = lengthOfLongestSubstring(s);
    printf("%d\n", result);
}
