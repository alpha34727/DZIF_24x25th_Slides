#include <iostream>
using namespace std;

int main(){
    int N, point = 0;

    cin >> N;

    if (0 <= N && N <= 10)
        point = N * 6;
    else if (11 <= N && N <= 20)
        point = 10 * 6 + (N - 10) * 2;
    else if (21 <= N && N <= 40)
        point = 10 * 6 + 10 * 2 + (N - 20) * 1;
    else
        point = 100;

    cout << point;

    return 0;
}

