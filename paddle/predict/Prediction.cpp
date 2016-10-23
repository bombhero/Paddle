/* Copyright (c) 2016 Bomb Zhang<bomb.zhang@gmail.com>. All Rights Reserve.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#include "Prediction.h"

namespace paddle {
Prediction::Prediction() {
//    GMachine = new GradientMachine();
  std::string model_config_file;
  const std::vector<ParameterType>& parameterTypes =
          std::vector<ParameterType>{PARAMETER_VALUE, PARAMETER_GRADIENT,
                                     PARAMETER_MOMENTUM};
  model_config_file = "123";
  GMachine = GradientMachine::createByConfigProtoStr(model_config_file,
                      CREATE_MODE_NORMAL,
                      (std::vector<int>&)parameterTypes);
}

Prediction::~Prediction() {
  delete GMachine;
}

int Prediction::LoadConfigFromProtoFile(std::string filename) {
  return 0;
}

int Prediction::LoadModelFromDir(std::string model_dir) {
  return 0;
}

}  // namespace paddle
