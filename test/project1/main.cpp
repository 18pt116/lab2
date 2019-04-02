#include <iostream>

using namespace std;
int main() {
	int N,i;
	
	cout <<"Введите N: ";
	cin >> N;
	double A[i];
	cout << "Введите массив: ";
	for(i=0; i<N;i++){
		cin >> A[i];
	} 
	double sum=0;
	for (i=0; i<N;i++) {
		sum = sum + A[i];
	}
	cout << sum/N << endl;
	return 0;
}