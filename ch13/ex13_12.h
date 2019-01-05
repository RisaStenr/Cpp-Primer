/*
Exercise 13.12
How many destructor calls occur in the following code fragment?
bool fcn(const Sales_data *trans, Sales_data accum)
{
	Sales_data item1(*trans), item2(accum);
	return item1.isbn() != item2.isbn();
}

There are 3 destructors called.
1. accum is destroyed at the end of the function
2. item1 is destroyed at the end of the function
3. item2 is destroyed at the end of the function

trans is not destroyed because it is a pointer.
It must be explicitly freed with a delete, which can happen in the 
function or in the scope that called the function.

*/
