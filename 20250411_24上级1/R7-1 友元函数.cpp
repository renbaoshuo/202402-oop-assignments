#include <iostream>

using namespace std;

class student {
  private:
    int id;
    double score;

  public:
    student() : id(0), score(0.0) {}

    void setInfo(int id, double score) {
        this->id = id;
        this->score = score;
    }

    friend double average(student *p, int count);
};

double average(student *p, int count) {
    if (count == 0) {
        return 0.0;
    }

    double sum = 0.0;
    for (int i = 0; i < count; ++i) {
        sum += p[i].score;
    }
    return sum / count;
}

int main() {
    student students[100];
    int count = 0;

    while (true) {
        int id;
        double score;
        cin >> id;
        if (id == 0) {
            break;
        }
        cin >> score;

        students[count].setInfo(id, score);
        count++;
    }

    double avg = average(students, count);

    cout << avg << endl;

    return 0;
}
