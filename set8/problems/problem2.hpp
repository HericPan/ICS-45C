#ifndef PROBLEM2_HPP
#define PROBLEM2_HPP

#include <functional>
#include <fstream>

#include "FileException.hpp"


template <typename LineType>
class TextLineReader
{
public:
    using LineParser = std::function<LineType(const std::string&)>;

public:
    TextLineReader(const std::string& filePath, LineParser lineParser)
        : fileptr(nullptr), func(lineParser)
    {
        try 
        {
            fileptr = new std::fstream;
            fileptr->open(filePath);
            if (!fileptr->is_open())
                throw;
            
        } catch (...) {
            fileptr -> close();
            delete fileptr;
            throw;
        }
    }

    ~TextLineReader() {
        fileptr->close();
        delete fileptr;
    }
    
    TextLineReader(const TextLineReader& other) = delete;
    TextLineReader& operator=(const TextLineReader& other) = delete;

    bool hasNextLine() const
    {
        return fileptr->eof() ? false : true;
    }
    LineType nextLine()
    {
        if (!hasNextLine()){
            throw FileException{"no more lines but still request new line!"};
        }
        std::string line;
        std::getline(*fileptr, line);
        return func(line);
    }

private:   
    std::fstream *fileptr;
    LineParser func;
};




#endif

