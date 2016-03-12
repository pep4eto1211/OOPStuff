#include "stdafx.h"
#include "box.h"

Box::Box(int h, int w, int d, int num, string c)
{
	height = h;
	width = w;
	depth = d;
	randomNumber = num;
	colour = c;
}

int Box::GetH()
{
	return height;
}
int Box::GetW()
{
	return width;
}
int Box::GetD()
{
	return depth;
}
string Box::GetColour()
{
	return colour;
}

void Box::SetColour(string colour)
{
	this->colour = colour;
}

void Box::PlaceNumber(int possition, int number)
{
	if ((possition >= 0) && (possition < 16))
	{
		this->array[possition] = number;
	}
}

int Box::GetNumberFromPossition(int possition)
{
	if ((possition >= 0) && (possition < 16))
	{
		return this->array[possition];
	}
}