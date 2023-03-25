#include <bits/stdc++.h>
using namespace std;
class Student{
private:
    int id;
    string name;
    int age;
    string phoneNumber;
    double gpa;
public:
    int getId() const {
        return id;
    }

    void setId(int id) {
        Student::id = id;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Student::name = name;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }

    const string &getPhoneNumber() const {
        return phoneNumber;
    }

    void setPhoneNumber(const string &phoneNumber) {
        this->phoneNumber = phoneNumber;
    }

    double getGpa() const {
        return gpa;
    }

    void setGpa(double gpa) {
        Student::gpa = gpa;
    }

};