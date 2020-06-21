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