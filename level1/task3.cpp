#include <iostream>

void number_check(int);
void grade_assign(int);
void one_to_ten();

int main() {
    int n = 0;

    std::cout << "Enter the number: ";
    std::cin >> n;

    number_check(n);
    grade_assign(n);
    one_to_ten();

    return 0;
}

void number_check(int num) {
    if (num > 0) {
        std::cout << "Inputed number is positive" << std::endl;
    }
    else if (num < 0) {
        std::cout << "Inputed number is negative" << std::endl;
    }
    else {
        std::cout << "Inputed number is 0" << std::endl;
    }

}

void grade_assign(int num) {
    switch (num) {
        case 90 ... 100:
            std::cout << "Your grade: A" << std::endl;
            break;
        case 80 ... 89:
            std::cout << "Your grade: B" << std::endl;
            break;
        case 70 ... 79:
            std::cout << "Your grade: C" << std::endl;
            break;
        case 60 ... 69:
            std::cout << "Your grade: D" << std::endl;
            break;
        case 50 ... 59:
            std::cout << "Your grade: E" << std::endl;
            break;
        case 40 ... 49:
            std::cout << "Your grade: F" << std::endl;
            break;
        default:
            break;
    }
}

void one_to_ten() {
    for (int i = 1; i <= 10; ++i) {
        std::cout << i << " ";
    }

    std::cout << std::endl;
}
