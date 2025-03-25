#include <iostream>

using namespace std;

class Sale {
  private:
    string prov, city;  // 省份，城市
    double volume;      // 销量
  public:
    void setProv(string p);
    void setCity(string c);
    void setVolume(double v);
    string getProv();
    string getCity();
    double getVolume();
};

int main() {
    int n;  // 城市个数
    cin >> n;
    Sale s[n];
    string prov;
    string city;
    double volume;
    for (int i = 0; i < n; i++) {
        cin >> prov >> city >> volume;
        s[i].setProv(prov);
        /* 请根据下面的任务提示将代码补充完整，你的代码将被嵌入这里*/
        // 1.输入各城市的销量，同一省份的数据将在连续的几行中输入
        // 2.获取各省的总销量及省内最高销量的城市名称及其销量，并按照 “省份名称 sum=总销量 max=城市名称,销量” 的格式输出
        // 3.在主函数外，补充Sale类中各函数的定义
        // 以如下的格式输出各省的总销量及最高销量的城市名称和该城市的销量。

        // 请在此处补充你的代码
        s[i].setCity(city);
        s[i].setVolume(volume);
    }

    string tempProv = s[0].getProv();
    double sum = 0;
    double max = 0;
    string maxCity;
    for (int i = 0; i < n; i++) {
        if (tempProv != s[i].getProv()) {
            cout << tempProv << " sum=" << sum << " max=" << maxCity << "," << max << endl;
            tempProv = s[i].getProv();
            sum = 0;
            max = 0;
        }
        sum += s[i].getVolume();
        if (s[i].getVolume() > max) {
            max = s[i].getVolume();
            maxCity = s[i].getCity();
        }
    }

    cout << tempProv << " sum=" << sum << " max=" << maxCity << "," << max << endl;

    return 0;
}

void Sale::setProv(string p) {
    prov = p;
}

void Sale::setCity(string c) {
    city = c;
}

void Sale::setVolume(double v) {
    volume = v;
}

string Sale::getProv() {
    return prov;
}

string Sale::getCity() {
    return city;
}

double Sale::getVolume() {
    return volume;
}
