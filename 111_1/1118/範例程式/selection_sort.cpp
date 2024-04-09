#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5] = {5, 2, 1, 3, 4}, arr_length = 5, min_index, tmp;

    for (int to_sort = 0; to_sort < arr_length - 1; to_sort++){
        min_index = to_sort;
        for (int check = to_sort + 1; check < arr_length; check++){
            if (arr[check] < arr[min_index]){
                min_index = check;
            }
        }

        swap(arr[to_sort], arr[min_index]);
    }

    for (int i = 0; i < arr_length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
