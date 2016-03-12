#include "stdafx.h"
#include "Dog.h"

Dog::Dog(int dogAge, bool dogHasFlees)
{
	if (dogAge < 0)
	{
		dogAge = 0;
	}
	this->age = dogAge;
	this->hasFlees = dogHasFlees;
}

bool Dog::GetHasFlees()
{
	return this->hasFlees;
}