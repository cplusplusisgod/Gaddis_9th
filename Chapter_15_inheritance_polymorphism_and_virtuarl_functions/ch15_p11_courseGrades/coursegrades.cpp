#include "coursegrades.h"
#include <iostream>
CourseGrades::CourseGrades() {}

void
CourseGrades::setLab(GradedActivity& grade)
{
  Grades[0] = &grade;
}

void
CourseGrades::setPassFailExam(PassFailExam& exam)
{
  Grades[1] = &exam;
}

void
CourseGrades::setPassFailExam(FinalExam& final_exam)
{
  Grades[2] = &final_exam;
}

void
CourseGrades::print()
{

  std::cout << "Lab Score: " << Grades[0]->getScore()
            << " Grade: " << Grades[0]->getLetterGrade() << std::endl;

  std::cout << "Exam 1 Score: " << Grades[1]->getScore()
            << " Pass/Fail: " << Grades[1]->getLetterGrade() << std::endl;

  std::cout << "Final Exam Score: " << Grades[2]->getScore()
            << " Grade: " << Grades[2]->getLetterGrade() << std::endl;
}
