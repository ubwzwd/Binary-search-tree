//#include <iostream>
//#include <cstdlib>
//#include "Object.h"
//#include "Integer.h"
//#include "Tree.h"
//
//int main(int argc, char * argv[])
//{
//	Tree tree;
//	int n = atoi(argv[1]);
//	Integer * integer = new Integer[n];
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		integer[i].value = i;
//		tree.Insert(&integer[i], &integer[i]);
//	}
//	int h = tree.getHeight();
//	std::cout << h;
//	delete[] integer;
//	return 0;
//}