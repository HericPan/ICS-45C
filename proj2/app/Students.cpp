#include "Students.hpp"

Student& GetStudentById(Student *stu, const unsigned int& count, const unsigned int& studentID)
{
    for (unsigned int i = 0; i < count; i++)
    {
        if (studentID == stu[i].id)
        {
            return stu[i];
        }
    }
    throw "Student Not Found! Please make sure the ID is valid. ";
}

void AllocateStudentsScore(Student* stu, const unsigned int& studentCount, const unsigned int& scoreCount)
{
    // First initialize and  all stu's score to 0s
    for (unsigned int i = 0; i < studentCount; i++)
    {
        stu[i].scores = new unsigned int[scoreCount];
    }
}

void DeallocateStudentsScore(Student* stu, const unsigned int& studentCount)
{
    for (unsigned int i = 0; i < studentCount; i++)
    {
        delete[] stu[i].scores;
    }
}
