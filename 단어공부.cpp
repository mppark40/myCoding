#include<iostream>
using namespace std;

int main() {
	string word;
	cin >> word;
	
	int array[26] = { 0, };
	int max=0;
	int length = word.length();//���� �Է�
	int pos = 0;
	
	for (int i = 0; i < length; i++) //��� �ҹ��ڷ� ��ȯ
		word[i] = tolower(word[i]);

	for (int i = 0; i < length; i++) {//
		int n = word[i];//�ش� ���ڿ� ���� �ƽ�Ű �ڵ� ����
		array[n-97]++;//0���� �����ϱ�
	}
	
	for (int i = 0; i < 26; i++) {//�ִ� �󵵼� ã��
		if (array[i] > max) {//0���� ũ�� �ش� ����, ��ġ ����
			max = array[i];
			pos = i;
		}
	}
		int cnt = 0;//max�� ���� ���� ����
	
	for (int i = 0; i < 26; i++) {//0~25
		if (array[i] == max) {//������ 1�� �þ
			cnt++;
			if (cnt >= 2) {//2�� ���ų� ����ϸ� ����
				cout << "?" << '\n';
				return 0;
			}
		}
	}
	
	cout << char(pos + 65) << '\n';
}