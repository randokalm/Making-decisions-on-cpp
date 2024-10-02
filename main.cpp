#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number (1 - 10): ";
    std::cin >> number;

    if (number < 1 || number > 10) {
        std::cout << "Enter a number in the range 1 through 10." << std::endl;
        return 0;  
    }

    switch(number) {
        case 1:
            std::cout << "The Roman numeral version of 1 is I." << std::endl;
            break;
        case 2:
            std::cout << "The Roman numeral version of 2 is II." << std::endl;
            break;
        case 3:
            std::cout << "The Roman numeral version of 3 is III." << std::endl;
            break;
        case 4:
            std::cout << "The Roman numeral version of 4 is IV." << std::endl;
            break;
        case 5:
            std::cout << "The Roman numeral version of 5 is V." << std::endl;
            break;
        case 6:
            std::cout << "The Roman numeral version of 6 is VI." << std::endl;
            break;
        case 7:
            std::cout << "The Roman numeral version of 7 is VII." << std::endl;
            break;
        case 8:
            std::cout << "The Roman numeral version of 8 is VIII." << std::endl;
            break;
        case 9:
            std::cout << "The Roman numeral version of 9 is IX." << std::endl;
            break;
        case 10:
            std::cout << "The Roman numeral version of 10 is X." << std::endl;
            break;
    }

    return 0;
}
