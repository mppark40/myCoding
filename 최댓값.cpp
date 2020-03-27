#include<iostream>
using namespace std;

int main() {
	int num = 0,max;//num은 몇번째 찾기,max최대값
	int array[10];	//9개의 정수 배열 
	
	for (int i = 1; i < 10; i++) 
		cin >> array[i];//0~8개까지의 숫자를 입력
	max = array[0];//최대값 초기화
	
	for (int i = 1; i < 10; i++) {//0~8까지 비교
		
		if (max < array[i]) {
			max = array[i];
			num = i;
		}

	}
	
	cout << max << '\n' << num;//최대값,몇번째 수 출력
}/*
#include<iostream>
using namespace std;
int main()
{
	int A[100];
	int MAX = 0;
	int number = 0;
	for (int i = 1; i < 10; i++)
	{
		cin >> A[i];
		if (MAX < A[i])
		{
			MAX = A[i];
			number = i;
		}
	}
	cout << MAX << endl << number;
}*/