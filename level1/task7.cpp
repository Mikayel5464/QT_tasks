#include <iostream>

void swap(int&, int&);
void bubble_sort(int*, size_t);
void selection_sort(int*, size_t);
void arr_print(int*, size_t);

typedef void (*fptr)(int*, size_t);

int main() 
{
    int array[] = {7, -6, 11, 5, 2, -1};
    size_t s = sizeof(array) / sizeof(array[0]);

    short choise = 0;

    do {
        std::cout << "Enter '1' or '2' for choosing sorting algorithm: 1 - selection sort, 2 - bubble sort: ";
        std::cin >> choise;
    } while (choise != 1 && choise != 2);

    fptr sort_func = nullptr;

    switch (choise)
    {
        case 1:
            sort_func = selection_sort;
            break;
        case 2:
            sort_func = bubble_sort;
            break;
        default:
            break;
    }

    std::cout << "Array: ";
    arr_print(array, s);

    if (sort_func)
    {
        sort_func(array, s);
        
        std::cout << "Sorted array: ";
        arr_print(array, s);
    }

    return 0;
}

void swap(int& a, int &b) 
{
    int tmp = a;
    a = b;
    b = tmp;
}

void bubble_sort(int* arr, size_t size) 
{
    for (size_t i = 0; i < size - 1; ++i) 
    {
        for (size_t j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j+ 1]);
            }
        }
    }
}

void selection_sort(int* arr, size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        size_t min_index = i;

        for (size_t j = i + 1; j < size; ++j)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }

        if (min_index != i)
        {
            swap(arr[min_index], arr[i]);
        }
    }
}

void arr_print(int* arr, size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}
