#include <bits/stdc++.h>
using namespace std;
class Teacher{
private:
    int id;
    string name;
    int age;
    string phoneNumber;
    double salary;
public:
    int getId() const {
        return id;
    }

    void setId(int id) {
        Teacher::id = id;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Teacher::name = name;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Teacher::age = age;
    }

    const string &getPhoneNumber() const {
        return phoneNumber;
    }

    void setPhoneNumber(const string &phoneNumber) {
        Teacher::phoneNumber = phoneNumber;
    }

    double getSalary() const {
        return salary;
    }

    void setSalary(double salary) {
        Teacher::salary = salary;
    }

};
