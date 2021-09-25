#ifndef STUDENTS_HPP
#define STUDENTS_HPP
#include <string>

struct Student{
    unsigned int id;
    char gradeOption;
    double totalScore = 0.0;
    std::string name;
    unsigned int *scores = nullptr;
};

Student& GetStudentById(Student *stu, const unsigned int& count, const unsigned int& studentID); // Please catch exception of const char&

void AllocateStudentsScore(Student* stu, const unsigned int& studentCount, const unsigned int& scoreCount);

void DeallocateStudentsScore(Student* stu, const unsigned int& studentCount);

#endif