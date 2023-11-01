#ifndef __AWESOME_CAR_HXX__
#define __AWESOME_CAR_HXX__ 1

#include <cstdio>

#include "car.hxx"

class AwesomeCar : public Car {
	char *m_brand;

public:
	AwesomeCar(const char *name, const char *brand)
		: Car(name)
	{
		m_brand = new char[17];
		snprintf(m_brand, 17, "%s", brand);
	}

	~AwesomeCar()
	{
		delete[] m_brand;
	}

	void introduce()
	{
		printf("What a nice %s!\n", m_brand);
	}
};

#endif // __AWESOME_CAR_HXX__
