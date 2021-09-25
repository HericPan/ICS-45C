#ifndef ARRAY_BUILDER_HPP
#define ARRAY_BUILDER_HPP
#include "Students.hpp"
#include "Cutpoints.hpp"


void BuildGradedArtifacts(const unsigned int count, unsigned int *totals, unsigned int *weights); 

void BuildStudents(const unsigned int count, Student *students); 

void BuildScores(const unsigned int& scoreCount, const unsigned int& weightCount, const unsigned int& studentCount, Student *students);

void BuildCutPointSets(const unsigned int& cutPointSetCount, CutPointSet* cutPointSets);

void UpdateAllStudentsTotalScore(const unsigned int& studentCount, 
                                     const unsigned int& weightCount,
                                     const unsigned int* gradeWeights,
                                     const unsigned int* gradeFulls,
                                     Student* students);

#endif