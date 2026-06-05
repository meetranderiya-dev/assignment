#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    string course;

public:
    Student(string n, int a, string c) : Person(n, a) {
        course = c;
    }

    void displayStudent() {
        displayPerson();
        cout << "Course: " << course << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string n, int a, string s) : Person(n, a) {
        subject = s;
    }

    void displayTeacher() {
        displayPerson();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s("Rahul", 20, "Computer Science");
    Teacher t("Mehta", 40, "Mathematics");

    cout << "Student Details:" << endl;
    s.displayStudent();

    cout << "\nTeacher Details:" << endl;
    t.displayTeacher();

    return 0;
}
