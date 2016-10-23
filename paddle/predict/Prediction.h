/* Copyright (c) 2016 Mark Zhang. All Rights Reserve.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#ifndef PREDICTION_H__
#define PREDICTION_H__

#include <string>
#include "paddle/api/PaddleAPI.h"

class Prediction{
public:
    Prediction();
    ~Prediction();

    int LoadConfigFromProtoFile(std::string filename);
    int LoadModelFromDir(std::string model_dir);

private:
    GradientMachine* GMachine;
};

#endif  // PREDICTION_H__
