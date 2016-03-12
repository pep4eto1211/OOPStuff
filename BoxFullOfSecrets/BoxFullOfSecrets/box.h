#include "stdafx.h"
#include <string>
using std:: string;
class Box
{
private:
	int height, width, depth, randomNumber;
	string colour;
	int array[16];
public:
	Box(int h, int w, int d, int num, string c);

	int GetH();
	int GetW();
	int GetD();
	string GetColour();

	void SetColour(string colour);
	void PlaceNumber(int possition, int number);
	int GetNumberFromPossition(int possition);

};