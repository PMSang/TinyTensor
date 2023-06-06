#include <benchmark/benchmark.h>
#include "runtime/runtime_ir.hpp"
using namespace TinyTensor;
const static int IterationNum = 5;

static void BM_Resnet18_Batch8_224x224(benchmark::State& state) {
  
  RuntimeGraph graph("../../model/resnet18_batch1.pnnx.param",
                     "../../model/resnet18_batch1.pnnx.bin");

  graph.Build("pnnx_input_0", "pnnx_output_0");
  std::vector<std::shared_ptr<Tensor<float>>> inputs;

  const uint32_t batch_size = 8;
  for (int i = 0; i < batch_size; ++i) {
    std::shared_ptr<Tensor<float>> input1 =
        std::make_shared<Tensor<float>>(3, 224, 224);
    input1->Fill(1.);
    inputs.push_back(input1);
  }

  for (auto _ : state) {
    std::vector<std::shared_ptr<Tensor<float>>> output_tensors =
        graph.Forward(inputs, false);
  }
}

BENCHMARK(BM_Resnet18_Batch8_224x224)->Unit(benchmark::kMillisecond);