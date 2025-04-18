#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Vehicle {
  protected:
    int wheels;
    int weight;

  public:
    Vehicle(int w, int wt) : wheels(w), weight(wt) {}

    int get_wheels() const {
        return wheels;
    }

    int get_weight() const {
        return weight;
    }

    double wheel_load() const {
        return static_cast<double>(weight) / wheels;
    }

    virtual void print(int index, int id) const {
        cout << "The " << get_ordinal(index) << " object is Vehicle No. " << id
             << ": weight " << weight << " Kg and wheels " << wheels << endl;
    }

    virtual ~Vehicle() = default;

  protected:
    static string get_ordinal(int num) {
        if (num % 100 >= 11 && num % 100 <= 13) {
            return to_string(num) + "th";
        }
        switch (num % 10) {
            case 1: return to_string(num) + "st";
            case 2: return to_string(num) + "nd";
            case 3: return to_string(num) + "rd";
            default: return to_string(num) + "th";
        }
    }
};

class Car : public Vehicle {
  private:
    int passenger_load;

  public:
    Car(int w, int wt, int p) : Vehicle(w, wt), passenger_load(p) {}

    int get_passengers() const {
        return passenger_load;
    }

    void print(int index, int id) const override {
        cout << "The " << get_ordinal(index) << " object is Car No. " << id
             << ": passenger_load " << passenger_load
             << " weight " << weight << " Kg and wheels " << wheels << endl;
    }
};

class Truck : public Vehicle {
  private:
    int passenger_load;
    int payload;

  public:
    Truck(int w, int wt, int p, int pl) : Vehicle(w, wt), passenger_load(p), payload(pl) {}

    int get_passengers() const {
        return passenger_load;
    }

    double efficiency() const {
        return static_cast<double>(payload) / (payload + weight);
    }

    void print(int index, int id) const override {
        cout << "The " << get_ordinal(index) << " object is Truck No. " << id
             << ": passenger_load " << passenger_load
             << " weight " << weight << " Kg wheels " << wheels
             << " and efficiency " << fixed << setprecision(2) << efficiency() << endl;
    }
};

int main() {
    vector<Vehicle *> vehicles;
    string type;
    int id, wheels, weight, passenger_load, payload;
    int index = 1;

    while (cin >> type, type != "-1") {
        if (type == "vehicle") {
            cin >> id >> wheels >> weight;
            vehicles.push_back(new Vehicle(wheels, weight));
        } else if (type == "car") {
            cin >> id >> wheels >> weight >> passenger_load;
            vehicles.push_back(new Car(wheels, weight, passenger_load));
        } else if (type == "truck") {
            cin >> id >> wheels >> weight >> passenger_load >> payload;
            vehicles.push_back(new Truck(wheels, weight, passenger_load, payload));
        }

        vehicles.back()->print(index, id);
        ++index;
    }

    for (auto v : vehicles) {
        delete v;
    }

    return 0;
}
