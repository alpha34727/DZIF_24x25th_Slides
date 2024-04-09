#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int triangle = 0; triangle < n; triangle++){
        if (triangle % 2 == 0){
            for (int a = 0; a < n; a++){
                for (int i = 0; i < n-a; i++){
                    cout << " ";
                }
                for (int i = 0; i < a+1; i++){
                    cout << "*";
                }
                cout << "\n";
            }
        }
        else{
            for (int a = 0; a < n; a++){
                for (int i = 0; i < n-a; i++){
                    cout << "*";
                }
                cout << "\n";
            }
        }
    }

    return 0;
}
