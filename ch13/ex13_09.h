/*
Exercise 13.9
What is a destructor?  What does the synthesized destructor do?
When is a destructor synthesized?

A destructor is a special member function, denoted by a ~ and the
class name with an empty parameter list and no return value, that
is called when a object of that class is destroyed. The synthesized
destructor can disallow objects of the type from being destroyed,
otherwise it has an empty body and after the empty destructor body
is run, the members of the object are destroyed.  A destructor is
synthesized when we do not provide one of our own.


*/
