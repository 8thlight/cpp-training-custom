#include <stdio.h>

// Base class

struct Base;

struct Base_vtable {
  void (*foo)(struct Base*);
};

struct Base {
  struct Base_vtable* vtable;
};

void base_foo(struct Base* self) {
  printf("Base\n");
}

struct Base_vtable base_vtable = {
  &base_foo
};

void base_init(struct Base* self) {
  self->vtable = &base_vtable;
}

void foo(struct Base* self) {
  self->vtable->foo(self);
}

// Derived class

struct Derived {
  struct Base super;
  int id;
};

void derived_foo(struct Derived* self) {
  printf("Derived Id: %d\n", self->id);
}

struct Base_vtable derived_vtable = {
  (void (*)(struct Base *)) &derived_foo
};

void derived_init(struct Derived* self, int id) {
  self->super.vtable = &derived_vtable;
  self->id = id;
}


// Main

int main(void) {
  struct Base b;
  base_init(&b);

  struct Derived d;
  derived_init(&d, 1);
  struct Base* dPtr = (struct Base*) &d;

  foo(&b);
  foo(dPtr);

  return 0;
}
