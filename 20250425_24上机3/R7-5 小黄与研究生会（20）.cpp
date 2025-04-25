#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Program {
    bool isMale;
    char category;
    int count;
    int time;
};

int main() {
    vector<Program> programs;
    int max_C_time = 0, max_D_time = 0;
    int max_S_time = 0, max_Dance_time = 0;

    char group;
    while (cin >> group && group != 'E') {
        if (group == 'B') {
            char animal;
            int count, t;
            cin >> animal >> count >> t;
            int actual_time;
            if (animal == 'C') {
                actual_time = max(max_C_time, t);
                max_C_time = actual_time;
            } else {
                actual_time = max(max_D_time, t);
                max_D_time = actual_time;
            }
            programs.push_back({true, animal, count, actual_time});
        } else if (group == 'A') {
            char show_type;
            int t;
            cin >> show_type >> t;
            int actual_time;
            if (show_type == 'S') {
                actual_time = max(max_S_time, t);
                max_S_time = actual_time;
            } else {
                actual_time = max(max_Dance_time, t);
                max_Dance_time = actual_time;
            }
            programs.push_back({false, show_type, 0, actual_time});
        }
    }

    vector<int> requests;
    int num;
    while (cin >> num && num != 0) {
        requests.push_back(num);
    }

    for (int idx : requests) {
        const Program& p = programs[idx - 1];
        if (p.isMale) {
            cout << p.count << (p.count == 1 ? " cat" : " cats") << ", " << p.time << " second";
            if (p.time != 1) cout << "s";
            cout << endl;
        } else {
            string show = (p.category == 'S') ? "sing" : "dance";
            cout << show << ", " << p.time << " minute";
            if (p.time != 1) cout << "s";
            cout << endl;
        }
    }

    return 0;
}
