#include <iostream>

namespace HexConverter {
	class Converter {
	public:
		std::string decimalToHex(int color);
		std::string convertRGBToHex(int R, int G, int B);
	};
}