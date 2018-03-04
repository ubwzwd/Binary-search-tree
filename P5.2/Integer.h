#ifndef INTEGER_H_
#define INTEGER_H_
#include "Object.h"
class Integer :
	public Object
{
public:
	int value;
	Integer();
	Integer(int value);
	void Print(void);
	bool Compare(Object *other);
};
#endif
