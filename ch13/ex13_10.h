/*
Exercise 13.10
What happens when a StrBlob object is destroyed?  What about a
StrBlobPtr?

When a StrBlob object is destroyed, the destructors of data is
called (which is a shared_ptr) and it checks to see if its ref-
erence count is 0.  If it is, the memory shared_ptr points to 
is destroyed.  When a StrBlobPtr is destroyed, the destructor of
the weak_ptr wptr is called, and it is destroyed, but because it
is a weak_ptr the reference count of the shared_ptr that points to
the same memory is unaffected, so the memory is unaffected.



*/
