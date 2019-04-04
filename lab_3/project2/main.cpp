#include <iostream>
#include <string>
using namespace std;

int main(int argc,char **argv)
{
	string a = "deb http://mirror.mephi.ru/debian/ stretch main contrib non-free deb-src http://mirror.mephi.ru/debian/ stretch main contrib non-free deb http://security.debian.org/ stretch/updates main contrib non-free deb-src http://security.debian.org/ stretch/updates main contrib non-free deb http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free deb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free deb http://mirror.mephi.ru/debian stretch-backports main contrib non-free deb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free";
string b="mephi";
string c="yandex";
cout << "Введите слово, которое хотите заменять: "<<endl;
cin >> b;
cout << "Введите слово на которое хотите заменять: "<<endl;
cin >> c;
for ( int i=0; i < a.length(); i++) {
	if (a.substr(i, a.length())== b)
		a.replace(i, a.length(),c);
}
cout<< a <<endl;
return 0; 
}