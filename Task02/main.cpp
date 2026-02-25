#include "..\Task02\logic.h"
#include "..\Task01\util.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;
	int number;

	do {
		system("cls");
		cout << "Input size of array: ";
		cin >> size;
	} while (size <= 0);

	count << "Input your number: ";
	cin >> number;

	init_rnd(array, size, 0, 100);

	print("Array:\n");
	print(convert(array, size));

	print(to_string(count_elements_great_number(array[DEFAULT_SIZE], size, number));


	return 0;
}