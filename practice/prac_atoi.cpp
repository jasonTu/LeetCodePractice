#include <iostream>
using namespace std;

int atoi(char *str_num)
{
    int i = 0;
    int result = 0;
    int auct = 1;

    for (i = strlen(str_num) - 1; i >= 0; i--) {
        if (strlen(str_num) - 1 == i) {
            auct = 1;
        }
        else {
            auct = auct * 10;
        }
        result += (str_num[i] - '0') * auct ;
    }
    return result;
}

int atoi2(char *str_num)
{
    int i = 0;
    int result = 0;

    while (str_num[i]) {
        result = result * 10 + (str_num[i] - '0');
        i++;
    }
    return result;
}

int main(void)
{
    char test[] = "12345";
    int ret = atoi(test);
    cout << ret << endl;
    ret = atoi2(test);
    cout << ret << endl;
}
