#include "Constants.h"
#include <iostream>

double gravity(const double& height) {

	int time = 1;
	double distance = 0;
	while (1) {
		double distance = (constants::g) * ((time * time) / 2);

		if ((distance - height) < 0) {
			std::cout << "At " << time-1 << " seconds, the ball is at height: " << (height - distance) << std::endl;
		}
		else {
			std::cout << "At " << time-1 << " seconds, the ball is on the ground." << std::endl;
			return 0;
		}

		time++;

	}

}