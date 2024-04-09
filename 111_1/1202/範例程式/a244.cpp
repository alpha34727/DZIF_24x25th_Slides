#include <iostream>

using namespace std;

int main()
{
    int N, a, b, c;

    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> a >> b >> c;
        if (a == 1){
            cout << b+c;
        }
        else if (a == 2){
            cout << b-c;
        }
        else if (a == 3){
            cout << b*c;
        }
        else if (a == 4){
            cout << b/c;
        }
        cout << endl;
    }

    return 0;
}

