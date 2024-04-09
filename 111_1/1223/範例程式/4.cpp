#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
    //最大值, 最小值, 答案, 玩家猜測的數字
    int Max, Min, Ans, Guess;
    Max = 1000;
    Min = 99;

    srand(time(NULL)); //以現在時間設定亂數種子
    Ans = rand()%((Max-1) - (Min+1) + 1) + Min; //計算答案

    while (true){ //重複執行
        cout << "終極密碼 " << Min << " ~ " << Max << " 之間" << endl << endl;
        cout << "==> 請輸入你猜的數字:   ";
        cin >> Guess;

        //如果玩家輸入的數值>=Max 或 <= Min
        if (Guess >= Max || Guess <= Min){
            cout << "你是來亂的!!!!" << endl << endl; //則輸出"你是來亂的!!!!"
        }
        else if (Guess > Ans){ //如果玩家猜測的數值比實際答案大
            Max = Guess; //讓上限變成玩家猜測的數值
        }
        else if (Guess < Ans){ //如果玩家猜測的數值比實際答案小
            Min = Guess; //讓下限變成玩家猜測的數值
        }
        else{ //如果玩家猜中了
            cout << "BINGO!!!!你猜對了!!!!密碼是:" << Ans << endl << endl;
            break; //利用break跳出while迴圈
        }
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
