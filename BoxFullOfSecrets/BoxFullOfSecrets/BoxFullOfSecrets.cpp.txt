// BoxFullOfSecrets.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "box.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Box kutiq = Box(40, 23, 53, 6, "Green");
	
	for (int i = 0; i < 106; i++)
	{
		kutiq.PlaceNumber(i, i + 1);
	}
	for (int i = 0; i < 106; i++)
	{
		cout << kutiq.GetNumberFromPossition(i) << endl;
	}
	system("pause");
	return 0;
}

