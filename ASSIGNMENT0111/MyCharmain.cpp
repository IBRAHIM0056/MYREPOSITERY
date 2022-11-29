#include"MyChar.h"
using namespace std;
#include<iostream>
int main() {
	char c;
	cout << "ENTER CHAR U WANT TO CONVERT" << endl;
	cin >> c;
	MyChar c1;
	c1.setmychar(c);
	c1.getmychar();
	if (c >= 'a'&&c <= 'z')
	{
		char b = c1.lowerCase(c);
		cout << "upper case is=" << b << endl;
	}
	else
	{
		char d = c1.upperCase(c);
		cout << "lower case is=" << d << endl;
	}
	system("pause");
	return(0);
}
