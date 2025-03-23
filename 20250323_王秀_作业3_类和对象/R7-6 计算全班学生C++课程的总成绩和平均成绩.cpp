#include <iostream>

using namespace std;

const int N = 5;

class Student {
    static int total;
    int score;

  public:
    Student(int s = 0)
        : score(s) {
        total += s;
    }

    static void display() {
        cout << total << endl
             << total / N << endl;
    }
};

int Student::total = 0;

int main() {
    int score;

    for (int i = 0; i < N; i++) {
        cin >> score;

        Student s(score);
    }

    Student s;

    s.display();

    return 0;
}
