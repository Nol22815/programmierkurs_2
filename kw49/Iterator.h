class Iterator{
public:
  virtual ~Iterator() {};
  virtual bool has_next() = 0;
  virtual const char* next() = 0;
};
