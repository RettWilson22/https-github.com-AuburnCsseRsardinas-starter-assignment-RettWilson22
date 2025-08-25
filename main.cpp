#include <iostream>
#include "starter.h"
using namespace std;

int main() {
    Starter_Object s1, s2, s3;

    s1.setval1(10);
    s1.setval2(20);

    s2.setval1(99);
    s2.setval2(42);

    s3.setval1(123);
    s3.setval2(-5);

    cout << "s1: " << s1.val1() << ", " << s1.val2() << endl;
    cout << "s2: " << s2.val1() << ", " << s2.val2() << endl;
    cout << "s3: " << s3.val1() << ", " << s3.val2() << endl;

    return 0;
}
