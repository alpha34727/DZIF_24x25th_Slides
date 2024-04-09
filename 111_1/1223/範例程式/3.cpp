#include <iostream> //��J��X���禡�w
#include <cmath>    //�⥭��ڪ��禡�w
using namespace std;

//�P�_�O�_����ƪ��ۭq�禡
bool is_prime(int n){
    //2�O���
    if (n == 2){
        return true;
    }
    //�p�󵥩�0���ơB1�B���Ƥ��O���
    if (n <= 1 || n % 2 == 0){
        return false;
    }
    //��n���l 3~�ڸ�n ���_�ơA�P�_�O�_���䤧����
    for (int i = 3; i <= sqrt(n); i+=2){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int M, N, original_M, //original_M�ΨӰO�������ܪ�M
        cnt = 0, //�p��d�򤺦@���h�ֽ��
        sum = 0; //�p���ƪ��`�M

    cin >> M >> N; //Ū�J�d��

    //�T�OM<N
    if (N < M){
        //�p�GM>N�A�hM�MN�洫
        int tmp = M;
        M = N;
        N = tmp;
    }

    //������Ӫ�M��origial_M
    original_M = M;

    //��X
    cout << original_M << " ~ " << N << " �����O��ƪ����G";

    //�p�GM<=2<=N�A�hM~N�����]�t2
    if (M <= 2 && 2 <= N){
        cout << "\n=>\t2,\t"; //��X2
        cnt++; //��ƭӼ�+1
        sum += 2; //����`�M+2
        M = 3; //��M=3
    }

    //��M��������
    if (M % 2 == 0){ //�p�GM������
        M++; //M+1
    }

    //�qM�}�l��N�A�P�_�O�_�����
    for (int i = M; i <= N; i+=2/*�D2���Ƥ��O���*/){
        if (is_prime(i)){ //�p�G�O���
            if (cnt % 10 == 0){ //�p�G��X�W�L10�ӽ�ƩΨS����X�L�A�N����ÿ�X=>
                cout << "\n=>\t";
            }
            cnt++; //��ƭӼ�+1
            sum += i; //����`�M+i
            cout << i << ",\t"; //��Xi
        }
    }

    cout << "\n\n";
    cout << " " << original_M << " ~ " << N << " �����@�� " << cnt << " �ӽ��\n\n";
    cout << " " << original_M << " ~ " << N << " �����`�M= " << sum << "\n";

    return 0;
}
