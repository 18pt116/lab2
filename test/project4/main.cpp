#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N, i;
	cout << "Введите число для проверки: ";
	cin >> N;
	
	 for(i=2;i<=sqrt(N);i++){ 
		 if (N % 1 ==0) {
			 cout << "Нет\n";
			 return 0;
		 }
	 }
	 cout << "Да\n";
	 return 0;
}