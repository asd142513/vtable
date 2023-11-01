#include <cstdio>

#include "car.hxx"
#include "awesome_car.hxx"

int main()
{
	Car a("Harry");
	AwesomeCar b("Ron", "Lamborghini");

	a.introduce();
	b.introduce();

	Car *x = new Car("James");
	Car *y = new AwesomeCar("Lily", "Porsche");

	x->introduce();
	y->introduce();

	delete x;
	delete y;

	return 0;
} // b, a are destructed automatically
