#include "MyChar.h"
MyChar::MyChar()
{
}
MyChar::MyChar(char m)
{
	this->mychar = m;
}
    void MyChar::setmychar(char c) {
		mychar = c;
	}
	char MyChar::getmychar() {
		return mychar;
	}
	char MyChar::upperCase(char e)
	{
		if (e >= 'A' && e<= 'Z'){
			e = e+32;
			return e;
		}
	}
		char MyChar::lowerCase(char f)
		{
			if (f>= 'a' && f <= 'z'){
				f = f-32;
				return f;
			}
		}
MyChar::~MyChar()
{
}
