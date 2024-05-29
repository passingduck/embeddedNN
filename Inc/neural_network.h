#include <vector>

#include "layer.h"

namespace embedded_nn {
class NeuralNetwork {  // TODO Singletone Pattern
 public:
  NeuralNetwork();
  ~NeuralNetwork();
  void inference();

 private:
  float buffer[128 * 1024];
  float input[784];
  float output[10];
  std::vector<Layer*> layers;
};
}  // namespace embedded_nn