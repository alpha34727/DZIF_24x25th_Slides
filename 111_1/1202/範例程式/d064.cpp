#include <iostream>

using namespace std;

int main()
{
    int a;

    cin >> a;
    if (a % 2 == 0){
        cout << "Even\n";
    }
    else{
        cout << "Odd\n";
    }

    return 0;
}
/*
    if (a & 1){
        cout << "Odd\n";
    }
    else{
        cout << "Even\n";
    }
*/
