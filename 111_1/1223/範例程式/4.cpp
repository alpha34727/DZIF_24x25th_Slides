#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
    //�̤j��, �̤p��, ����, ���a�q�����Ʀr
    int Max, Min, Ans, Guess;
    Max = 1000;
    Min = 99;

    srand(time(NULL)); //�H�{�b�ɶ��]�w�üƺؤl
    Ans = rand()%((Max-1) - (Min+1) + 1) + Min; //�p�⵪��

    while (true){ //���ư���
        cout << "�׷��K�X " << Min << " ~ " << Max << " ����" << endl << endl;
        cout << "==> �п�J�A�q���Ʀr:   ";
        cin >> Guess;

        //�p�G���a��J���ƭ�>=Max �� <= Min
        if (Guess >= Max || Guess <= Min){
            cout << "�A�O�Ӷê�!!!!" << endl << endl; //�h��X"�A�O�Ӷê�!!!!"
        }
        else if (Guess > Ans){ //�p�G���a�q�����ƭȤ��ڵ��פj
            Max = Guess; //���W���ܦ����a�q�����ƭ�
        }
        else if (Guess < Ans){ //�p�G���a�q�����ƭȤ��ڵ��פp
            Min = Guess; //���U���ܦ����a�q�����ƭ�
        }
        else{ //�p�G���a�q���F
            cout << "BINGO!!!!�A�q��F!!!!�K�X�O:" << Ans << endl << endl;
            break; //�Q��break���Xwhile�j��
        }
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
