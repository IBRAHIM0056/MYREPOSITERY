
		Name::Name(char*, char*)
		{
			firstName = nullptr;
			lastName = nullptr;
		}
		Name::Name(const Name&std)
		{
			firstName = std.firstName;
			lastName = std.lastName;
		}
		void Name::copyName()
		{
			
		}
		void Name::camelCase(char*firstName, char*lastName)
		{
			if (firstName >= 'a' && firstName <= 'z')
			{
				firstName = firstName- 32;
			}
			if (lastName >='A' && lastName <= 'Z')
			{
				lastName = lastName - 32;
			}
		}
		void Name::tolower()
		{
		if(first <= 65 && <= 92)
		{
			first = first + 32;
		}
		if (last <= 97 && = <= 122)
		{
			last = last + 32;
		}
		void Name::swapNames()
		{
			char = temp;
			first = temp;
			last = first;
			temp = last;
		}
		char* fullName()
		{
			cout << "full name is" << first << last << endl;

		}
		bool(true)
		{
			if ((first >= 'a'&&first <= 'z') || (first >= 'A'&&first <= 'Z')
		}
		else
			cout << "error invalid name"<<endl;
	}
	void setfirstName(char*f)
	{
		firstName = f;
	}
	void setLastName(char*l)
	{
		LastName = l;
	}
	char*getfirstName()
	{
		return*firstName;
	}
	char*getlastName()
	{
		retrun*LastName;
	}

	Name::~Name()
	{
		firstName = nullptr;
		lastName = nullptr;
		delete firstName, lastName;
	}
};


