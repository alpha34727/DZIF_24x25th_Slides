#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "�п�J�A���~���G";
    cin >> age;

    if (age < 6)
      cout << "�i�ݴ��M�Ū��v��\n";
    else if (age < 12)
       cout << "�i�ݴ��M�ŻP�O�@�Ū��v��\n";
    else if (age < 18)
       cout << "�i�ݫD����Ū��v��\n	";
    else
       cout << "�i�ݦU�żv��\n";
    return 0;
}
