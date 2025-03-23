// 网上抄的

#include <bits/stdc++.h>
using namespace std;

class team {
  public:
    static int i;

    void setname(int x) {
        name = x;
    }

    void bifen(int x, int y) {
        score[i][1] = x;
        score[i][2] = x;
        i++;
        if (x > y && name == 1) {
            jifen += 3;
        }
        if (x < y && name == 2) {
            jifen += 3;
        }
        if (x == y) {
            jifen += 1;
        }
        if (name == 1) {
            jinsheng += x - y;
        }
        if (name == 2) {
            jinsheng += y - x;
        }
    }

    void display() {
        cout << jifen << " " << jinsheng << endl;
    }

  private:
    int name;
    int score[25][3];
    static int jinsheng;
    static int jifen;
};

int team::jifen = 0;
int team::jinsheng = 0;
int team::i = 0;

int main() {
    int x;
    cin >> x;
    team t;
    t.setname(x);
    int a, b;
    char c;
    while (cin >> a >> c >> b) {
        t.bifen(a, b);
    }
    t.display();
    return 0;
}
