#include<iostream>
using namespace std;

int main() {
	int num = 0,max;//num�� ���° ã��,max�ִ밪
	int array[10];	//9���� ���� �迭 
	
	for (int i = 1; i < 10; i++) 
		cin >> array[i];//0~8�������� ���ڸ� �Է�
	max = array[0];//�ִ밪 �ʱ�ȭ
	
	for (int i = 1; i < 10; i++) {//0~8���� ��
		
		if (max < array[i]) {
			max = array[i];
			num = i;
		}

	}
	
	cout << max << '\n' << num;//�ִ밪,���° �� ���
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