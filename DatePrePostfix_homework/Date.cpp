#include <iostream>
#include "Date.h"


const int Date::days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


Date::Date(int m, int d, int y) {
    setDate(m, d, y);
} 


void Date::setDate(int mm, int dd, int yy) {
    month = (mm >= 1 && mm <= 12) ? mm : 1;
    year = (yy >= 1900 && yy <= 2100) ? yy : 1900;

    
    if (month == 2 && leapYear(year))
        day = (dd >= 1 && dd <= 29) ? dd : 1;
    else
        day = (dd >= 1 && dd <= days[month]) ? dd : 1;
} 


Date& Date::operator++() {
    helpIncrement(); // increment date
    return *this; // reference return to create a lvalue
} 


Date Date::operator++(int) {
    Date temp = *this; // hold current state of object
    helpIncrement();

    // return unincremented, saved, temporary object
    return temp; // value return; not a reference return
} // end function operator++

// overloaded prefix decrement operator 
Date& Date::operator--() {
    helpDecrement(); // decrement date
    return *this; // reference return to create a value
} // end function operator--

// overloaded postfix decrement operator; note that the  
// dummy integer parameter does not have a parameter name
Date Date::operator--(int) {
    Date temp = *this; // hold current state of object
    helpDecrement();

    // return decremented, saved, temporary object
    return temp; // value return; not a reference return
} // end function operator--

// add specified number of days to date
const Date& Date::operator+=(int additionalDays) {
    for (int i = 0; i < additionalDays; i++)
        helpIncrement();

    return *this; // enables cascading
} // end function operator+=

// subtract specified number of days to date
const Date& Date::operator-=(int subtractionalDays) {
    for (int i = 0; i < subtractionalDays; ++i) {
        helpDecrement();
    }

    return *this; 
} 


bool Date::leapYear(int testYear) const {
    if (testYear % 400 == 0 ||
        (testYear % 100 != 0 && testYear % 4 == 0))
        return true; 
    else
        return false; 
}


bool Date::endOfMonth(int testDay) const {
    if (month == 2 && leapYear(year))
        return testDay == 29; 
    else
        return testDay == days[month];
}


void Date::helpIncrement() {
   
    if (!endOfMonth(day))
        day++; 
    else
        if (month < 12) 
        {
            month++;
            day = 1;
        } 
        else 
        {
            year++; 
            month = 1; 
            day = 1; 
        } 
} 

void Date::helpDecrement() {
    if (day != 1) { 
        day--; 
    }
    else {
        if (month > 1) { 
            month--;
        }
        else {
            year--;
            month = 12; 
        }

        day = days[month];

       
        if (month == 2) {
            if (leapYear(year)) { 
                day = 29; 
            }
        }
    }
}


ostream& operator<<(ostream& output, const Date& d) {
    static std::string monthName[13] = { "", "January", "February",
       "March", "April", "May", "June", "July", "August",
       "September", "October", "November", "December" };
   
    output << d.day << ' ' << monthName[d.month] << ", " << d.year;
    return output; 
} 