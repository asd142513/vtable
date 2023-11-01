#include <stdio.h>
#include <stdlib.h>

#include "car.h"
#include "awesome_car.h"

void awesome_car_ctor(AwesomeCar *this, const char *name, const char *brand)
{
	car_ctor_impl(&this->_car, name);
	awesome_car_ctor_impl(&this->_awesome_car, name, brand);
}

void awesome_car_ctor_impl(struct _AwesomeCarImpl *self, const char *name, const char *brand)
{
	self->m_brand = malloc(17);
	snprintf(self->m_brand, 17, "%s", brand);
}

void awesome_car_dtor(AwesomeCar *this)
{
	awesome_car_dtor_impl(&this->_awesome_car);
	car_dtor_impl(&this->_car);
}

void awesome_car_dtor_impl(struct _AwesomeCarImpl *self)
{
	free(self->m_brand);
}

void awesome_car_introduce(AwesomeCar *this)
{
	awesome_car_introduce_impl(&this->_awesome_car);
}

void awesome_car_introduce_impl(struct _AwesomeCarImpl *self)
{
	printf("What a nice %s!\n", self->m_brand);
}
