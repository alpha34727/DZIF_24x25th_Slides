#include <iostream>

using namespace std;

int main(){
    int hh, mm;

    cin >> hh >> mm;

    if ((hh == 7 && mm >= 30) || (8 <= hh && hh <= 16)){
        cout << "At School";
    }
    else{
        cout << "Off School";
    }

    return 0;
}
