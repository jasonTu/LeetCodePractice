#include <iostream>
using namespace std;

bool is_huiwen(int number)
{
    char temp[10] = {0};
    int num, i = 0;
    int begin, end;
    while (number) {
        num = number % 10;
        temp[i++] = num + '0';
        number = number / 10;
    }
    begin = 0;
    end = i - 1;
    while (temp[begin++] == temp[end--]) {
    }
    if (begin < end)
        return false;
    else
        return true;
}

int main(void)
{
    cout << is_huiwen(12344321) << endl;
    cout << is_huiwen(12321) << endl;
    cout << is_huiwen(12324) << endl;
    return 0;
}
