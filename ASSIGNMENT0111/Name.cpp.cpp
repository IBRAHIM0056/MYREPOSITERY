#include "Name.h"

class Name{
private:

	char* firstName;
	char*lastName;

public:
	void setfirstName(char*f);
	char*getfirstName();
	char*getlastName();
	void setLastName(char*l);
	Name(char*, char*);
	Name(const Name&std);
	~Name();
	void copyName();
	void camelCase();
	void tolower();
	void swapNames();
	char* fullName();
};