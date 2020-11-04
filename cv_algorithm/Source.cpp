#include <iostream>
#include <vector>

int main() {

	std::vector<float> weight = { 0.5, 0.5 };
	float x1 = 1, y1 = 2, x2 = 2, y2 = 4;
	float loss = 0;
	float gradient_w0 = 0, gradient_w1 = 0;
	float learning_rate = 0.001;
	int i = 100;


	while (i > 0)
	{
		loss = std::pow(y1 - x1 * weight[0] - weight[1], 2);
		loss += std::pow(y2 - x2 * weight[0] - weight[1], 2);
		std::cout << "current loss:" <<loss << std::endl;
		std::cout << "weight_0:" << weight[0] << std::endl;
		std::cout << "weight_1:" << weight[1] << std::endl;

		gradient_w0 = -x1 * (y1 - x1 * weight[0] - weight[1]) * 2;
		gradient_w0 += -x2 * (y2 - x2 * weight[0] - weight[1]) * 2;

		gradient_w1 = -2 * (y1 - x1 * weight[0] - weight[1]);
		gradient_w1 += -2 * (y1 - x1 * weight[0] - weight[1]);

		weight[0] -= learning_rate * gradient_w0;
		weight[1] -= learning_rate * gradient_w1;
		i -= 1;
	}

	return 0;
}