#pragma once
#include <iostream>
#include <vector>

class NNTrainer
{
public:
	float learning_rate = 0.001;
	int training_step = 1000;

	int train(std::vector<float>* tensor) {
		int training_cnt = this->training_step;
		while (training_cnt > 0) {
			/* training process*/
			training_cnt -= 1;
		}
	}
};

