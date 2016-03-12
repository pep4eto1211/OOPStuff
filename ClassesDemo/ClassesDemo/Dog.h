#include "stdafx.h"

class Dog
{
public:
	Dog(int dogAge, bool dogHasFlees);
	bool GetHasFlees();
	int age;
private:
	bool hasFlees;
};