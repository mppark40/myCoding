#include<iostream>
using namespace std;

int main() {
	int testNum;//�׽�Ʈ ���̽��� ����
	int repeat;//�ݺ� Ƚ��
	cin >> testNum;

	int tmp=0;
	string String;
	while(tmp<testNum){//0~�׽�Ʈ ���̽�-1
		cin >> repeat;//�ݺ��� Ƚ�� �Է�
		cin >> String;//���ڿ� �Է�

		int length = String.length();
		for (int i = 0; i < length;i++ ) {
			for (int j = 0; j < repeat; j++)
				cout << String[i];
		}
		tmp++;
		cout << '\n';
	}
}
/*
int main() {
	int testNum;
	cin >> testNum;
	int testCase;
	string test;
	int length;
	for (int i = 0; i < testNum; i++) {
		cin >> testCase;//��� �ݺ�
		cin >> test;//�ݺ��� ���ڿ�
		
		length = test.length();
		if (length < 1 || length>8)//���ڿ� ���� �����
			return 0;
		
		else {
			for (int i = 0; i < testCase;i++) {//�ݺ��� Ƚ��
				for (int j = 0; j < testCase; j++) //
					cout << test[i];		
			}
		}
		cout << '\n';
	}
	return 0;
}*/