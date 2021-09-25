#include <iostream>
#include "input.hpp"
#include "output.hpp"
#include "ArrayBuilder.hpp"
#include "Students.hpp"
#include "Cutpoints.hpp"

int main()
{
    // Grade Artifacts Inputs
    unsigned int weightCount;
    InputCountTo(weightCount);

    unsigned int *gradeFulls = new unsigned int[weightCount];;
    unsigned int *gradeWeights = new unsigned int[weightCount];;
    
    BuildGradedArtifacts(weightCount, gradeFulls, gradeWeights);

    // Students Inputs
    unsigned int studentCount;
    InputCountTo(studentCount);

    Student *students = new Student[studentCount];
    BuildStudents(studentCount, students);

    // Initialize all students' scores
    AllocateStudentsScore(students, studentCount, weightCount);

    // Get all student's scores
    unsigned int studentScoreCount;
    InputCountTo(studentScoreCount);
    BuildScores(studentScoreCount, weightCount, studentCount, students);

    // Calculate and update all students' Total score
    UpdateAllStudentsTotalScore(studentScoreCount, weightCount, gradeWeights, gradeFulls, students);
    
    // Print all students
    PrintAllStudents(studentCount, students);
    
    // Build the Score Cutpoints Sets
    unsigned int cutPointSetCount;
    InputCountTo(cutPointSetCount);
    // BuildCutPointSets(cutPointSetCount, cutPointSets);
    for (unsigned int i = 0; i < cutPointSetCount; i++)
    {
        CutPointSet currentCPS;
        InputCutPointSet(currentCPS);
        PrintFinalGradeByCutPointSet(i+1, currentCPS, studentCount, students);
    }


    // // try to print one student's score
    // unsigned int idToSearch;
    // std::cout << "Please enter the student's id you want to search: ";
    // std::cin >> idToSearch;
    // try{
    //     Student& s1 = GetStudentById(students, studentCount, idToSearch);
    //     s1.name = "Heric";
    
    //     std::cout << "Wow! That's student is found, and we changed his/her name, now is: " << s1.name << std::endl;
    //     std::cout << "And his/her score is: ";
    //     for (unsigned int i = 0; i < weightCount; i++) {
    //         std::cout << s1.scores[i] << " ";
    //     }
    //     std::cout << std::endl;

    // } catch (const char* msg) {
    //     std::cout << msg << std::endl;
    // }
    

    






    // // print out all cut Points
    // std::cout << "Printing out all cutpoint sets: " << std::endl;
    // for (unsigned int i = 0; i < cutPointSetCount; i++)
    // {
    //     std::cout << "CUT POINT SET " << i << ": ";
    //     std::cout << "A: " << cutPointSets[i].A << ", ";
    //     std::cout << "B: " << cutPointSets[i].B << ", ";
    //     std::cout << "C: " << cutPointSets[i].C << ", ";
    //     std::cout << "D: " << cutPointSets[i].D << ". ";
    //     std::cout << std::endl;
    // }
    
    

    delete[] gradeFulls;
    delete[] gradeWeights;
    // !! don't forget to deallocate the scores in students! using DeallocateStudentsScore()
    // and also, deallocate scores of each student's first, then deallocate students.
    DeallocateStudentsScore(students, studentCount);
    delete[] students;


    return 0;
}

