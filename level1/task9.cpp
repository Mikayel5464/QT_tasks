#include <iostream>

typedef void (*fptr)(int*, size_t);

enum SortingStrategy
{
    SELECTION_SORT,
    BUBBLE_SORT
};

struct SortingOption
{
    SortingStrategy val;
    fptr sorting;
};

void swap(int&, int&);
void bubble_sort(int*, size_t);
void selection_sort(int*, size_t);
void algorithm_choosing(SortingOption*, int*, size_t);

int main()
{
    int array[] = {7, -6, 11, 5, 2, -1};
    size_t s = sizeof(array) / sizeof(array[0]);

    std::cout << "Array: " << std::endl;
    for (size_t i = 0; i < s; ++i)
    {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;

    SortingOption option[] = {{SELECTION_SORT, selection_sort}, {BUBBLE_SORT, bubble_sort}};

    algorithm_choosing(option, array, s);

    return 0;
}

void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void bubble_sort(int* arr, size_t size) 
{
    std::cout << std::endl << "Using bubble sort algorithm:" << std::endl;

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

    for (size_t i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

void selection_sort(int* arr, size_t size)
{
    std::cout << std::endl << "Using selection sort algorithm:" << std::endl;

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

    for (size_t i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

void algorithm_choosing(SortingOption* option, int* arr, size_t size)
{
    int x = 0;

    std::cout << "Select the sorting option:" << std::endl 
                << "'0' for selection sort" << std::endl
                << "'1' for bubble sort" << std::endl;

    std::cin >> x;

    switch (x)
    {
        case 0:
            option[0].sorting(arr, size);
            break;
        case 1:
            option[1].sorting(arr, size);
            break;
        default:
            break;
    }
}
