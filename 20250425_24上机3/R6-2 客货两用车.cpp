class CAR {
    protected:
      double speed;
  
    public:
      CAR(double s) : speed(s) {
          cout << "创建汽车(" << speed << "公里/小时)" << endl;
      }
  
      virtual ~CAR() {
          cout << "销毁汽车(" << speed << "公里/小时)" << endl;
      }
  
      virtual void Show() const {
          cout << "汽车: " << speed << "公里/小时" << endl;
      }
  };
  
  class BUS : virtual public CAR {
    protected:
      int seat;
  
    public:
      BUS(double s, int t) : CAR(s), seat(t) {
          cout << "创建客车(" << seat << "人)" << endl;
      }
  
      ~BUS() override {
          cout << "销毁客车(" << seat << "人)" << endl;
      }
  
      void Show() const override {
          cout << "客车: " << speed << "公里/小时, " << seat << "人" << endl;
      }
  };
  
  class TRUCK : virtual public CAR {
    protected:
      double load;
  
    public:
      TRUCK(double s, double w) : CAR(s), load(w) {
          cout << "创建货车(" << load << "吨)" << endl;
      }
  
      ~TRUCK() override {
          cout << "销毁货车(" << load << "吨)" << endl;
      }
  
      void Show() const override {
          cout << "货车: " << speed << "公里/小时, " << load << "吨" << endl;
      }
  };
  
  class VAN : public BUS, public TRUCK {
    public:
      VAN(double s, int t, double w) : CAR(s), BUS(s, t), TRUCK(s, w) {
          cout << "创建客货两用车" << endl;
      }
  
      ~VAN() override {
          cout << "销毁客货两用车" << endl;
      }
  
      void Show() const override {
          cout << "客货两用车: " << speed << "公里/小时, " << seat << "人, " << load << "吨" << endl;
      }
  };
  