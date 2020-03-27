#include<iostream>
using namespace std;

int main() {
	int testNum;//테스트 케이스의 개수
	int repeat;//반복 횟수
	cin >> testNum;

	int tmp=0;
	string String;
	while(tmp<testNum){//0~테스트 케이스-1
		cin >> repeat;//반복할 횟수 입력
		cin >> String;//문자열 입력

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
		cin >> testCase;//몇번 반복
		cin >> test;//반복할 문자열
		
		length = test.length();
		if (length < 1 || length>8)//문자열 길이 벗어나면
			return 0;
		
		else {
			for (int i = 0; i < testCase;i++) {//반복할 횟수
				for (int j = 0; j < testCase; j++) //
					cout << test[i];		
			}
		}
		cout << '\n';
	}
	return 0;
}*/