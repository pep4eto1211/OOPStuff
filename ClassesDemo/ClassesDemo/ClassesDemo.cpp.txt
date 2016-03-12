// ClassesDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Dog.h"
#include <iostream>

using namespace std;


int main()
{
	Dog doge = Dog(12, true);
	Dog doge2 = Dog(-51, false);

	//doge.GetHasFlees() = false;

	cout << doge.age << endl;
	cout << doge2.age << endl;

	system("pause");
	return 0;
}

