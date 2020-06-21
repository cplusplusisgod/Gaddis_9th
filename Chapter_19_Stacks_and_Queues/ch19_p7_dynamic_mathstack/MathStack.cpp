// Implementation file for the MathStack class
#include "MathStack.h"
#include <iostream>
//***********************************************
// Member function add. add pops                *
// the first two values off the stack and       *
// adds them. The sum is pushed onto the stack. *
//***********************************************

void MathStack::add()
{
   int num, sum;
   if (getSize() > 0) {
	   // Pop the first two values off the stack.
	   pop(sum);
	   pop(num);

	   // Add the two values, store in sum.
	   sum += num;

	   // Push sum back onto the stack.
	   push(sum);
   }
   else
   {
	   std::cout << "Less then 2 objs in the stack. Cannot add.\n";
   }
}

//***********************************************
// Member function sub. sub pops the            *
// first two values off the stack. The          *
// second value is subtracted from the          *
// first value. The difference is pushed        *
// onto the stack.                              *
//***********************************************

void MathStack::sub()
{
	if (getSize() > 0) {
		int num, diff;

		// Pop the first two values off the stack.
		pop(diff);
		pop(num);

		// Subtract num from diff.
		diff -= num;

		// Push diff back onto the stack.
		push(diff);
	}
	else
	{
		std::cout << "Less then 2 objs in stack. Cannot subtract.\n";
	}
}

void MathStack::mult()
{
	if (getSize() > 0)
	{
		int num, sum;
		pop(num);
		pop(sum);

		sum *= num;

		push(sum);
	}
	else
	{
		std::cout << "Error! less then 2 objs on the stack.\n";
	}
}

void MathStack::div()
{
	if (getSize() > 0)
	{
		int num, result;

		pop(num);
		pop(result);

		result /= num;

		push(result);
	}
	else
	{
		std::cout << "Error! Less then 2 objs on the stack.\n";
	}
}

void MathStack::addAll()
{
	if (getSize() > 0)
	{
		int num = 0, sum = 0;

		while (!isEmpty())
		{
			pop(num);
			sum += num;
		}
		push(sum);
	}
	else
	{
		std::cout << "Error! Less then 2 objs on the stack.\n";
	}
}

void MathStack::multAll() {
	if (getSize() > 0)
	{
		int num = 0, sum = 1;

		while (!isEmpty())
		{
			pop(num);
			sum *= num;
		}
		push(sum);
	}
	else
	{
		std::cout << "Error! Less then 2 objs on the stack.\n";
	}
}