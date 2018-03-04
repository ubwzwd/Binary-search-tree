#include <iostream>
#include <string>
#include "String.h"
String::String(std::string s)
{
	this->s = s;
}
void String::Print()
{
	std::cout << s << std::endl;
}
bool String::Compare(Object *other_object)
{
	String *other_string = (String *)other_object;
	return s < other_string->s;
}
