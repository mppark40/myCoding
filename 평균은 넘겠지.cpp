#include<iostream>
using namespace std;

int main() {
	int num,loop=0;
	cin >> num;//�� �� ���� ����

	while (num > loop) {//0~num���� ������
		int student, total = 0, cnt = 0;
		cin >> student;//�л��� �Է¹ޱ�
		
		int *studentScore = new int[student];
		for (int i = 0; i < student; i++) {//�л�����ŭ �Է¹ޱ�
			cin >> studentScore[i];//�Է��ϱ�
			total += studentScore[i];//�Է¹��� ������ ���� ���ϱ�
		}
		
		double avg; 
		avg= (double)total / student;//��ձ��ϱ�
		
		for (int i = 0; i < student; i++) {
			if (studentScore[i] > avg)//�Է¹��������� ��� ��
				cnt++;//��պ��� ���� ����� ���� ����
		}
		double ratio = ((double)cnt / student) * 100;
		cout << fixed;//���� ���ϱ�
		cout.precision(3);
		cout << ratio<<"%\n";//��պ��� ���� ��� ��/��ü ��*100 %
		loop++;
	}
}