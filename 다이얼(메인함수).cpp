#include<iostream>
using namespace std;
/*
1=>2��, 1���� ū ���� �Ŵµ� �ɸ��� �ð� 1�ʾ� ����
�� ���ĺ��� �ش��ϴ� ����
�ҸӴϴ� ��ȭ��ȣ�� ���ڿ� �ش��ϴ� ���ڷ� �ܿ��
*/
int main() {
	string str;
	cin >> str;
	int length = str.length();
	int time = 0;

	int* num = new int[length];
	
	for (int i = 0; i < length; i++) {
		if (str[i] >= 'A' && str[i] <= 'C') {
			num[i] = 3;
			time = time + 3;
		}
		
		else if (str[i] >= 'D' && str[i] <= 'F') {
			num[i] = 4;		
			time = time + 4;
		}
		
		else if (str[i] >= 'G' && str[i] <= 'I') {
			num[i] = 5;
			time = time + 5;
		}
			
		else if (str[i] >= 'J' && str[i] <= 'L') {
			num[i] = 6;
			time = time + 6;
		}

		else if (str[i] >= 'M' && str[i] <= 'O') {
			num[i] = 7;
			time = time + 7;
		}
		
		else if (str[i] >= 'P' && str[i] <= 'S') {
			num[i] = 8;
			time = time + 8;
		}

		else if (str[i] >= 'T' && str[i] <= 'V') {
			num[i] = 9;
			time = time + 9;
		}
		
		else if (str[i] >= 'W' || str[i] <= 'Z') {
			num[i] = 10;
			time = time + 10;
		}

	}
	cout << time;
	return 0;
	delete[]num;
}