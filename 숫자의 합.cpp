#include<iostream>
using namespace std;
#include<string>

int main() {
	int num, sum = 0,tmp;
	cin >> num;
	cin.get();

	char array;
	for (int i = 0; i < num; i++) {
		cin.get(array);
		tmp = array - '0';
		sum += tmp;
	}
	cout << sum<<endl;
}
/*
int main() {
	int num;
	cin >> num;//������ ����

	int sum = 0;//��=0
	string n;//���ڿ��� �Է¹ޱ�
	cin >> n;//���ڵ� �Է�
	for (int i = 0; i < num; i++) {
		char tmp = n[i];//���ڿ� �ϳ��� �߶� �Է��ϱ�
		sum = sum + atoi(&tmp);//�ڸ� �Ŀ� ���ڷ� ��ȯ��Ű��
	}

	cout << sum;//�� ���
}*/