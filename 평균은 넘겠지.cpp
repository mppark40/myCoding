#include<iostream>
using namespace std;

int main() {
	int num,loop=0;
	cin >> num;//몇 번 할지 설정

	while (num > loop) {//0~num까지 돌리기
		int student, total = 0, cnt = 0;
		cin >> student;//학생수 입력받기
		
		int *studentScore = new int[student];
		for (int i = 0; i < student; i++) {//학생수만큼 입력받기
			cin >> studentScore[i];//입력하기
			total += studentScore[i];//입력받을 때마다 총합 구하기
		}
		
		double avg; 
		avg= (double)total / student;//평균구하기
		
		for (int i = 0; i < student; i++) {
			if (studentScore[i] > avg)//입력받은점수와 평균 비교
				cnt++;//평균보다 높은 사람들 숫자 세기
		}
		double ratio = ((double)cnt / student) * 100;
		cout << fixed;//소점 정하기
		cout.precision(3);
		cout << ratio<<"%\n";//평균보다 높은 사람 수/전체 수*100 %
		loop++;
	}
}