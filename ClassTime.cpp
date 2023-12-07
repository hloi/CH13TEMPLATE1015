//
// Created by hloi on 12/7/2023.
//

#include "ClassTime.h"

const string &ClassTime::getDays() const {
    return days;
}

void ClassTime::setDays(const string &days) {
    ClassTime::days = days;
}

const string &ClassTime::getTime() const {
    return time;
}

void ClassTime::setTime(const string &time) {
    ClassTime::time = time;
}

ClassTime::ClassTime() {}

ClassTime::ClassTime(const string &days, const string &time) : days(days), time(time) {}

std::ostream &operator<<(std::ostream &os, const ClassTime &time) {
    os << "days: " << time.days << " time: " << time.time;
    return os;
}


