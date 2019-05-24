#include <iostream>
#include <string>
 using namespace std;
 class String
{
5
 char * value;
 int len;
public:
 String():value(new char[1] {}),len(0) {};
 String(const String& s);
 ~String();
 friend ostream& operator<<(ostream& o, const
String & s);
};
ostream& operator<<(ostream& outputStream, const
String & s)
{
 return outputStream << s.value;
}
String::~String()
{
 delete[] value;
 }
String::String(const String& s)
{
 len=s.len;
 value = new char[len+1];
 for (int i=0; i<=len; i++)
 value[i]=s.value[i];
 }
 int main(int argc, char **argv)
 {
 String s1("hello");
 String s2(s1);
 cout<<s2<<” “<<s1<<” “<<endl;
6
 return 0;
 }
