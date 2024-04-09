#include <iostream> //輸入輸出的函式庫
#include <cstdlib>  //亂數的函式庫
#include <ctime>    //取得現在UNIX時間的函式庫
using namespace std;

//自訂取亂數函式
int randint(int Min, int Max){
    return Min + rand() % (Max - Min + 1);
}

int main()
{
    int N, odd[50] = {},/*用於紀錄奇數*/ odd_end_index = 0,/*用於紀錄奇數的陣列的末位置*/
        even[50] = {},/*用於紀錄偶數*/ even_end_index = 0, /*用於紀錄偶數的陣列的末位置*/
        random_num;
    cin >> N; //輸入一整數N

    srand(time(0)); //以現在時間設定亂數種子
    for (int i = 0; i < 50; i++){ //重複執行50次
        random_num = randint(1, N); //取1~N之間的亂數 到 random_num 中
        if (random_num % 2 == 0){ //如果random_num是偶數
            even[even_end_index] = random_num; //紀錄到偶數的陣列未被填入資料的尾巴
            even_end_index++; //陣列尾巴位置+1
        }
        else{ //如果random_num不是偶數(就是奇數)
            odd[odd_end_index] = random_num; //紀錄到奇數的陣列未被填入資料的尾巴
            odd_end_index++; //陣列尾巴位置+1
        }
    }

    cout << "奇數值有:";
    for (int i = 0; i < odd_end_index; i++){ //odd_end_index = 未被填入資料的尾巴的位置 = 有資料的註標值 + 1 = 資料數量
        if (i % 10 == 0){ //每10個資料一行，如果一行資料太多，就換行，並輸出===>
            cout << "\n===>\t";
        }
        cout << odd[i] << ",\t"; //輸出資料
    }
    cout << "\n===>\t共" << odd_end_index << "個,佔機率為" << odd_end_index/50.0 /*要用浮點數去做除法，才會得到浮點數*/ << "\n";

    cout << "\n";

    cout << "偶數值有:";
    for (int i = 0; i < even_end_index; i++){ //even_end_index = 未被填入資料的尾巴的位置 = 有資料的註標值 + 1 = 資料數量
        if (i % 10 == 0){ //每10個資料一行，如果一行資料太多，就換行，並輸出===>
            cout << "\n===>\t";
        }
        cout << even[i] << ",\t"; //輸出資料
    }
    cout << "\n===>\t共" << even_end_index << "個,佔機率為" << even_end_index/50.0 << "\n";

    return 0;
}
