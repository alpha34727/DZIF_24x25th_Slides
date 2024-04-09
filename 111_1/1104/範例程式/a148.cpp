#include <iostream>
using namespace std;

int main()
{
    int n, score, total;
    float avg;

    while (cin >> n){
        total = 0;
        for (int i = 0; i < n; i++){
            cin >> score;
            total += score;
        }

        avg = total * 1.0 / n;
        if (avg > 59){
            cout << "no\n";
        }
        else{
            cout << "yes\n";
        }
    }

    return 0;
}
