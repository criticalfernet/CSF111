#include <stdio.h>
typedef struct complex complex;

struct complex {
  double x;
  double y;
};

complex add(complex *c1, complex *c2) {
  double x = c1->x + c2->x;
  double y = c1->y + c2->y;
  complex out = {x, y};
  return out;
}

complex subtract(complex *c1, complex *c2) {
  double x = c1->x - c2->x;
  double y = c1->y - c2->y;
  complex out = {x, y};
  return out;
}

complex multiply(complex *c1, complex *c2) {
  double x = (c1->x * c2->x) - (c1->y * c2->y);
  double y = (c1->x * c2->y) + (c1->y * c2->x);
  complex out = {x, y};
  return out;
}

complex inverse(complex *c){
	double den = (c->x * c->x) + (c->y * c->y);
	double x = c->x / den;
	double y = -1* c->y / den;
  complex out = {x, y};
  return out;
}

complex divide(complex *c1, complex *c2){
	complex c2_inv = inverse(c2);
	return multiply(c1, &c2_inv);
}


int main() { return 0; }






