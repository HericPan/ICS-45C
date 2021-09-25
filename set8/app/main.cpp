#include <charconv>
#include <iostream>
#include <string>
#include "FileException.hpp"
#include "problem2.hpp"


int parseIntLine(const std::string& line)
{
    int value;

    const char* begin = line.data();
    const char* end = line.data() + line.size();

    auto result = std::from_chars(begin, end, value);

    if (result.ptr != end || result.ec != std::errc{})
    {
        throw FileException{"format error: every line must contain only an integer"};
    }

    return value;
}


int main()
{
    std::string filePath = "test.txt";
    std::getline(std::cin, filePath);

    try
    {
        TextLineReader<int> reader{filePath, parseIntLine};

        while (reader.hasNextLine())
        {
            int value = reader.nextLine();
            std::cout << (value * value) << std::endl;
        }

        // int value2 = reader.nextLine();
        // std::cout << value2 << std::endl;
    }
    catch (FileException& e)
    {
        std::cout << "FileException: " << e.what() << std::endl;
    }

    return 0;
}

