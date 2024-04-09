#include <iostream>
using namespace std;

int main()
{
    int a, b, c = 1;
    cin >> a >> b;

    while (c != 0){
        c = a % b;
        a = b;
        b = c;
    }

    cout << a;

    return 0;
}
