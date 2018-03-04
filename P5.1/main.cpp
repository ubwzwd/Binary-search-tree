#include <iostream>
#include <cstdlib>
#include <string>
#include "Tree.h"
#include "Person.h"
#include "String.h"
int main()
{
	// Create tree
	Tree tree;
	// Create persons
	Person p1("John", "Smith", 20, "jsmith@neu.edu");
	Person p2("Adam", "Taylor", 25, "ataylor@neu.edu");
	Person p3("Tracy", "Terry", 30, "tterry@neu.edu");
	Person p4("Julie", "Tillman", 35, "jtillman@neu.edu");
	Person p5("Michael", "Mace", 40, "mmace@neu.edu");
	Person p6("Florence", "Tarrance", 45, "ftarrance@neu.edu");
	Person p7("Steven", "Cole", 50, "scole@neu.edu");
	// Insert persons
	tree.Insert(&p1.last, &p1);
	tree.Insert(&p2.last, &p2);
	tree.Insert(&p3.last, &p3);
	tree.Insert(&p4.last, &p4);
	tree.Insert(&p5.last, &p5);
	tree.Insert(&p6.last, &p6);
	tree.Insert(&p7.last, &p7);
	// Print all elements
	std::cout << '\n' << std::string(40, '=') << '\n';
	std::cout << "Listing tree...\n";
	tree.Print();
	////// Query 'Mace'
	//std::cout << '\n' << std::string(40, '=') << '\n';
	//std::cout << "Querying 'Mace'...\n";
	//String s1("Mace");
	//Person *p8 = (Person *)tree.Search(&s1);
	//p8->Print();
	//// Query minimum value
	//std::cout << '\n' << std::string(40, '=') << '\n';
	//std::cout << "Querying min...\n";
	//Person *p9 = (Person *)tree.Min();
	//p9->Print();
	//// Deleting 'Taylor'
	//std::cout << '\n' << std::string(40, '=') << '\n';
	//std::cout << "Deleting 'Taylor' and listing...\n";
	//String s2("Taylor");
	//tree.Delete(&s2);
	//tree.Print();
	//End
	std::cout << '\n' << std::string(40, '=') << '\n';
	int height;
	height = tree.getHeight();
	std::cout << "The height of this tree is " << height << "." << std::endl;
	return 0;
}