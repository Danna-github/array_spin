#include <iostream>

int main() {
	
	int arrSize = 0;
	std::cout << "Input N: ";
	std::cin >> arrSize;

	/*Memory allocation*/
	int **array = new int*[arrSize];
	for (int i = 0; i < arrSize; i++) {
		array[i] = new int[arrSize];
	}

	std::cout << std::endl << "Input N * N Array" << std::endl;
	for (int i = 0; i < arrSize; i++) {
		for (int j = 0; j < arrSize; j++) {
			std::cout << "Element of " << i << " * " << j << " Array: ";
			std::cin >> array[i][j];
		}
	}

	std::cout << std::endl << "Original Array" << std::endl;
	for (int i = 0; i < arrSize; i++) {
		for (int j = 0; j < arrSize; j++) {
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl << "After rotation" << std::endl;
	for (int j = 0; j < arrSize; j++) {
		for (int i = arrSize-1; i >= 0; i--) {
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}

	/*Memory release*/
	for (int i = 0; i < arrSize; i++) {
		delete[] array[i];
	}
	delete[] array;
}
