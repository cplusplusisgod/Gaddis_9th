#ifndef COURSEGRADES_H
#define COURSEGRADES_H
//#include "GradedActivity.h"
#include "FinalExam.h"
#include "PassFailExam.h"
class CourseGrades : public GradedActivity
{
protected:
  GradedActivity* Grades[3];

public:
  CourseGrades();
  void setLab(GradedActivity&);
  void setPassFailExam(PassFailExam&);
  void setPassFailExam(FinalExam&);
  void print();
};

#endif // COURSEGRADES_H
