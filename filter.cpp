#include "filter.h"


Filter::Filter() {
	width = height = 1;
	kernel = {1.f};
}

Filter::Filter(const std::string& filename) {
	read(filename);
}

void Filter::read(std::string filename) {
	std::ifstream mystream(filename);
	mystream >> width >> height;
	kernel = std::vector<float>(width * height, float(0));
	for (int i = 0; i < width * height; i++) {
		mystream >> kernel[i];
	}
}

void Filter::normalize() {
	// FIXME
}

const float& Filter::at(int x, int y) const {
	// FIXME
}

