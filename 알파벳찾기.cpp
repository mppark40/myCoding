#include<iostream>
using namespace std;

int main() {
	string S;
	cin >> S;//문자열 입력받기

	int pos;
	for (char i = 'a'; i <= 'z'; i++) {//처음에 생각한 기준을 아예 바꿔버리기
		pos=S.find(i);//string함수 find를 쓰기: 위치 반환 거짓이면 -1 반환됨
		cout << pos << ' ';//위치 출력
	}
}