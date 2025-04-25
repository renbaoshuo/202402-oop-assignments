class Tiger : public Animal {
  public:
    Tiger(string name) : Animal(name) {}

    bool eat(Animal &other) override {
        return other.getType() == 3 || other.getType() == 2;
    }

    int getType() override {
        return 1;
    }
};

class Sheep : public Animal {
  public:
    Sheep(string name) : Animal(name) {}

    bool eat(Animal &) override {
        return false;
    }

    int getType() override {
        return 2;
    }
};

class Wolf : public Animal {
  public:
    Wolf(string name) : Animal(name) {}

    bool eat(Animal &other) override {
        return other.getType() == 2;
    }

    int getType() override {
        return 3;
    }
};

Cage::Cage() : a1(nullptr), a2(nullptr) {}

void Cage::setAnimal1(Animal &a) {
    a1 = &a;
}

void Cage::setAnimal2(Animal &a) {
    a2 = &a;
}

bool Cage::remove(string &name) {
    if (a1 && a1->name == name) {
        a1 = nullptr;
        return true;
    }
    if (a2 && a2->name == name) {
        a2 = nullptr;
        return true;
    }
    return false;
}

Animal *Cage::getRoommate(Animal &a) {
    if (a1 && a1->name != a.name) {
        return a1;
    }
    if (a2 && a2->name != a.name) {
        return a2;
    }
    return nullptr;
}

void remove(Cage *cages, string &name) {
    for (int i = 0; i < C; ++i) {
        if (cages[i].remove(name)) {
            cout << "cage:" << i << endl;
            cout << name << " removed!" << endl;
            return;
        }
    }
    cout << name << " NOT found!" << endl;
}
