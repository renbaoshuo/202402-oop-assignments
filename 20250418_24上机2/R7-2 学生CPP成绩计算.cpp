#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Person {
  protected:
    string name;
    int age;

  public:
    Person() : name(""), age(0) {}

    Person(string p_name, int p_age) : name(p_name), age(p_age) {}

    void display() {
        cout << name << ":" << age << endl;
    }
};

class Student : public Person {
  private:
    int ID;
    float cpp_score, cpp_count, cpp_grade;

    void calculateGrade() {
        cpp_grade = cpp_score * 0.9 + cpp_count * 2;
    }

  public:
    Student() : Person(), ID(0), cpp_score(0), cpp_count(0), cpp_grade(0) {}

    Student(string p_name, int p_age, int p_ID, float p_cpp_score, float p_cpp_count)
        : Person(p_name, p_age), ID(p_ID), cpp_score(p_cpp_score), cpp_count(p_cpp_count) {
        calculateGrade();
    }

    void print() {
        cout << ID << " " << name << " " << fixed << setprecision(1) << cpp_grade << endl;
    }
};

int main() {
    string name;

    while (cin >> name, name != "0") {
        int ID, age;
        float cpp_score, cpp_count;

        cin >> ID >> age >> cpp_score >> cpp_count;

        Student student(name, age, ID, cpp_score, cpp_count);

        student.print();
    }

    return 0;
}
