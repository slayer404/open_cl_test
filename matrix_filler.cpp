#include "matrix_filler.h"

void fillMatrixWithRandom(float* matrix, const size_t size, const size_t depth) {
	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			matrix[i * size + j] = ((float) (rand()) / RAND_MAX * depth);
		}
	}
}

void fillMatrixWithZeros(float* matrix, const size_t size) {
	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			matrix[i * size + j] = 0;
		}
	}
}