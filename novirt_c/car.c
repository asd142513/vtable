#include <stdio.h>
#include <stdlib.h>

#include "car.h"

void car_ctor(Car *this, const char *name)
{
	car_ctor_impl(&this->_car, name);
}

void car_ctor_impl(struct _CarImpl *self, const char *name)
{
	self->m_owner = malloc(13);
	snprintf(self->m_owner, 13, "%s", name);
}

void car_dtor(Car *this)
{
	car_dtor_impl(&this->_car);
}

void car_dtor_impl(struct _CarImpl *self)
{
	free(self->m_owner);
}

void car_introduce(Car *this)
{
	car_introduce_impl(&this->_car);
}

void car_introduce_impl(struct _CarImpl *self)
{
	printf("%s has a nice car\n", self->m_owner);
}
