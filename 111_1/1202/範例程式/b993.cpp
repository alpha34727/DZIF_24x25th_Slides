#include <iostream>

using namespace std;

int main()
{
    int n, tmp, max_n;

    while (cin >> n){
        max_n = -1;
        for (int i = 0; i < n; i++){
            cin >> tmp;
            if (tmp > max_n){
                max_n = tmp;
            }
        }
        cout << max_n << endl;
    }

    return 0;
}

