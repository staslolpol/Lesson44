#include "logic.h"

int count_elements_great_number(int array[DEFAULT_SIZE], int length, int number) {
	int count = 0;

	for (int index = 0; index < length; index++)
	{
		if (array[index] > number) {
			count++;
		}
	}

	return count;
}