#ifndef STRING_H
#define STRING_H
#include <string>
#include "Object.h"
class String : public Object
{
public:
	std::string s;
	String(std::string s);
	void Print();
	bool Compare(Object *object);
};
#endif