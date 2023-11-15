#include "../student_portal.h"

int main() {
    // Create a CourseStatistics instance
    CourseStatistics courseStats;
    courseStats.courseName = "C++ Programming";
    courseStats.instructor = "Dr. San";
    courseStats.numStudents = 3;
    courseStats.highestScore = 95.5;
    courseStats.lowestScore = 70.0;
    courseStats.averageScore = 85.2;

    // Display course statistics using overloaded insertion operator
    std::cout << "Course Statistics:\n";
    std::cout << courseStats;

    return 0;
}
