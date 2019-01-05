/*
Exercise 13.6:
What is a copy-assignment operator?  When is this operator used?
What does the synthesized copy-assignment operator do?  When is
it synthesized?

The copy-assignment operator is an overloaded operator. It is used 
when we use copy assignment on an object.  The synthesized copy-
assignment operator for some classes disallows assignemnt, but for
others it assigns each nonnstatic member for the right-hand object
to the corresponding member of the left-hand object usinng the 
copy-assignment operator for that type of member.  It is synthesized
when the class does not define its own copy-assignment operator.


*/
