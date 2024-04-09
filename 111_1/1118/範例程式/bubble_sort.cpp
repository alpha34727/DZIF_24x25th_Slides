#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {4, 1, 5, 3, 2}, arr_length = 5, tmp;

    for (int i = 0; i < arr_length - 1; i++){
        for (int j = 0; j < arr_length - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    for (int i = 0; i < arr_length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
