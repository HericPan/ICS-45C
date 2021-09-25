#include <iostream>
#include "output.hpp"
#include "GradeCalculator.hpp"

namespace
{
    void PrintStudentIdAndName(const Student& student)
    {
        std::cout << student.id << " ";
        std::cout << student.name << " ";
    }
}

void PrintAllStudents(const unsigned int& studentCount, const Student* students)
{
    std::cout << "TOTAL SCORES" << std::endl;
    for (unsigned int i = 0; i < studentCount; i++)
    {
        
        PrintStudentIdAndName(students[i]);
        std::cout << students[i].totalScore << std::endl;
    }
}

void PrintFinalGradeByCutPointSet(const unsigned int& cutPointNum, const CutPointSet& cutPointSet, const unsigned int& studentCount, const Student* students)
{
    std::cout << "CUTPOINT SET " << cutPointNum << std::endl;
    for (unsigned int i = 0; i < studentCount; i++)
    {
        PrintStudentIdAndName(students[i]);
        std::cout << GetFinalGradeByCutPointSet(cutPointSet, students[i]) << std::endl;
    }
}
