#include <iostream>
#include <string>
#include <vector>

using namespace std;

class student {
  private:
    string name;
    int chinese, math, english, comprehensive;

  public:
    student(string n, int c, int m, int e, int comp)
        : name(n), chinese(c), math(m), english(e), comprehensive(comp) {}

    int totalScore() const {
        return chinese + math + english + comprehensive;
    }

    friend student top(const student* p, int count);
};

student top(const student* p, int count) {
    const student* topStudent = &p[0];

    for (int i = 1; i < count; ++i) {
        if (p[i].totalScore() > topStudent->totalScore()) {
            topStudent = &p[i];
        }
    }

    return *topStudent;
}

int main() {
    string name;
    vector<student> students;

    while (cin >> name, name != "0") {
        int chinese, math, english, comprehensive;

        cin >> chinese >> math >> english >> comprehensive;

        students.emplace_back(name, chinese, math, english, comprehensive);
    }

    if (!students.empty()) {
        student topStudent = top(students.data(), students.size());

        cout << topStudent.totalScore() << endl;
    }

    return 0;
}
