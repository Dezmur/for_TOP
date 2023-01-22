#pragma once
#include <iostream>
using namespace std;

void EvenAndOdd(int *l, int *l1, int *l2, int limit) {
	// Вход: l - разделяемый массив; l1, l2 - массивы нулей той же длины; limit - длина массива.

	int tr1 = 0, tr2 = 0;
	for (int i = 0; i <= limit - 1; i++) {

		if (l[i] % 2 == 0) {
			l1[tr1] = l[i];
			tr1 += 1;

			/* (остатки от рекодирования)
			if ((l[-i] % 2 == 0) && (i != 0)) {
				l1[tr1] = l[-i];
				tr1 += 1;
			} else if ((l[-i] % 2 == 1) && (i != 0)) {
				l2[tr2] = l[-i];
				tr2 += 1;
			}
			*/
		}
		else if (l[i] % 2 == 1) {
			l2[tr2] = l[i];
			tr2 += 1;

			/*
			if ((l[-i] % 2 == 0) && (i != 0)) {
				l1[tr1] = l[-i];
				tr1 += 1;
			} else if ((l[-i] % 2 == 1) && (i != 0)) {
				l2[tr2] = l[-i];
				tr2 += 1;
			}
			*/
		}
	}
}

void PosAndNeg(int* l, int* l1, int* l2, int limit) {
	// Вход: l - разделяемый массив; l1, l2 - массивы нулей той же длины; limit - длина массива.

	int tr1 = 0, tr2 = 0;
	for (int i = 0; i <= limit - 1; i++) {

		if (l[i] >= 0) {
			l1[tr1] = l[i];
			tr1 += 1;

		}
		else if (l[i] < 0) {
			l2[tr2] = l[i];
			tr2 += 1;

		}
	}
}

void ArrDiv(int* l, int* l1, int* l2, int limit, int firstEnd) {
	// Вход: l - разделяемый массив; l1, l2 - массивы нулей той же длины; limit - длина массива; firstEnd - индекс конечного элемента l1 из l;
	
	for (int i = 0; i <= firstEnd; i++) {
		l1[i] = l[i];
		
	}
	for (int i = 0; i <= limit - firstEnd - 2; i++) {
		l2[i] = l[i + firstEnd + 1];

	}
}