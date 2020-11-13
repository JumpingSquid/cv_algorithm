#pragma once
#include <iostream>
#include <vector>

class NNTrainer{
private:
	float hidden_params;
	std::vector<float> gradients;

public:
	float learning_rate = 0.001;
	int training_step = 1000;

	int train(std::vector<float> &tensor, std::vector<float> x, std::vector<float> y, bool verbose);
};

