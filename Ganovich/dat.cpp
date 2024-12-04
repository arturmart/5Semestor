#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <time.h>

bool is_valid (const std::vector<bool>& vec) {
	int count = 0;
	std::for_each(vec.begin(), vec.end(), [&count](bool val){
		count += (val) ? 1 : -1;
	});

	return count >= 0;
}

int main () {
	srand(time(NULL));
	int size = 20;
	std::vector<bool> vec(size);

	for (int i = 0; i < size; ++i) {
		if (rand() % size > (size / 2 - 1))
			vec[i] = true;
		else
			vec[i] = false;
	}

	if (is_valid(vec)) {
		std::cout << "Mexavor" << std::endl;
	}
	else {
		std::cout << "Mexavor chi" << std::endl;
	}
}