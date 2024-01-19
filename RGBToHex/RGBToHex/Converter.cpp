#include "Converter.hpp"

namespace HexConverter {
	std::string Converter::decimalToHex(int col) {
		char hexadecnum[2];

		int i = 0;
		while (col != 0) {
			int temp = 0;

			temp = col / 16;

			if (temp < 10) {
				hexadecnum[i] = temp + 48;
				i++;
			}
			else {
				hexadecnum[i] = temp + 55;
				i++;
			}
			col = col / 16;
		}
		std::string hex_code = "";

		switch (i)
		{
		case 1:
			hex_code = "0";
			hex_code.push_back(hexadecnum[0]);
			break;
		case 2:
			hex_code.push_back(hexadecnum[0]);
			hex_code.push_back(hexadecnum[1]);
			break;

		case 0:
			hex_code = "00";
			break;
		}

		return hex_code;
	}

	std::string Converter::convertRGBToHex(int R, int G, int B) {
		if ((R >= 0 && R <= 255) && (G >= 0 && G <= 255) && (B >= 0 && B <= 255)) {
			std::string hex_code = "#";
			hex_code += Converter::decimalToHex(R);
			hex_code += Converter::decimalToHex(G);
			hex_code += Converter::decimalToHex(B);

			return hex_code;
		}
		else {
			return "There was no color to converter to hex!";
		}
	}
}