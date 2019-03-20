#include <stdio.h>
#include <iostream>

using namespace std;
int main() {
	int N, i;
	float A[N], sum=0;
	
	cout <<"Введите N: ";
	cin >> N;
	cout << "Введите массив: ";
	for(i=0; i<N;i++){
		cin >> A[i];
	} 
	for (i=0; i<N;i++) {
		sum = sum + A[i];
	}
	cout << sum/N << endl;
	return 0;
}