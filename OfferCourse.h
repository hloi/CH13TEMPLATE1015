//
// Created by hloi on 12/7/2023.
//

#ifndef CH13TEMPLATE1015_OFFERCOURSE_H
#define CH13TEMPLATE1015_OFFERCOURSE_H


#include <ostream>
#include "Course.h"

template<typename T, typename S>
class OfferedCourse : public Course<T> {

private:
    string instructorName, location;
    S classTime;

public:
    OfferedCourse() {}

    OfferedCourse(T courseNumber, const string &courseTitle, const string &instructorName, const string &location,
                  const string &classTime) : Course<T>(courseNumber, courseTitle), instructorName(instructorName),
                                             location(location), classTime(classTime) {}

    void SetInstructorName(string userInstructorName);

    void SetLocation(string userLocation);

    void SetClassTime(S userClassTime);

    string GetInstructorName();

    string GetLocation();

    string GetClassTime();

    template<typename K,typename M>
    friend ostream &operator<<(ostream &os, const OfferedCourse<K, M> &course);
};

template<typename T,typename S>
void OfferedCourse<T,S>::SetInstructorName(string userInstructorName) {
    instructorName = userInstructorName;
}
template<typename T,typename S>
void OfferedCourse<T,S>::SetLocation(string userLocation) {
    location = userLocation;
}
template<typename T,typename S>
void OfferedCourse<T,S>::SetClassTime(S userClassTime) {
    classTime = userClassTime;
}

template<typename T,typename S>
string OfferedCourse<T,S>::GetInstructorName() {
    return instructorName;
}

template<typename T,typename S>
string OfferedCourse<T,S>::GetLocation() {
    return location;
}

template<typename T,typename S>
string OfferedCourse<T,S>::GetClassTime() {
    return classTime;
}

template<typename K,typename M>
ostream &operator<<(ostream &os, const OfferedCourse<K,M> &course) {
    os << static_cast<const Course<K> &>(course) << " instructorName: " << course.instructorName << " location: "
       << course.location << " classTime: " << course.classTime;
    return os;
}


#endif //CH13TEMPLATE1015_OFFERCOURSE_H
