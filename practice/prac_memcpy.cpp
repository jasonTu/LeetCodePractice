#include <iostream>
using namespace std;

void * m_memcpy(char *dest, const char *src, size_t size)
{
    int i = 0;
    if (dest == NULL || src == NULL)
        return NULL;

    for (i = 0; i < size; i++) {
        dest[i] = src[i];
    }
    return dest;
}

int main(void)
{
    char src[] = "abcde";
    char desc[10] = {0};

    m_memcpy(desc, src, 3);
    cout << desc << endl;
}
