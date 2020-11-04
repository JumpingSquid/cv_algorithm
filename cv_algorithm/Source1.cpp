#include <iostream>
#include <vector>

int main() {

	std::vector<float> weight = { 0.5, 0.5 };
	float x1 = 1, y1 = 2, x2 = 2, y2 = 4;
	float loss = 0;
	int i = 100;

	while (i > 0)
	{
		loss = std::pow(y1 - x1 * weight[0] - weight[1], 2);
		loss += std::pow(y2 - x2 * weight[0] - weight[1], 2);
		std::cout << loss << std::endl;
		
		weight[0] *= 1.01;
		i -= 1;
	}

	return 0;
}