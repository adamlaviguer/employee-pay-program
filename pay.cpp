//Adam Laviguer
//Section 02
#include "person.cpp"
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

void readData(vector<Person> &employees, ifstream &fileInput);
void writeData(vector<Person> &employees, ofstream &fileOutput);

int main() {
    vector<Person> employees;
    ifstream fileInput;
    readData(employees, fileInput);
    ofstream fileOutput;
    writeData(employees, fileOutput);

    return 0;
}
void readData(vector<Person> &employees, ifstream &fileInput) {
    string fName, lName;
    float hours, rate;
    fileInput.open("input.txt", ios::in);
    cout<<"Opening the file to be read."<<endl;
    fileInput>>fName>>lName>>hours>>rate;
    employees.emplace_back(fName, lName, hours, rate);
    for (int i=0; i<employees.size(); i++) {
        if (fileInput.eof()) {
            break;
        }
        else {
            fileInput>>fName>>lName>>hours>>rate;
            employees.emplace_back(fName, lName, hours, rate);
        }
    }
    cout<<"Done reading the file."<<endl;
    fileInput.close();
}
void writeData(vector<Person> &employees, ofstream &fileOutput) {
    fileOutput.open("output.txt", ios::out);
    cout<<"Opening the file to be written."<<endl;
    fileOutput<<employees.at(0).fullName()<< " "<<fixed<<setprecision(2)<<employees.at(0).totalPay()<<endl;
    for (int i=1; i<employees.size()-1; i++) {
        if (employees.at(i).fullName()==employees.at(i-1).fullName()) {
            break;
        }
        else {
            fileOutput<<employees.at(i).fullName()<< " "<<fixed<<setprecision(2)<<employees.at(i).totalPay()<<endl;
        }
    }
    cout<<"Done writing the file."<<endl;
    fileOutput.close();
}
