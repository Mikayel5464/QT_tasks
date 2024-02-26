#include <iostream>
#include <string>

int maximum_value(int*, size_t);
int minimum_value(int*, size_t);
size_t average_value(int*, size_t);
std::string concatenation(std::string, std::string);
size_t length(std::string);

int main() {
    int array[] = {14, -3, 5, 22, -11, 9};
    size_t s = sizeof(array) / sizeof(array[0]);

    std::cout << "Maximum value: " << maximum_value(array, s) << std::endl;
    std::cout << "Minimum value: " << minimum_value(array, s) << std::endl;
    std::cout << "Average value: " << average_value(array, s) << std::endl;

    std::string str1 = "abcd";
    std::string str2 = "efghijk";

    std::cout << "Concatrnation: " << concatenation(str1, str2) << std::endl;
    std::cout << "Length of string: " << length(str2) << std::endl;

    return 0;
}

int maximum_value(int* arr, size_t size) {
    size_t max_index = 0;

    for (size_t i = 1; i < size; ++i) {
        if (arr[max_index] < arr[i]) {
            max_index = i;
        }
    }

    return arr[max_index];
}

int minimum_value(int* arr, size_t size) {
    size_t min_index = 0;

    for (size_t i = 1; i < size; ++i) {
        if (arr[min_index] > arr[i]) {
            min_index = i;
        }
    }

    return arr[min_index];
}

size_t average_value(int* arr, size_t size) {
    size_t sum = 0;
    
    for(size_t i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return sum / size;
}

std::string concatenation(std::string str1, std::string str2) {
    return str1 + str2;
}

size_t length(std::string str) {
    size_t count = 0;

    for (size_t i = 0; str[i] != '\0'; ++i) {
        ++count;
    }

    return count;
}
