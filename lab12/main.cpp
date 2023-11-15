#include "student_portal.h"
#include "teacher_portal.h"


int main() {

    // TODO 1: Declare a new CourseDetails and call the overloaded extraction operator for the courseDetails.
    // TODO 2: Declare a new CourseStatistics and insert the necessary details obtained from the courseDetails. I have shown the example for number of student.
    // TODO 3: using for loop, iterate through the numStudents, and determine the totalScore, highestScore and lowestScore. After which you can calculate the averageScore.
    // TODO 4: Call the overloaded insertion operator for the course statistics.

    
    CourseDetails courseDetails;
    // Input course details using overloaded extraction operator
   

    // insert course statistics
    CourseStatistics courseStats;

    courseStats.numStudents = static_cast<int>(courseDetails.students.size());


    // Calculate highest, lowest, and average scores
   

    for (int i = 1; i < courseStats.numStudents; ++i) {
        


    }

    // Calculate the averageScore
    courseStats.averageScore = totalScore / courseStats.numStudents;



    // Output course statistics using overloaded insertion operator
    std::cout << "\nCourse Statistics:\n";




    return 0;
}