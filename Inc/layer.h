namespace embedded_nn {
class Layer {  // 추상 클래스
 public:
  Layer();
  ~Layer();
  virtual void run() = 0;

 private:
};
}  // namespace embedded_nn