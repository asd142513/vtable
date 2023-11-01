#ifndef __CAR_H__
#define __CAR_H__ 1

typedef struct Car Car;

typedef void CarDtor_t(Car *);
typedef void CarIntroduce_t(Car *);

struct _CarVtable {
	CarDtor_t *dtor;
	CarIntroduce_t *introduce;
};

struct _CarImpl {
	const struct _CarVtable *vtable;
	char *m_owner;
};

struct Car {
	struct _CarImpl _car;
};

void car_ctor(Car *this, const char *name);
void car_ctor_impl(struct _CarImpl *self, const char *name);
void car_dtor(Car *this);
void car_dtor_impl(struct _CarImpl *self);
void car_introduce(Car *this);
void car_introduce_impl(struct _CarImpl *self);

#endif // __CAR_H__
