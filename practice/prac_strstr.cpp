#include <iostream>
using namespace std;

const char * m_strstr(const char *str, const char *substr)
{
    int i = 0, j = 0;
    while (str[i]) {
        int j = 0;
        while (substr[j] == str[i+j]) {
            j++;
        }
        if (!substr[j]) {
            return str + i;
        } else {
            i++;
        }
    }
    return NULL;
}

int main(void)
{
    cout << m_strstr("abcdadc", "bcd") << endl;
    return 0;
}
