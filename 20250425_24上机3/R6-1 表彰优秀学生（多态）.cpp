#include <vector>
using namespace std;

class Student {
  protected:
    string num;
    string name;

  public:
    static vector<float> averages;
    static float awardLine;

    Student(string n, string na) : num(n), name(na) {}

    virtual void display() = 0;
};

vector<float> Student::averages;
float Student::awardLine = -1.0f;

class GroupA : public Student {
  private:
    int s1, s2;

  public:
    GroupA(string num, string name, int s1, int s2) : Student(num, name), s1(s1), s2(s2) {
        float avg = (s1 + s2) / 2.0f;
        Student::averages.push_back(avg);
    }

    void display() override {
        if (Student::awardLine < 0) {
            float max_avg = 0;
            for (float a : Student::averages) {
                if (a > max_avg) max_avg = a;
            }
            Student::awardLine = max_avg;
        }
        float my_avg = (s1 + s2) / 2.0f;
        if (my_avg == Student::awardLine) {
            cout << num << " " << name << endl;
        }
    }
};

class GroupB : public Student {
  private:
    int s1, s2;
    char gs;

  public:
    GroupB(string num, string name, int s1, int s2, char g) : Student(num, name), s1(s1), s2(s2), gs(g) {
        float avg = (s1 + s2) / 2.0f;
        Student::averages.push_back(avg);
    }

    void display() override {
        if (Student::awardLine < 0) {
            float max_avg = 0;
            for (float a : Student::averages) {
                if (a > max_avg) max_avg = a;
            }
            Student::awardLine = max_avg;
        }
        float my_avg = (s1 + s2) / 2.0f;
        bool cond1 = (my_avg == Student::awardLine);
        bool cond3 = (my_avg >= 0.7f * Student::awardLine) && (gs == 'A');
        if (cond1 || cond3) {
            cout << num << " " << name << endl;
        }
    }
};

class GroupC : public Student {
  private:
    int s1, s2, s3, s4, s5;

  public:
    GroupC(string num, string name, int s1, int s2, int s3, int s4, int s5)
        : Student(num, name), s1(s1), s2(s2), s3(s3), s4(s4), s5(s5) {}

    void display() override {
        if (Student::awardLine < 0) {
            float max_avg = 0;
            for (float a : Student::averages) {
                if (a > max_avg) max_avg = a;
            }
            Student::awardLine = max_avg;
        }
        float avg = (s1 + s2 + s3 + s4 + s5) / 5.0f;
        if (avg >= 0.9f * Student::awardLine) {
            cout << num << " " << name << endl;
        }
    }
};
