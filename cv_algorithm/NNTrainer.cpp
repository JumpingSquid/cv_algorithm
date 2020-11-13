#include "NNTrainer.h"

int NNTrainer::train(std::vector<float> &tensor,
	std::vector<float> x, std::vector<float> y, bool verbose) {
	int training_cnt = this->training_step;
	
	while (training_cnt > 0) {
		/* training process*/
		training_cnt -= 1;
		float loss = 0;

		int dim = tensor.size();

		for (int i = 0; i < dim; ++i) {
			loss += tensor[i] * x[i];
		}

		float loss = y[0] - fitted_y;
		for (int i = 0; i < dim; ++i) {
			this->gradients[i] = x[i] * loss * -1 * this->learning_rate;
			x[i] += this->gradients[i];
		}

		if (!verbose) {
			std::cout << "Training step remained: " << training_cnt << std::endl;
			std::cout << loss << std::endl;
		}
	}

	return 1;
}