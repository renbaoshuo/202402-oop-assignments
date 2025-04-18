class Animal {
  private:
    int m_nWeightBase;

  protected:
    int m_nAgeBase;

  public:
    void set_weight(int weight) {
        m_nWeightBase = weight;
    }

    int get_weight() const {
        return m_nWeightBase;
    }

    void set_age(int age) {
        m_nAgeBase = age;
    }
};

class Cat : public Animal {
  private:
    string m_strName;

  public:
    Cat(string name) : m_strName(name) {}

    void print_age() {
        cout << m_strName << ", age = " << m_nAgeBase << endl;
    }
};
