#include <stdio.h>
#include <iostream>

using namespace std;
int main() 
{
	int N, A[9999], i;
	
	cout <<"Искомое число: ";
	cin >> N;
	
	if(N!=0) {
		cout << "Последовательность: \n";
		for(i=0;i<9999;i++) {
			cin >> A[i];
			if (A[i]==0) break;
			else if (A[i]==N) {
				cout << "Найдено: " << A[i] << endl;
				return 0;
			} 
		}
	}
	cout <<"Не найдено.\n: ";
	return 0;
}
