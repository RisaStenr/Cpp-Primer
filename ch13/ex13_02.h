/*
13.2: Explain why the following declaration is illegal:

Sales_data::Sales_data(Sales_data rhs);


13.2: It is illegal because the parameter to the contructor must be a reference, usually
a const reference.  If it is not a reference, the call to the copy contructor would 
never succeed, because to call the copy contructor, we'd need to use the copy 
constructor to copy the argument, but to copy the argument, we'd need to call the
copy contructor, and so on indefinitely.


*/
