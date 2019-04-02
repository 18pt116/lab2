#include <iostream>

using namespace std;
int main() 
{
	int  A, i;
	
	cout <<"Искомое число: ";
	cin >> A;
	
	do{
		cout << "Число: ";
		cin >> i;
			if (A==i) {
				cout << "Найдено: " << A<< endl;
				return 0;
			} 
		}while (i!=0);
	cout <<"Не найдено.\n: ";
	return 0;
}
