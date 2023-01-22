#pragma once

int Factorial(int a) {
	int ret = 1;
	for (int i = 1; i <= a; i++) {
		ret *= i;
	}
	return ret;
}

double Average(double a, double b) {
	return ((a + b) / 2);
}
