#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int cnt, money;
    float cashback;

    cin >> cnt >> money;
    if (11 <= cnt && cnt <= 20){
        cashback = money * 0.1;
    }
    else if (21 <= cnt && cnt <= 30){
        cashback = money * 0.15;
    }
    else if (31 <= cnt && cnt <= 40){
        cashback = money * 0.2;
    }
    else if (41 <= cnt && cnt <= 50){
        cashback = money * 0.25;
    }
    else if (cnt >= 51){
        cashback = money * 0.3;
    }

    cout << round(cashback);

    return 0;
}
