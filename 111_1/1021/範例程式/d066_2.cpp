#include <iostream>

using namespace std;

int main(){
    int hh, mm;

    cin >> hh >> mm;

    if (7*60+30 <= hh*60+mm && hh*60+mm < 17*60){
        cout << "At School";
    }
    else{
        cout << "Off School";
    }

    return 0;
}
