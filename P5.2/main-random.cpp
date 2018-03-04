#include <iostream>
#include <ctime>
#include "Object.h"
#include "Integer.h"
#include "Tree.h"

int main(int argc, char * argv[])
{
	Tree tree;
	int n = atoi(argv[1]);
	Integer * integer = new Integer[n];
	int i;
	srand(time(0));
	for (i = 0; i < n; i++)
	{
		integer[i].value = rand() % n;
		tree.Insert(&integer[i], &integer[i]);
	}
	int h = tree.getHeight();
	std::cout << h << std::endl;
	delete[] integer;
	return 0;
}