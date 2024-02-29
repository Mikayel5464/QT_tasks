#include <iostream>
#include <string>
#include <stdexcept>

enum Days 
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

void day_to_string(Days day)
{
    switch (day)
    {
        case Monday:
            std::cout << "Monday";
            break;
        case Tuesday:
            std::cout << "Monday";
            break;
        case Wednesday:
            std::cout << "Wednesday";
            break;
        case Thursday:
            std::cout << "Thursday";
            break;
        case Friday:
            std::cout << "Friday";
            break;
        case Saturday:
            std::cout << "Saturday";
            break;
        case Sunday:
            std::cout << "Sunday";
            break;
        default:
            break;
    }
}

struct Date
{
    int day;
    int month;
    int year;
    Days week_day;

    Date(int d, int m, int y, Days wd) : day(d), month(m), year(y), week_day(wd) {}

    void print()
    {
        day_to_string(week_day);
        std::cout << ", " << month << "." << day << "." << year << std::endl;
    }
};

int main()
{
    Date date(28, 2, 2024, Wednesday);
    
    date.print();

    return 0;
}
