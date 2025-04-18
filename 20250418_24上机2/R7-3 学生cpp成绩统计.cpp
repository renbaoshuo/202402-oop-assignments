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

    float getGrade() {
        return cpp_grade;
    }

    void print() {
        cout << ID << " " << name << " " << fixed << setprecision(1) << cpp_grade << endl;
    }
};

class Teacher : public Person {
  private:
    int ID;
    Student stu[100];
    int count;
    float cpp_average;

  public:
    Teacher(string t_name, int t_age, int t_ID) : Person(t_name, t_age), ID(t_ID), count(0), cpp_average(0) {}

    void Add(Student &stu1) {
        if (count < 100) {
            stu[count++] = stu1;
        } else {
            throw runtime_error("Student array is full");
        }
    }

    void average() {
        float total = 0;
        for (int i = 0; i < count; i++) {
            total += stu[i].getGrade();
        }
        cpp_average = count > 0 ? total / count : 0;
    }

    void print() {
        cout << ID << " " << name << " " << count << " " << fixed << setprecision(1) << cpp_average << endl;

        for (int i = 0; i < count; i++) {
            stu[i].print();
        }
    }
};

int main() {
    string teacher_name;
    int teacher_ID, teacher_age;
    cin >> teacher_name >> teacher_ID >> teacher_age;

    Teacher teacher(teacher_name, teacher_age, teacher_ID);
    string student_name;

    while (cin >> student_name, student_name != "0") {
        int student_ID, student_age;
        float cpp_score, cpp_count;
        cin >> student_ID >> student_age >> cpp_score >> cpp_count;
        Student student(student_name, student_age, student_ID, cpp_score, cpp_count);
        teacher.Add(student);
    }

    teacher.average();
    teacher.print();

    return 0;
}
