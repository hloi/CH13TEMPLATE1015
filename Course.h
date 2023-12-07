//
// Created by hloi on 12/7/2023.
//

#ifndef CH13TEMPLATE1015_COURSE_H
#define CH13TEMPLATE1015_COURSE_H

#include <iostream>
#include <string>

using namespace std;

template<typename T>
class Course {

private:
    T courseNumber;
    string courseTitle;

public:

    Course() {}

    Course(T courseNumber, const string &courseTitle) : courseNumber(courseNumber), courseTitle(courseTitle) {}

    void SetCourseNumber(T userCourseNumber);

    void SetCourseTitle(string userCourseTitle);

    T GetCourseNumber();

    string GetCourseTitle();

    void PrintInfo();

    template<typename K>
    friend ostream &operator<<(ostream &os, const Course<K> &course);
};

template<typename T>
void Course<T>::SetCourseNumber(T userCourseNumber) {
    courseNumber = userCourseNumber;
}

template<typename T>
void Course<T>::SetCourseTitle(string userCourseTitle) {
    courseTitle = userCourseTitle;
}


template<typename T>
T Course<T>::GetCourseNumber() {
    return courseNumber;
}

template<typename T>
string Course<T>::GetCourseTitle() {
    return courseTitle;
}

template<typename T>
void Course<T>::PrintInfo() {
    cout << "Course Information:" << endl;
    cout << "   Course Number: " << courseNumber << endl;
    cout << "   Course Title: " << courseTitle << endl;
}

template<typename K>
ostream &operator<<(ostream &os, const Course<K> &course) {
    os << "courseNumber: " << course.courseNumber << " courseTitle: " << course.courseTitle;
    return os;
}

#endif //CH13TEMPLATE1015_COURSE_H
