// USAGE OF CONTINUE COMMAND

#include <iostream>
#include <string>

int main() {

    int number;

    for (int number = 0; number <= 100; number++) {
        if (number == 50) {
            continue;
        }
        std::cout << number << '\n';
    }

    return 0;
}