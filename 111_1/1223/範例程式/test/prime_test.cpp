#include <iostream>
#include <cmath>
using namespace std;

#define MIN_N 50
#define MAX_N 100

void print_arr(bool prime[], int size){
    for (int i = 0; i < size; i++){
        if (prime[i]){
            cout << i << " ";
        }
    }
}

void print_arr(bool prime[], int down, int up){
    for (int i = down; i < up; i++){
        if (prime[i]){
            cout << i << " ";
        }
    }
}

bool check_prime(int n){
    if (n <= 1 || n % 2 == 0)
        return false;
    bool is_prime = true;
    for (int i = 3; i <= sqrt(n); i++){
        if (n % i == 0){
            is_prime = false;
            break;
        }
    }
    return is_prime;
}

int main()
{
    bool prime[MAX_N] = {false, false, true};

    for (int i = 3; i < MAX_N; i++){
        prime[i] = i % 2 != 0;
    }

    print_arr(prime, MAX_N);

    for (int i = 3; i < MAX_N; i+=2){
        if (prime[i]){
            if (check_prime(i)){
                int sum = i;
                prime[sum] = true;
                for (sum += i; sum < MAX_N; sum+=i){
                    prime[sum] = false;
                    print_arr(prime, MAX_N);
                    cout << endl << endl;
                }
            }
            else{
                prime[i] = false;
            }
        }
        cout << "AAAAA\n";
    }

    print_arr(prime, MIN_N, MAX_N);

    return 0;
}