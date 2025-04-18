// 12pts (full 20pts)

#include <iostream>
#include <algorithm>
#include <string>

using std::cin;
using std::cout;
const char endl = '\n';

const int INF = 0x3f3f3f3f;

int id;
double ali_amount, ali_limit, fund_amount, fund_min_transaction, ali_max_keep_limit, fund_rate;
std::string name;
char auto_transfer;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> id >> name >> ali_amount >> ali_limit >> fund_amount >> fund_rate >> fund_min_transaction >> auto_transfer;

    if (auto_transfer == 'Y') {
        cin >> ali_max_keep_limit;
    } else {
        ali_max_keep_limit = INF;
    }

    if (ali_amount >= ali_max_keep_limit) {
        int transfer_amount = std::min(ali_amount - ali_max_keep_limit, ali_limit);

        if (transfer_amount >= fund_min_transaction) {
            ali_amount -= transfer_amount;
            fund_amount += transfer_amount;
        }
    }

    int account, op;
    double amount;

    while (cin >> account >> op >> amount, account || op || amount) {
        if (account == 1) {  // 支付宝
            if (op == 1) {   // 存入
                ali_amount += amount;

                if (ali_amount >= ali_max_keep_limit) {
                    int transfer_amount = std::min(ali_amount - ali_max_keep_limit, ali_limit);

                    if (transfer_amount >= fund_min_transaction) {
                        ali_amount -= transfer_amount;
                        fund_amount += transfer_amount;
                    }
                }
            } else if (op == 2) {  // 取出
                ali_amount -= std::min({amount, ali_limit, ali_amount});
            } else {  // op == 3
                double transfer_amount = std::min({amount, ali_limit, ali_amount});

                if (transfer_amount >= fund_min_transaction) {
                    fund_amount += transfer_amount;
                    ali_amount -= transfer_amount;
                }
            }
        } else {            // account == 2, 余额宝
            if (op == 1) {  // 存入
                if (amount >= fund_min_transaction) {
                    fund_amount += amount;
                }
            } else if (op == 2) {  // 取出
                fund_amount -= std::min({amount, fund_amount});
            } else {  // op == 3
                double transfer_amount = std::min({amount, fund_amount});

                fund_amount -= transfer_amount;
                ali_amount += transfer_amount;
            }
        }
    }

    cout << "Account for " << name << endl;
    cout << "Total: " << ali_amount + fund_amount << endl;
    cout << "AliPay: " << ali_amount << endl;
    cout << "AliFund: " << fund_amount << " with rate " << fund_rate * 100 << "%" << endl;

    return 0;
}
