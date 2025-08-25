#ifndef STARTER_H
#define STARTER_H

class Starter_Object {
public:
    Starter_Object();
    ~Starter_Object();

    // setters
    void setval1(int value);
    void setval2(int value);

    // getters
    int val1() const;
    int val2() const;

private:
    int val1_;
    int val2_;
};

#endif
