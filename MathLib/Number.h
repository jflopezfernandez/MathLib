#pragma once

const int dimension = 3;


enum class NumberType : int { Real, Complex, Fraction, Constant };

class Number {
private:
	NumberType type;
	int numerator;
	int denominator;

public:
	Number() : numerator(1), denominator(1) { }
};


class Vector {
private:
	Number	x,
			y,
			z;
public:
	Vector();
};

class Matrix {
public:
	Number m[dimension][dimension];

	Matrix() {
		Number n;

		for (int i = 0; i < dimension; ++i) {
			for (int j = 0; j < dimension; ++j) {
				m[i][j] = n();
			}
		}
	}
};