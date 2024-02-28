#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>

void file_reading(std::string);
void file_writing(std::string);

int main()
{
    std::string names = "names.txt";

    file_writing(names);
    file_reading(names);

    return 0;
}

void file_writing(std::string path)
{
    std::string str;
 
    std::cout << "Calling function for writing in file!" << std::endl;
    
    std::cout << "Enter the names: ";
    std::getline(std::cin, str);

    std::ofstream fout;
    fout.open(path);

    if (!fout.is_open()) {
        throw std::runtime_error("Can't open the file!");
    }
    else {
        fout << str;
    }

    fout.close();
}

void file_reading(std::string path)
{
    std::cout << "Calling function for reading file!" << std::endl;
    
    std::ifstream fin;
    fin.open(path);

    if (!fin.is_open()) {
        throw std::runtime_error("Can't open the file!");
    }
    else {
        std::string str;

        while (!fin.eof()) {
            str = "";
            std::getline(fin, str);
            std::cout << str << std::endl;
        }
    }

    fin.close();
}
