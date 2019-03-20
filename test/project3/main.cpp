#include <stdio.h>
#include <iostream>

using namespace std;
int main() 
{
	int A[9999], i, sum=0;
	
	cout <<"Последовательность: \n";
	for( int i=0;i<9999;i++){
	cin >> A[i];
	
	if (A[i]==0) break;
	else if (A[i]>0) sum = sum + A[i];
	} 
			
	cout <<"Сумма : " << sum << endl;
	return 0;
}
