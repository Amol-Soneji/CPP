#include <cassert>
#include <stdexcept>
#include <string>

// TODO: Define "Student" class
class Student {
 public:
  // constructor
    Student(std::string name, int grade, float gpa)
    {
        Name(name);
        Grade(grade);
        GPA(gpa);
    }
  // accessors
    std::string Name() const {return name_;}
    int Grade() const {return grade_;}
    float GPA() const {return gpa_;}
  // mutators
    void Name(std::string name)
    {
        name_ = name;
    }
    void Grade(int grade)
    {
        if((grade < 0) || (grade > 12))
            throw std::invalid_argument("Invalid grade.  ");
        grade_ = grade;
    }
    void GPA(float gpa)
    {
        if((gpa < 0.0) || (gpa > 4.0))
            throw std::invalid_argument("Invalid GPA.  ");
        gpa_ = gpa;
    }

 private:
  // name
    std::string name_;
  // grade
    int grade_;
  // GPA
    float gpa_;
};

// TODO: Test
int main() {
    Student student("Jhon Doe", 7, 4.0);
    assert(student.Name() == "Jhon Doe");
    assert(student.Grade() == 7);
    assert(student.GPA() == 4.0);
    
    bool caught = false;
    try
    {
        Student exceptionTest("Exception Test", 18, 20.0);
    }
    catch(...)
    {
        caught = true;
    }
    assert(caught);
}
