
#include "OfferCourse.h"
#include "ClassTime.h"
using namespace std;

int main() {
    Course<string> myCourse;
    OfferedCourse<string, ClassTime> myOfferedCourse;

    string courseNumber, courseTitle;
    string oCourseNumber, oCourseTitle, instructorName, location, classTime;

    getline(cin, courseNumber);
    getline(cin, courseTitle);

    getline(cin, oCourseNumber);
    getline(cin, oCourseTitle);
    getline(cin, instructorName);
    getline(cin, location);
    getline(cin, classTime);

    ClassTime c(classTime.substr(0,2), classTime.substr(2));
    myCourse.SetCourseNumber(courseNumber);

    myCourse.SetCourseNumber(courseNumber);
    myCourse.SetCourseTitle(courseTitle);
    // myCourse.PrintInfo();
    cout << myCourse << endl;

    myOfferedCourse.SetCourseNumber(oCourseNumber);
    myOfferedCourse.SetCourseTitle(oCourseTitle);
    myOfferedCourse.SetInstructorName(instructorName);
    myOfferedCourse.SetLocation(location);
    myOfferedCourse.SetClassTime(c);
    // myOfferedCourse.PrintInfo();

    cout << myOfferedCourse << endl;

}