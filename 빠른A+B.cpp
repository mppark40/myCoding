#include<iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);//버퍼 제거해서 속도 증가
	
	int num;
	cin >> num;

	int a, b;
	for (int i = 0; i < num; i++) {
		cin >> a >> b;
		cout << a + b << '\n';
	}
	return 0;
}