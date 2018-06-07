#include <iostream>
using namespace std;

int main()
{
    int x=2, y, z;
    x *= (y=z=5); cout << x << endl;
    z = 3;

    x == (y=z); cout << x << endl;
    x = (y==z); cout << x << endl;
    x = (y&z); cout << x << endl;
    x = (y&&z); cout << x << endl;
    y = 4;
    x = (y|z); cout << x << endl;
    x = (y||z); cout << x << endl;

    return 0;
}
/*
(ml) ➜  practice git:(master) ✗ ./prac_1                
10
10
1
3: 0011 & 0011 -> 0011
1 y and z -> true (1)
7 0100 | 0011 -> 0111
1 1 or 1 -> true (1)
 */
