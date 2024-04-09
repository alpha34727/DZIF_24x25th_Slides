#include <iostream>
using namespace std;

int main()
{
    int N;
    char left, right;
    cin >> N;

    for (int tri = N; tri > 0; tri--){
        if (tri % 2 == 0){
            left = '*';
            right = ' ';
        }
        else{
            left = ' ';
            right = '*';
        }
        for (int i = 1; i <= N; i++){
            for (int j = 0; j <= N-i; j++){
                cout << left;
            }
            for (int j = 0; j < i; j++){
                cout << right;
            }
            cout << "\n";
        }
    }

    return 0;
}
