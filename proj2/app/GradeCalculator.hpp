#ifndef GRADECALCULATOR_HPP
#define GRADECALCULATOR_HPP
#include <string>
#include "Students.hpp"
#include "Cutpoints.hpp"


void CalculateAndUpdateStudentTotalScore(const unsigned int& weightCount, const unsigned int* gradeWeights, const unsigned int* gradeFulls, Student& student);

std::string GetFinalGradeByCutPointSet(const CutPointSet& cutPointSet, const Student& student);

#endif