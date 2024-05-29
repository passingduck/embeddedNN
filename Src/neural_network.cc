// TODO : Auto generate by Python converter
#include "neural_network.h"

#include "dense.h"
#include "weights.h"
namespace embedded_nn {
NeuralNetwork::NeuralNetwork() {
  Dense<float, 784, 32>* dense_layer = new Dense<float, 784, 32>(
      (float*)(this->input), dense_8_weights, dense_8_bias, this->buffer);
  layers.push_back(dense_layer);

  Dense<float, 32, 10>* dense_layer2 = new Dense<float, 32, 10>(
      this->buffer, dense_9_weights, dense_9_bias, this->buffer);
  layers.push_back(dense_layer2);
}
NeuralNetwork::~NeuralNetwork() {}
void NeuralNetwork::inference() {
  for (Layer* layer : this->layers) {
    layer->run();
  }
}
}  // namespace embedded_nn