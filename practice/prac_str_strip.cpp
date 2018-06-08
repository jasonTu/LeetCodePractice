#include <iostream>
using namespace std;

char * strip(char *dest, const char *src, const char *item)
{
    int i = 0, j = 0, k = 0;
    if (dest == NULL || src == NULL || item == NULL)
        return NULL;

    while (src[i]) {
        j = 0;
        while (src[i+j] == item[j]) {
            j++;
        }
        if (item[j] == 0) {
            i = i + j;
        } else {
            dest[k++] = src[i++];
        }
    }
    return dest;
}

int main(void)
{
    char dest[10] = {0};


    cout << strip(dest, "abcddcbca", "bc") << endl;

    return 0;
}
