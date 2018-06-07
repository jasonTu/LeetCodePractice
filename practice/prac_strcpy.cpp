#include <iostream>
using namespace std;

char * mstrcpy(char *str_desc, const char *str_src)
{
    int i = 0;
    while(str_src[i]) {
        str_desc[i] = str_src[i];
        i++;
    }
    str_desc[i] = 0;
    return str_desc;
}

int main()
{
    char a[100] = "abcdefg";
    char b[100] = {0};

    mstrcpy(b, a);
    cout << b << endl;
}
