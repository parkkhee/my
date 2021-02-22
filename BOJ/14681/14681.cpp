#include <iostream>

int main(void) {
	
	int x;
	std::cout << "";
	std::cin >> x;

	int y;
	std::cout << "";
	std::cin >> y;
	


	if ((x == 1000 || y == 1000) || (x > -1000 && x<1000 && y>-1000 && y < 1000)) {
		if (x > 0 && y > 0) {
			std::cout<<"1";
		}
		else if (x < 0 && y > 0) {
			std::cout<<"2";
		}
		else if (x < 0 && y < 0) {
			std::cout<<"3";
		}
		else if (x > 0 && y < 0) {
			std::cout<<"4";
		}
		else {
			std::cout<<"x또는 y는 0";
		}
	}
	else {
		std::cout << "범위 밖의 입력 값";
	}
		

	return 0;
	
}