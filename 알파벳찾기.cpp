#include<iostream>
using namespace std;

int main() {
	string S;
	cin >> S;//���ڿ� �Է¹ޱ�

	int pos;
	for (char i = 'a'; i <= 'z'; i++) {//ó���� ������ ������ �ƿ� �ٲ������
		pos=S.find(i);//string�Լ� find�� ����: ��ġ ��ȯ �����̸� -1 ��ȯ��
		cout << pos << ' ';//��ġ ���
	}
}