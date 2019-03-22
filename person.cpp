//Adam Laviguer
//Section 02
#include "person.h"
Person::Person(string firstName, string lastName, float payRate, float hoursWorked) {
    setLastName(lastName);
    setFirstName(firstName);
    setPayRate(payRate);
    setHoursWorked(hoursWorked);
    
}
void Person::setLastName(string lName) {
    lastName=lName;
}
string Person::getLastName() {
    return lastName;
}
void Person::setFirstName(string fName) {
    firstName=fName;
}
string Person::getFirstName() {
    return firstName;
}
void Person::setPayRate(float rate) {
    payRate=rate;
}
float Person::getPayRate() {
    return payRate;
}
void Person::setHoursWorked(float hours) {
    hoursWorked=hours;
}
float Person::getHoursWorked() {
    return hoursWorked;
}
float Person::totalPay() {
    float totalPay=getHoursWorked()*getPayRate();
    return totalPay;
}
string Person::fullName() {
    string fullName= getFirstName() + " " + getLastName();
    return fullName;
}
