#include <stdlib.h>

#include "car.h"
#include "awesome_car.h"

int main(void)
{
	Car a; car_ctor(&a, "Harry");
	AwesomeCar b; awesome_car_ctor(&b, "Ron", "Lamborghini");

	car_introduce(&a);
	awesome_car_introduce(&b);

	Car *x = malloc(sizeof(Car)); car_ctor(x, "James");
	Car *y = malloc(sizeof(AwesomeCar)); awesome_car_ctor(y, "Lily", "Porsche");

	x->_car.vtable->introduce(x);
	y->_car.vtable->introduce(y);

	x->_car.vtable->dtor(x); free(x);
	y->_car.vtable->dtor(y); free(y);

	awesome_car_dtor(&b);
	car_dtor(&a);

	return 0;
}
