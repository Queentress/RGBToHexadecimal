#include <iostream>
#include "Converter.hpp"

using namespace HexConverter;

int main() {
	int R = 0, G = 0, B = 0;
	Converter c;
	std::cout << "The hex for this color is: " << c.convertRGBToHex(R, G, B) << std::endl;
	return 0;
}