#include <iostream>
#include <limits>
#include "ArrayBuilder.hpp"
#include "input.hpp"
#include "Cutpoints.hpp"
#include "GradeCalculator.hpp"

void BuildGradedArtifacts(const unsigned int count, unsigned int *totals, unsigned int *weights)
{

    // Get Data for totals
    for(unsigned int i = 0; i < count; i++)
    {
        InputDataTo(totals[i]);
    }

    // end of get data line
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Get Data for weights
    for(unsigned int i = 0; i < count; i++)
    {
        InputDataTo(weights[i]);
    }
    
    // end of get data line
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // debug info:
    // std::cout << "Grade Artifacts built successfully! " << std::endl;
    
}

void BuildStudents(const unsigned int count, Student *students)
{
    for(unsigned int i = 0; i < count; i++)
    {
        InputDataTo(students[i].id);
        InputDataTo(students[i].gradeOption);
        InputNameTo(students[i].name);
        // end of get data line
        // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    }
}

void BuildScores(const unsigned int& itemCount, const unsigned int& scoreCount, const unsigned int& studentCount, Student *students)
{
    

    for(unsigned int i = 0; i < itemCount; i++)
    {
        unsigned int currentID;
        InputDataTo(currentID);
        try {
            Student& currentStu = GetStudentById(students, studentCount, currentID);
            
            for (unsigned int j = 0; j < scoreCount; j++)
            {
                InputDataTo(currentStu.scores[j]);
            }
            
        } catch (const char& msg) {
            std::cout << msg << std::endl;
        }
    }
}


void BuildCutPointSets(const unsigned int& cutPointSetCount, CutPointSet* cutPointSets)
{
    for (unsigned int i = 0; i < cutPointSetCount; i++)
    {
        InputDataTo(cutPointSets[i].A);
        InputDataTo(cutPointSets[i].B);
        InputDataTo(cutPointSets[i].C);
        InputDataTo(cutPointSets[i].D);

        // The end of the current Cut Point line!
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

void UpdateAllStudentsTotalScore(const unsigned int& studentCount, 
                                    const unsigned int& weightCount,
                                    const unsigned int* gradeWeights,
                                    const unsigned int* gradeFulls, Student* students)
{
    for (unsigned int i = 0; i < studentCount; i++) {
        CalculateAndUpdateStudentTotalScore(weightCount, gradeWeights, gradeFulls, students[i]);
    }
}