#include <iostream>
#include <string>
using namespace std;

int main(int argc,char **argv)
{
	cout<<"Введите число диапозона от 1 до 100: ";
	int A;
	string q = "верблюд";
	string w = "верблюда";
	string e = "верблюдов";
	while(cin >> A) {
		if (A<1||A>100) cout <<"Ошибка"<< endl;
		else if (A % 10==1) cout << "В караване был "<< A <<" "<< q << endl;
		else if (A % 10>=2 && A % 10 <=4) cout << "В караване было "<< A <<" "<< w << endl;
		else if (A % 10>=5 && A % 10 <=9 || A==11 || A==12 || A==13 || A==14 || A % 10 ==0) cout << "В караване было "<< A <<" "<< e << endl;
	}
	return 0;
}
