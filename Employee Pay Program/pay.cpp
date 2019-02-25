#include "person.cpp"
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void readData(Person employees[], const int SIZE, ifstream &fileInput);
void writeData(Person employees[], const int SIZE, ofstream &fileOutput);

int main() {
    const int SIZE=20;
    Person employees[SIZE];
    ifstream fileInput;
    readData(employees, SIZE, fileInput);
    ofstream fileOutput;
    writeData(employees, SIZE, fileOutput);

    return 0;
}
void readData(Person employees[], const int SIZE, ifstream &fileInput) {
    string fName, lName;
    float hours, rate;
    fileInput.open("input.txt", ios::in);
    cout<<"Opening the file to be read."<<endl;
    for (int i=0; i<SIZE; i++) {
        if (fileInput.eof()) {
            break;
        }
        else {
            fileInput>>fName>>lName>>hours>>rate;
            employees[i].setFirstName(fName);
            employees[i].setLastName(lName);
            employees[i].setHoursWorked(hours);
            employees[i].setPayRate(rate);
        }
    }
    cout<<"Done reading the file."<<endl;
    fileInput.close();
}
void writeData(Person employees[], const int SIZE, ofstream &fileOutput) {
    fileOutput.open("output.txt", ios::out);
    cout<<"Opening the file to be written."<<endl;
    fileOutput<<employees[0].fullName()<< " "<<fixed<<setprecision(2)<<employees[0].totalPay()<<endl;
    for (int i=1; i<SIZE; i++) {
        if (employees[i].fullName()==employees[i-1].fullName()) {
            break;
        }
        else {
            fileOutput<<employees[i].fullName()<< " "<<fixed<<setprecision(2)<<employees[i].totalPay()<<endl;
        }
    }
    cout<<"Done writing the file."<<endl;
    fileOutput.close();
}
