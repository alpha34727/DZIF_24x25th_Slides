#include <iostream> //��J��X���禡�w
#include <cstdlib>  //�üƪ��禡�w
#include <ctime>    //���o�{�bUNIX�ɶ����禡�w
using namespace std;

//�ۭq���üƨ禡
int randint(int Min, int Max){
    return Min + rand() % (Max - Min + 1);
}

int main()
{
    int N, odd[50] = {},/*�Ω�����_��*/ odd_end_index = 0,/*�Ω�����_�ƪ��}�C������m*/
        even[50] = {},/*�Ω��������*/ even_end_index = 0, /*�Ω�������ƪ��}�C������m*/
        random_num;
    cin >> N; //��J�@���N

    srand(time(0)); //�H�{�b�ɶ��]�w�üƺؤl
    for (int i = 0; i < 50; i++){ //���ư���50��
        random_num = randint(1, N); //��1~N�������ü� �� random_num ��
        if (random_num % 2 == 0){ //�p�Grandom_num�O����
            even[even_end_index] = random_num; //�����참�ƪ��}�C���Q��J��ƪ�����
            even_end_index++; //�}�C���ڦ�m+1
        }
        else{ //�p�Grandom_num���O����(�N�O�_��)
            odd[odd_end_index] = random_num; //������_�ƪ��}�C���Q��J��ƪ�����
            odd_end_index++; //�}�C���ڦ�m+1
        }
    }

    cout << "�_�ƭȦ�:";
    for (int i = 0; i < odd_end_index; i++){ //odd_end_index = ���Q��J��ƪ����ڪ���m = ����ƪ����Э� + 1 = ��Ƽƶq
        if (i % 10 == 0){ //�C10�Ӹ�Ƥ@��A�p�G�@���ƤӦh�A�N����A�ÿ�X===>
            cout << "\n===>\t";
        }
        cout << odd[i] << ",\t"; //��X���
    }
    cout << "\n===>\t�@" << odd_end_index << "��,�����v��" << odd_end_index/50.0 /*�n�ίB�I�ƥh�����k�A�~�|�o��B�I��*/ << "\n";

    cout << "\n";

    cout << "���ƭȦ�:";
    for (int i = 0; i < even_end_index; i++){ //even_end_index = ���Q��J��ƪ����ڪ���m = ����ƪ����Э� + 1 = ��Ƽƶq
        if (i % 10 == 0){ //�C10�Ӹ�Ƥ@��A�p�G�@���ƤӦh�A�N����A�ÿ�X===>
            cout << "\n===>\t";
        }
        cout << even[i] << ",\t"; //��X���
    }
    cout << "\n===>\t�@" << even_end_index << "��,�����v��" << even_end_index/50.0 << "\n";

    return 0;
}
