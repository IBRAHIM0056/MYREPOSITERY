#include "MyNum.h"

void MyNum::  setNum(int N) {
		Num = N;
	}
int MyNum::getNum() {
		return Num;
	}
int MyNum::	positiveNum(int)
	{
		Num = Num*(-1);
		return Num;
	}
int MyNum::negitiveNum(int)
	{
		Num = Num*(-1);
		return  Num;
	}

