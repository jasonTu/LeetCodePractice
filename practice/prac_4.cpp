#include <iostream>
using namespace std;

#define product(x)  (x*x)

int main()
{
    int i=3, k, j;
    j = product(i++);
    k = product(++i);
    printf("%d, %d", j, k);
    return 0;
}
