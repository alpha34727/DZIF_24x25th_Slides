#include <iostream> //輸入輸出的函式庫
#include <cmath>    //算平方根的函式庫
using namespace std;

//判斷是否為質數的自訂函式
bool is_prime(int n){
    //2是質數
    if (n == 2){
        return true;
    }
    //小於等於0的數、1、偶數不是質數
    if (n <= 1 || n % 2 == 0){
        return false;
    }
    //讓n取餘 3~根號n 的奇數，判斷是否為其之倍數
    for (int i = 3; i <= sqrt(n); i+=2){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int M, N, original_M, //original_M用來記錄未改變的M
        cnt = 0, //計算範圍內共有多少質數
        sum = 0; //計算質數的總和

    cin >> M >> N; //讀入範圍

    //確保M<N
    if (N < M){
        //如果M>N，則M和N交換
        int tmp = M;
        M = N;
        N = tmp;
    }

    //紀錄原來的M至origial_M
    original_M = M;

    //輸出
    cout << original_M << " ~ " << N << " 之間是質數的有：";

    //如果M<=2<=N，則M~N之間包含2
    if (M <= 2 && 2 <= N){
        cout << "\n=>\t2,\t"; //輸出2
        cnt++; //質數個數+1
        sum += 2; //質數總和+2
        M = 3; //使M=3
    }

    //使M不為偶數
    if (M % 2 == 0){ //如果M為偶數
        M++; //M+1
    }

    //從M開始到N，判斷是否為質數
    for (int i = M; i <= N; i+=2/*非2偶數不是質數*/){
        if (is_prime(i)){ //如果是質數
            if (cnt % 10 == 0){ //如果輸出超過10個質數或沒有輸出過，就換行並輸出=>
                cout << "\n=>\t";
            }
            cnt++; //質數個數+1
            sum += i; //質數總和+i
            cout << i << ",\t"; //輸出i
        }
    }

    cout << "\n\n";
    cout << " " << original_M << " ~ " << N << " 之間共有 " << cnt << " 個質數\n\n";
    cout << " " << original_M << " ~ " << N << " 之間總和= " << sum << "\n";

    return 0;
}
