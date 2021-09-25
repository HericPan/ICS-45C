#include "GradeCalculator.hpp"
#include <string>

namespace{
    double TotalScoreCalculator(const unsigned int& weightCount, const unsigned int* gradeWeights, const unsigned int* gradeFulls, const Student& student)
    {
        double totalScore = 0.0;
        for (unsigned int i = 0; i < weightCount; i++)
        {
            totalScore += (double)student.scores[i] / gradeFulls[i] * gradeWeights[i];
        }

        return totalScore;
    }
}

void CalculateAndUpdateStudentTotalScore(const unsigned int& weightCount, const unsigned int* gradeWeights, const unsigned int* gradeFulls, Student& student)
{
    student.totalScore = TotalScoreCalculator(weightCount, gradeWeights, gradeFulls, student);
    
}

std::string GetFinalGradeByCutPointSet(const CutPointSet& cutPointSet, const Student& student)
{
    if (student.gradeOption == 'P') // PNP Option
    {
        return (student.totalScore >= cutPointSet.C)? "P" : "NP";
    } else  // Grade Option
    {
        if (student.totalScore >= cutPointSet.A)
        {
            return "A";

        } else if (student.totalScore >= cutPointSet.B)
        {
            return "B";

        } else if (student.totalScore >= cutPointSet.C)
        {
            return "C";

        } else if (student.totalScore >= cutPointSet.D)
        {
            return "D";

        } else {

            return "F";

        }
    }
}
