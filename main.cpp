#include <iostream>



int main(int argc, char** argv) {
	

	if (argc > 1){
		std::cout << "Holi" << argv[1] << std::endl;
	}
	else {

		std::cout << "Introduce nombre como parametro: " << std::endl;
	}

	return 0;	
}
