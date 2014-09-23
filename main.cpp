#include <iostream>
#include "Poco/String.h"
#include "Poco/Format.h"
#include "Poco/Random.h"

using namespace Poco;

int main() {
    using namespace std;
    std::string hello("  Hello, world!  ");
    cout << hello << endl;
    std::string s1(trimLeft(hello));
    cout << s1 << endl;
    int n = 42;
    string s;
    format(s, "41 + 1 is %d",n+1);
    cout << s << endl;
    Random rnd;
    rnd.seed();
    cout << rnd.next() << endl;
    return 0;
}
