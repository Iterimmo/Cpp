#include<iostream>


int main() {
	

	int sum = 0, val = 1;
	
	while (val <= 10) {
		sum += val;
		++val;

	}
	std::cout << "Sum of 1 to 10 is " << sum << std::endl;

	sum = 0;

	for (int val = 1; val <= 10;++val) {
		sum += val;
	}
	std::cout << "Sum of 1 to 10 is " << sum << std::endl;

	int sum_new = 0, value = 0;

	std::cout << "press any string literal to end;" << std::endl;
/*	while (std::cin >> value) {
*	
*		sum_new += value; 
*		
*	}
*	std::cout << "Sum is:" << sum_new << std::endl;
*	return 0;
*/
	int currVal = 0, values = 0;

	if (std::cin >> currVal) {
		int cnt = 1;
		while (std::cin >> values) {
			if (values == currVal)
				++cnt;
			else {
				std::cout << currVal << " occurs " << cnt << " times " << std::endl;
				currVal = values;
				cnt = 1;
			}
		}
		std::cout << currVal << " occurs " << cnt << " times " << std::endl;
	}
	return 0;
}