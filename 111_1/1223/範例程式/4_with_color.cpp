#include <cstdlib>
#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

void changeColor(int color = 15)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, color);
}

int main(int argc, char *argv[])
{
    int Max, Min, Ans, Guess;
    Max = 1000;
    Min = 99;

    srand(time(NULL));
    Ans = rand()%((Max-1) - (Min+1) + 1) + Min;

    while (true){
        changeColor();
        cout << "終極密碼 " << Min << " ~ " << Max << " 之間" << endl << endl;
        cout << "==> 請輸入你猜的數字:   ";
        changeColor(10);
        cin >> Guess;

        if (Guess >= Max || Guess <= Min){
            changeColor(12);
            cout << "你是來亂的!!!!" << endl << endl;
        }
        else if (Guess > Ans){
            Max = Guess;
        }
        else if (Guess < Ans){
            Min = Guess;
        }
        else{
            changeColor(14);
            cout << "BINGO!!!!你猜對了!!!!密碼是:" << Ans << endl << endl;
            break;
        }
    }

    changeColor();
    system("PAUSE");
    return EXIT_SUCCESS;
}
