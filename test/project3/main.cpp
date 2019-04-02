#include <iostream>

using namespace std;
int main() 
{
	int A, i, sum=0;
	cout <<"Длина Последовательности: ";
	cin >> A;
	int* a = new int [A];
	cout <<"Введите числа: ";
	for (int i=0;i<A;i++){
	 cin >> a[i];
	if (a[i]>0) {
		sum = sum + a[i];
	}
	else break ;
	} 
			
	cout <<"Сумма : " << sum << endl;
	return 0;
}
