#include <iostream>
using namespace std;

char * reverse(char *dest, const char *src)
{
    int i= 0, j = 0, begin, end;
    int index = strlen(src) - 1;
    if (dest == NULL || src == NULL)
        return NULL;

    while (src[i]) {
        begin = end = i;
        while (src[end] != ' ' && src[end] != 0) {
            end++;
        }
        cout << begin << endl;
        cout << end << endl;
        for (j = end - 1; j >= begin; j--) {
            dest[index--] = src[j];
        }
        if (src[end] == 0)  {
            break;
        }
        else {
            dest[index--] = ' ';
        }
        i = end + 1;
    }
    return dest;
}

int main(void)
{
    char test[50] = {0};
    cout << reverse(test, "i come from Jx.") << endl;
    return 0;
}
