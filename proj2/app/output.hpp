#ifndef OUTPUT_HPP
#define OUTPUT_HPP
#include "Students.hpp"
#include "Cutpoints.hpp"



void PrintAllStudents(const unsigned int& studentCount, const Student* students);

void PrintFinalGradeByCutPointSet(const unsigned int& cutPointNum, const CutPointSet& cutPointSet, const unsigned int& studentCount, const Student* students);


#endif