/*
13.4: Assuming Point is a class type with a public copy constructor, 
identify each use of the copy constructor in this program fragment:

Point global;
Point foo_bar(Point arg)
{
	Point local = arg, *heap = new Point(global);
	*heap = local;
	Point pa [ 4 ] = { local, *heap };
	return *heap;
}

13.4: There are 5 uses:
1.Point local = arg
2.*heap = new Point(global);
3.Point pa [ 4 ] = { local, *heap };
4.Point pa [ 4 ] = { local, *heap };
5.return *heap;

*heap = local; is a use of the copy assignment operator.
*/
