#include"MyNum.h"
#include<iostream>
using namespace std;
int main() {

	int h = 0;
	cout << "ENTER A DESIRED NUMBER " << endl;
	cin >> h;
	MyNum a1;
	a1.setNum(h);
	a1.getNum();
	int res = a1.positiveNum(h);
	cout << "POSITIVE NUMBER" << endl;
	cout << res << endl;
	int res1 = a1.negitiveNum(h);
	cout << "NEGITVE NUMBER" << endl;
	cout << res1 << endl;
	system("pause");
	return(0);
}