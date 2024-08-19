// FOR LOOP FOR NUMBERS FROM 0 TO 1000000 THROUGH 100 CODE

#include <iostream>
#include <string>

int main() {

    int number;

    for (int number = 0; number <= 1000000; number += 100) {
        std::cout << number << '\n';
    }

    return 0;
}