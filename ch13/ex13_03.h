/*
13.3: What happens when we copy a StrBlob?  What about StrBlobPtrs?

When a StrBlob is copied, its class members are copied over using the implicit 
copy constructor for each class member.  A StrBlobPtr is copied the same way.
*/
