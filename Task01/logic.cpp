#include "logic.h"

int count_non_zero_element(int array[DEFAULT_SIZE], int length) {
	int count = 0;

	for (int index = 0; index < length; index++)
	{
		if (array[index] != 0) {
			count++;
		}
	}

	return count;
}