#include "teacher_portal.h"

// TODO 1 Overload extraction operator for CourseDetails
// In this, you can ask for the nuumber of students, then iterate based on that to obtain the student detail. View the for loop for hints.


std::istream& operator>>(std::istream& in, CourseDetails& course) {
 

    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Enter student ID for student " << i + 1 << ": ";
        in >> course.students[i].studentID;

       
       


    }

    return in;
}
