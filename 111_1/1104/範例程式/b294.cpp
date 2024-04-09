#include <iostream>
using namespace std;

int main()
{
    int n, cnt, total = 0;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> cnt;
        total += cnt * i;
    }

    cout << total;

    return 0;
}
