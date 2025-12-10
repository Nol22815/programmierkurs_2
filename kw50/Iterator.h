template <typename T> class Iterator{
public:
  virtual ~Iterator() {};
  virtual bool has_next() = 0;
  virtual const T* next() = 0;
};
