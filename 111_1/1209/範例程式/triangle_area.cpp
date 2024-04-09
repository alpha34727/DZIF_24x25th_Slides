#include <iostream>
#include <cmath>
using namespace std;

double area(double a){
    return sqrt(3) / 2 * a * a;
}

double area(double b, double h){
    return 1 / 2.0 * b * h;
}

double area(double a, double b, double c){
    double s = (a+b+c) / 2;
    double A = sqrt(s * (s-a) * (s-b) * (s-c));
    return A;
}

int main(){
    cout << area(3) << endl;
    cout << area(5, 10) << endl;
    cout << area(3, 7, 5) << endl;
    return 0;
}
