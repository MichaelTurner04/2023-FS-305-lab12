#include "../teacher_portal.h"
#include <iostream>
#include <sstream>

int main() {
    // Create a stringstream to simulate user input
    std::istringstream input(
        "Test Course\n"
        "Dr. Test\n"
        "3\n"
        "123\n"
        "ABC Engineering\n"
        "85.5\n"
        "456\n" 
        "XYZ Science\n"
        "90.0\n"
        "789\n"
        "LMN Arts\n"
        "75.3\n"
    );

    // Create a CourseDetails object and use the extraction operator
    CourseDetails course;
    std::getline(input >> std::ws, course.courseName); // Read the entire line
    std::getline(input >> std::ws, course.instructor); // Read the entire line

    int numStudents;
    input >> numStudents;
    course.students.resize(numStudents);
    course.scores.resize(numStudents);

    for (int i = 0; i < numStudents; ++i) {
        // Read student information line by line
        std::getline(input >> std::ws, course.students[i].studentID);
        std::getline(input >> std::ws, course.students[i].courseMajor);
        input >> course.scores[i];
    }

    // Display the extracted CourseDetails
    std::cout << "Course Name: " << course.courseName << "\n";
    std::cout << "Instructor: " << course.instructor << "\n";
    std::cout << "Number of Students: " << course.students.size() << "\n";

    // Display student details
    for (size_t i = 0; i < course.students.size(); ++i) {
        const Student& student = course.students[i];
        std::cout << "Student ID: " << student.studentID << "\n";
        std::cout << "Course Major: " << student.courseMajor << "\n";
    }

    // Display scores
    for (size_t i = 0; i < course.scores.size(); ++i) {
        double score = course.scores[i];
        std::cout << "Score: " << score << "\n";
    }

    return 0;
}
