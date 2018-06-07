#include <iostream>
using namespace std;

void itoa(int num, char *result)
{
    int i = 0, j = 0;
    char temp[10] = {0};
    while (num) {
        temp[i++] = num % 10 + '0';
        num = num / 10;
    }
    temp[i] = 0;

    while (i >= 0) {
        result[j++] = temp[--i];
    }
}

int main(void)
{
    char result[10] = {0};
    itoa(12345, result);
    cout << result << endl;
    return 0;
}
