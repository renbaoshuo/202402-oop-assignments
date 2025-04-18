  public:
    Employee(string name, int age, float salary, string loveName, int loveAge)
        : Person(name, age), m_salary(salary), m_love(loveName, loveAge) {}

    float getSalary() const {
        return m_salary;
    }
