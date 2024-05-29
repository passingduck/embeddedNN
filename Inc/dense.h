#include <cstddef>

#include "layer.h"

namespace embedded_nn {

template <typename T, size_t INPUT_SIZE, size_t OUTPUT_SIZE>
class Dense : public Layer {
 public:
  Dense(T* input, const T (&weight)[INPUT_SIZE][OUTPUT_SIZE],
        const T (&bias)[OUTPUT_SIZE], T (&output)[131072]);
  ~Dense();

  void run() override;

 private:
  T* input_;
  const T (*weight_)[INPUT_SIZE][OUTPUT_SIZE];
  const T (*bias_)[OUTPUT_SIZE];
  T (*output_)[INPUT_SIZE * OUTPUT_SIZE];
};

template <typename T, size_t INPUT_SIZE, size_t OUTPUT_SIZE>
Dense<T, INPUT_SIZE, OUTPUT_SIZE>::Dense(
    T* input, const T (&weight)[INPUT_SIZE][OUTPUT_SIZE],
    const T (&bias)[OUTPUT_SIZE], T (&output)[131072])
    : input_(input), weight_(&weight), bias_(&bias), output_(&output) {}

template <typename T, size_t INPUT_SIZE, size_t OUTPUT_SIZE>
Dense<T, INPUT_SIZE, OUTPUT_SIZE>::~Dense() {}

template <typename T, size_t INPUT_SIZE, size_t OUTPUT_SIZE>
void Dense<T, INPUT_SIZE, OUTPUT_SIZE>::run() {
  // Dense layer 연산 구현
  // ...
}

}  // namespace embedded_nn