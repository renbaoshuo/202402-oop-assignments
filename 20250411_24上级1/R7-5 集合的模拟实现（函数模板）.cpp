#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

template <typename T>
int addSet(T *myset, T elem, int &len) {
    for (int i = 0; i < len; i++) {
        if (myset[i] == elem) {
            cout << elem << " is already exist!" << endl;
            return i;
        }
    }

    if (len >= 100) {
        cout << "Full Set." << endl;
        return -1;
    }

    myset[len] = elem;

    cout << len << endl;

    return len++;
}

template <typename T>
int deleSet(T *myset, T elem, int &len) {
    for (int i = 0; i < len; i++) {
        if (myset[i] == elem) {
            for (int j = i; j < len - 1; j++) {
                myset[j] = myset[j + 1];
            }

            len--;

            cout << i << endl;

            return i;
        }
    }

    cout << elem << " is not exist!" << endl;

    return -1;
}

template <typename T>
int findElem(T *myset, T elem, int len) {
    for (int i = 0; i < len; i++) {
        if (myset[i] == elem) {
            cout << i << endl;

            return i;
        }
    }

    cout << elem << " is not exist!" << endl;

    return -1;
}

int main() {
    int intSet[100];
    double douSet[100];
    string strSet[100];
    int intLen = 0, douLen = 0, strLen = 0;

    int type;

    while (cin >> type, type) {
        int operation;

        cin >> operation;

        if (type == 1) {  // 整型集合
            int value;

            cin >> value;

            if (operation == 1) {
                addSet(intSet, value, intLen);
            } else if (operation == 2) {
                deleSet(intSet, value, intLen);
            } else if (operation == 3) {
                findElem(intSet, value, intLen);
            }
        } else if (type == 2) {  // 浮点型集合
            double value;

            cin >> value;

            if (operation == 1) {
                addSet(douSet, value, douLen);
            } else if (operation == 2) {
                deleSet(douSet, value, douLen);
            } else if (operation == 3) {
                findElem(douSet, value, douLen);
            }
        } else if (type == 3) {  // 字符串集合
            string value;

            cin >> value;

            if (operation == 1) {
                addSet(strSet, value, strLen);
            } else if (operation == 2) {
                deleSet(strSet, value, strLen);
            } else if (operation == 3) {
                findElem(strSet, value, strLen);
            }
        }
    }

    return 0;
}
