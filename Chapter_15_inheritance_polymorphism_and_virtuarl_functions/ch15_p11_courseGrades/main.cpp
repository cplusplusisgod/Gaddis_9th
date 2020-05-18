#include "FinalExam.h"
#include "PassFailExam.h"
#include "coursegrades.h"
#include <iostream>
using namespace std;

int
main()
{

  int problems, missed;
  double score, minPass;
  CourseGrades first_class;
  GradedActivity lab;
  PassFailExam exam;
  FinalExam final;

  std::cout << "What was the Lab Score?";
  std::cin >> score;
  lab.setScore(score);
  first_class.setLab(lab);

  std::cout << "For Exam 1:\n How many problems: ";
  std::cin >> problems;
  std::cout << "Out of " << problems << " How many were incorrect: ";
  std::cin >> missed;
  std::cout << "What is the minimum percent to pass: ";
  std::cin >> minPass;
  exam.setMinPassingScore(minPass);
  exam.set(problems, missed);
  first_class.setPassFailExam(exam);

  std::cout << "For the Final:\n How many problems: ";
  std::cin >> problems;
  std::cout << "Out of " << problems << " HOw many were incorrect: ";
  std::cin >> missed;
  final.set(problems, missed);
  first_class.setPassFailExam(final);

  first_class.print();

  return 0;
}
