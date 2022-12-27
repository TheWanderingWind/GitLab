#include "calculator.h"

int Calculator::Add (int a, int b)
{
    return a + b;
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

int Calculator::Min(double a, double b)
{
	if (a <= b) 
	{
		return a;
	} else {
		return b;
	}
}
