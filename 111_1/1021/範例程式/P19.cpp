#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "請輸入你的年紀：";
    cin >> age;

    if (age < 6)
      cout << "可看普遍級的影片\n";
    else if (age < 12)
       cout << "可看普遍級與保護級的影片\n";
    else if (age < 18)
       cout << "可看非限制級的影片\n	";
    else
       cout << "可看各級影片\n";
    return 0;
}
