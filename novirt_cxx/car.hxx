#ifndef __CAR_HXX__
#define __CAR_HXX__ 1

#include <cstdio>

class Car {
	char *m_owner;

public:
	Car(const char *name)
	{
		m_owner = new char[13];
		snprintf(m_owner, 13, "%s", name);
	}

	~Car()
	{
		delete[] m_owner;
	}

	void introduce()
	{
		printf("%s has a nice car\n", m_owner);
	}
};

#endif // __CAR_HXX__
