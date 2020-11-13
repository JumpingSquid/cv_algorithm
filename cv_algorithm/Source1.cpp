#include <iostream>
#include <vector>
#include "NNTrainer.h"

int main() {

	std::vector<float> weight = { 0.5, 0.5 };
	std::vector<float> x = { 1, 2 };
	std::vector<float> y = { 2, 4 };
	NNTrainer nntrainer;

	nntrainer.train(weight, x, y, false);

	return 0;
}