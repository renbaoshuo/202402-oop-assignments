# R7-2 学生CPP成绩计算

给出下面的人员基类框架：

class  Person
{

   protected:

         string name;
         int age;

 public:

         Person();	  
         Person (string p_name, int p_age);
         void display () {cout<<name<<“:”<<age<<endl;}

};

建立一个派生类student,增加以下成员数据：

    int ID;//学号
    float cpp_score;//cpp上机成绩
    float cpp_count;//cpp上机考勤
    float cpp_grade;//cpp总评成绩
         //总评成绩计算规则：cpp_grade = cpp_score * 0.9 + cpp_count * 2;

增加以下成员函数：

  student类的无参构造函数

  student类的参数化构造函数//注意cpp_grade为上机成绩和考勤的计算结果

  void print()//输出当前student的信息

                     //其中cpp_grade输出保留一位小数
                    //输出格式为ID name cpp_grade

生成上述类并编写主函数，根据输入的学生基本信息，建立一个学生对象，计算其cpp总评成绩，并输出其学号、姓名、总评成绩。

输入格式： 测试输入包含若干测试用例，每个测试用例占一行（学生姓名 学号 年龄 cpp成绩 cpp考勤）。当读入0时输入结束，相应的结果不要输出。

输入样例：

Bob 10001 18 75.5 4

Mike 10005 17 95.0 5

0

输出样例：

10001 Bob 75.9

10005 Mike 95.5
