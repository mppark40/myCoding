#include<iostream>
using namespace std;

int main() {
	string word;
	cin >> word;
	
	int array[26] = { 0, };
	int max=0;
	int length = word.length();//길이 입력
	int pos = 0;
	
	for (int i = 0; i < length; i++) //모두 소문자로 변환
		word[i] = tolower(word[i]);

	for (int i = 0; i < length; i++) {//
		int n = word[i];//해당 문자에 관한 아스키 코드 저장
		array[n-97]++;//0에서 시작하기
	}
	
	for (int i = 0; i < 26; i++) {//최대 빈도수 찾기
		if (array[i] > max) {//0보다 크면 해당 개수, 위치 저장
			max = array[i];
			pos = i;
		}
	}
		int cnt = 0;//max와 같은 문자 개수
	
	for (int i = 0; i < 26; i++) {//0~25
		if (array[i] == max) {//같으면 1씩 늘어남
			cnt++;
			if (cnt >= 2) {//2랑 같거나 비슷하면 종료
				cout << "?" << '\n';
				return 0;
			}
		}
	}
	
	cout << char(pos + 65) << '\n';
}