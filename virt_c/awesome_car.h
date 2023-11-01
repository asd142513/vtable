#ifndef __AWESOME_CAR_H__
#define __AWESOME_CAR_H__ 1

#include "car.h"

typedef struct AwesomeCar AwesomeCar;

struct _AwesomeCarImpl {
	char *m_brand;
};

struct AwesomeCar {
	struct _CarImpl _car;
	struct _AwesomeCarImpl _awesome_car;
};

void awesome_car_ctor(AwesomeCar *this, const char *name, const char *brand);
void awesome_car_ctor_impl(struct _AwesomeCarImpl *self, const char *name, const char *brand);
void awesome_car_dtor(AwesomeCar *this);
void awesome_car_dtor_impl(struct _AwesomeCarImpl *self);
void awesome_car_introduce(AwesomeCar *this);
void awesome_car_introduce_impl(struct _AwesomeCarImpl *self);

#endif // __AWESOME_CAR_H__
