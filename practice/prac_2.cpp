#include <iostream>
using namespace std;

int Vac = 4;
int main()
{
    int Vac = 10;
    ::Vac++;
    cout << ::Vac << endl;
    cout << Vac << endl;
    return 0;
}
/*
4: global variable
10: local variable
 */
