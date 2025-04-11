#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class BigInteger {
  private:
    string number;

  public:
    BigInteger() : number("0") {}

    BigInteger(const string& num) : number(num) {}

    friend istream& operator>>(istream& in, BigInteger& bigInt) {
        in >> bigInt.number;  // 从输入流读取字符串
        return in;
    }

    friend ostream& operator<<(ostream& out, const BigInteger& bigInt) {
        out << bigInt.number;  // 输出字符串
        return out;
    }

    BigInteger operator*(const BigInteger& other) const {
        string num1 = this->number;
        string num2 = other.number;
        int len1 = num1.size();
        int len2 = num2.size();

        vector<int> result(len1 + len2, 0);

        for (int i = len1 - 1; i >= 0; --i) {
            for (int j = len2 - 1; j >= 0; --j) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j + 1];

                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        string product;

        for (int digit : result) {
            if (!(product.empty() && digit == 0)) {
                product.push_back(digit + '0');
            }
        }

        return BigInteger(product.empty() ? "0" : product);
    }
};
