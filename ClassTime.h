//
// Created by hloi on 12/7/2023.
//

#ifndef CH13TEMPLATE1015_CLASSTIME_H
#define CH13TEMPLATE1015_CLASSTIME_H
#include <string>
#include <ostream>

using std::string;

class ClassTime {
private:
    string days;
    string time;
public:
    ClassTime();

    ClassTime(const string &days, const string &time);

    const string &getDays() const;

    void setDays(const string &days);

    const string &getTime() const;

    void setTime(const string &time);

    friend std::ostream &operator<<(std::ostream &os, const ClassTime &time);

};


#endif //CH13TEMPLATE1015_CLASSTIME_H
