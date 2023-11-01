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

	car_introduce(x);
	car_introduce(y);

	car_dtor(x); free(x);
	car_dtor(y); free(y);

	awesome_car_dtor(&b);
	car_dtor(&a);

	return 0;
}
