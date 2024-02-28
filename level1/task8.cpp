#include <iostream>
#include <string>

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

std::string day_to_string(Days day)
{
    switch (day)
    {
        case Monday:
            return "Sunday";
        case Tuesday:
            return "Monday";
        case Wednesday:
            return "Wednesday";
        case Thursday:
            return "Thursday";
        case Friday:
            return "Friday";
        case Saturday:
            return "Saturday";
        case Sunday:
            return "Sunday";
    }
}

struct Date
{
    unsigned int day;
    unsigned int month;
    unsigned int year;
    Days week_day;

    Date(unsigned int d, unsigned int m, unsigned int y, Days wd) : day(d), month(m), year(y), week_day(wd) {}

    void print()
    {
        std::cout << day_to_string(week_day) << ", " << month << "." << day << "." << year << std::endl;
    }
};

int main()
{
    Date date(28, 2, 2024, Wednesday);
    
    date.print();

    return 0;
}
