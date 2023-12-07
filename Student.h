//
// Created by hloi on 12/7/2023.
//

#ifndef CH13TEMPLATE1015_STUDENT_H
#define CH13TEMPLATE1015_STUDENT_H
#include <vector>
#include <string>
#include <ostream>

using std::vector;
using std::string;

#include "OfferCourse.h"

template<typename T, typename S, typename R>
class Student {
private:
    string name;
    R studentNumber;
    vector<OfferedCourse<T,S>> oc;

public:
    // constructors

    Student() {}

    Student(const string &name, R studentNumber) : name(name), studentNumber(studentNumber) {}

    void addCourse(OfferedCourse<T,S> oc);
    void deleteCourse(OfferedCourse<T,S> oc);
    void printCourses();

    friend ostream &operator<<(ostream &os, const Student &student) {
       // student name
       // student id
       // list of offerred course.
        return os;
    }

};

template<typename T, typename S, typename R>
void Student<T, S, R>::addCourse(OfferedCourse<T, S> oc) {

}


#endif //CH13TEMPLATE1015_STUDENT_H
