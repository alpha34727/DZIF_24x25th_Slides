#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d, p, q, GCD, LCM;
    char calc;

    while (cin >> a >> b >> c >> d >> calc){
        if (calc == '/'){
            swap(c, d);
            calc = '*';
        }
        if (calc == '*'){
            p = a * c;
            q = b * d;
        }
        else{
            if (b < 0){
                b *= -1;
                a *= -1;
            }
            if (d < 0){
                d *= -1;
                c *= -1;
            }

            if (calc == '-'){
                c *= -1;
                calc = '+';
            }
            if (calc == '+'){
                LCM = b * d / __gcd(b, d);
                a *= LCM / b;
                c *= LCM / d;

                p = a + c;
                q = LCM;
            }
        }

        GCD = __gcd(abs(p), abs(q));

        p /= GCD;
        q /= GCD;

        if (q < 0){
            q *= -1;
            p *= -1;
        }

        if (p % q == 0){
            cout << p / q << endl;
        }
        else{
            cout << p << '/' << q << endl;
        }
    }

    return 0;
}
