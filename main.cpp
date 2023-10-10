#include <iostream>
using std::cout;

#include "Functions.h"

int main() {
    int total = add(3, 4);
    cout << "3 + 4 is "<< total << '\n';

    auto totalofthree = add(1.1, 2.2, 3.3);
    cout << "1.1 + 2.2 + 3.3 = "<< totalofthree << '\n';

}
