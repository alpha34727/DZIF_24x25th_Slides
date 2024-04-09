#include <iostream>
using namespace std;

int main(){
    int i, sum = 0;

    cout << sum << " + ";
    while(cin >> i){
        sum += i;
        cout << "= " << sum << "\n\n";
        cout << sum << " + ";
    }

    return 0;
}
