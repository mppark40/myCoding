#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;//���� �� ������ ����

	if (num > 1000)//1000�� �Ѿ��� �� ���� ����
		return -1;

	double* array = new double[num];

	double max = 0.0;

	for (int i = 0; i < num; i++) {
		cin >> array[i];
		if (max < array[i])
			max = array[i];
	}
	double sum = 0;
	for (int i = 0; i < num; i++) {
		array[i] = (array[i] / max) * 100;
		sum = sum + array[i];
	}
	cout << fixed;//�Ҽ��� �ڸ��� ����
	cout.precision(2);
	cout << (sum / num);
	delete[]array;
}/*#include <iostream>  

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	
	if (N > 1000)
		return -1;
	
	float score[1000];
	for (int i = 0; i < N; ++i)
	{
		cin >> score[i];
	}

	int max=0;

	for (int i = 0; i < N; ++i) 
		if (score[i] > max)
			max = score[i];
		

	for (int i = 0; i < N; ++i) 
		score[i] = score[i] / max * 100;
		

	float total = 0;
	for (int i = 0; i < N; ++i)
		total += score[i];

	cout << fixed;
	cout.precision(2);
	cout << total / N << endl;

	return 0;


}*/