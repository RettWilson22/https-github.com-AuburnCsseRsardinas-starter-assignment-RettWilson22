#include "starter.h"

Starter_Object::Starter_Object()
    : val1_(0), val2_(0) {}

Starter_Object::~Starter_Object() {
    // free heap stuff here if you ever add it
}

void Starter_Object::setval1(int value) { val1_ = value; }
void Starter_Object::setval2(int value) { val2_ = value; }

int Starter_Object::val1() const { return val1_; }
int Starter_Object::val2() const { return val2_; }
