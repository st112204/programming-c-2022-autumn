// Операция / , используя только операции + - *

#include <iostream>

int sign(int n)
{
	return (n >= 0) * 1 + (n < 0) * (-1);
}

int absolute(int n)
{
	return (n >= 0) * n + (n < 0) * (-n);
}

// output the binary representation of the int n
unsigned int binary(unsigned int n)
{	
	std::cout << (n >> 31 & 1);
	std::cout << (n >> 30 & 1);
	std::cout << (n >> 29 & 1);
	std::cout << (n >> 28 & 1);
	std::cout << " ";
	std::cout << (n >> 27 & 1);
	std::cout << (n >> 26 & 1);
	std::cout << (n >> 25 & 1);
	std::cout << (n >> 24 & 1);
	std::cout << " ";
	std::cout << (n >> 23 & 1);
	std::cout << (n >> 22 & 1);
	std::cout << (n >> 21 & 1);
	std::cout << (n >> 20 & 1);
	std::cout << " ";
	std::cout << (n >> 19 & 1);
	std::cout << (n >> 18 & 1);
	std::cout << (n >> 17 & 1);
	std::cout << (n >> 16 & 1);
	std::cout << " ";
	std::cout << (n >> 15 & 1);
	std::cout << (n >> 14 & 1);
	std::cout << (n >> 13 & 1);
	std::cout << (n >> 12 & 1);
	std::cout << " ";
	std::cout << (n >> 11 & 1);
	std::cout << (n >> 10 & 1);
	std::cout << (n >> 9 & 1);
	std::cout << (n >> 8 & 1);
	std::cout << " ";
	std::cout << (n >> 7 & 1);
	std::cout << (n >> 6 & 1);
	std::cout << (n >> 5 & 1);
	std::cout << (n >> 4 & 1);
	std::cout << " ";
	std::cout << (n >> 3 & 1);
	std::cout << (n >> 2 & 1);
	std::cout << (n >> 1 & 1);
	std::cout << (n & 1);

	return EXIT_SUCCESS;
}

// debugging and viewing binary calculations
unsigned int checkValues(unsigned int a, unsigned int b, unsigned int c, int zeros, int iteration)
{
	std::cout << "     after iteration " << iteration << ":" << std::endl;

	std::cout << "a = ";
	binary(a);
	std::cout << " = " << a << std::endl;

	std::cout << "b = ";
	binary(b);
	std::cout << " = " << b << std::endl;

	std::cout << "c = ";
	binary(c);
	std::cout << " = " << c << std::endl;

	std::cout << "actual zeroes of b = " << zeros - 1 << "\n" << std::endl;

	return EXIT_SUCCESS;
}

// used in normilize of divisor function
unsigned int leadingZeros(unsigned int n)
{
	unsigned int d = 0;

	d += (n >> 31 & 1) * 32;
	d += (n >> 30 & 1) * 31 * !d;
	d += (n >> 29 & 1) * 30 * !d;
	d += (n >> 28 & 1) * 29 * !d;
	d += (n >> 27 & 1) * 28 * !d;
	d += (n >> 26 & 1) * 27 * !d;
	d += (n >> 25 & 1) * 26 * !d;
	d += (n >> 24 & 1) * 25 * !d;
	d += (n >> 23 & 1) * 24 * !d;
	d += (n >> 22 & 1) * 23 * !d;
	d += (n >> 21 & 1) * 22 * !d;
	d += (n >> 20 & 1) * 21 * !d;
	d += (n >> 19 & 1) * 20 * !d;
	d += (n >> 18 & 1) * 19 * !d;
	d += (n >> 17 & 1) * 18 * !d;
	d += (n >> 16 & 1) * 17 * !d;
	d += (n >> 15 & 1) * 16 * !d;
	d += (n >> 14 & 1) * 15 * !d;
	d += (n >> 13 & 1) * 14 * !d;
	d += (n >> 12 & 1) * 13 * !d;
	d += (n >> 11 & 1) * 12 * !d;
	d += (n >> 10 & 1) * 11 * !d;
	d += (n >> 9 & 1) * 10 * !d;
	d += (n >> 8 & 1) * 9 * !d;
	d += (n >> 7 & 1) * 8 * !d;
	d += (n >> 6 & 1) * 7 * !d;
	d += (n >> 5 & 1) * 6 * !d;
	d += (n >> 4 & 1) * 5 * !d;
	d += (n >> 3 & 1) * 4 * !d;
	d += (n >> 2 & 1) * 3 * !d;
	d += (n >> 1 & 1) * 2 * !d;
	d += (n & 1) * !d;

	return 32 - d;
}

unsigned int division(unsigned int a, unsigned int b)
{
	unsigned int c = 0;
	unsigned int b0 = 0;
	int zeros = 0;
	int iteration = 0;

	b0 = b;
	zeros = leadingZeros(b);
	b = b << zeros;
	zeros++;

	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	iteration++;
	c = c << (zeros > 0);
	c += (a >= b) & (zeros > 0);
	a -= (a >= b) * b;
	b = b >> 1;
	zeros -= (zeros > 0);
	checkValues(a, b, c, zeros, iteration);

	return c;
}

 int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	std::cout << "Input a is integer belongs to [ - 2 147 483 647 ; 2 147 483 647 ] without spaces pls: ";
	std::cin >> a;
	std::cout << "Input b != 0, the same requirements: ";
	std::cin >> b;
	std::cout << "\n Нow it works: \n" << std::endl;

	std::cout << "      my a / b = " << sign(a) * sign(b) * (int)division(absolute(a), absolute(b)) << std::endl;
	std::cout << "standard a / b = " << a / b << std::endl;

	return EXIT_SUCCESS;
}



//old solution with powers of 2
/*
int inputA()
{
	int a = 0;
	
	std::cout << "input a : [ - 2 147 483 647 ; 2 147 483 647 ] without spaces pls: " << std::endl;
	std::cin >> a;

	return a;
}

int inputB()
{
	int b = 0;

	std::cout << "input b : [ - 2 147 483 647 ; 2 147 483 647 ] without spaces pls: " << std::endl;
	std::cin >> b;

	return b;
}

int absolute(int n)
{
	return (n >= 0) * n + (n < 0) * (-n);
}

int sign(int n)
{
	return (n >= 0) * 1 + (n < 1) * (-1);
}

int division(long long a, long long b)
{
	int a0 = a;
	int b0 = b;

	int c = 0;

	// powers of 2 for signed int
	int power0 = 1;
	int power1 = 2;
	int power2 = 4;
	int power3 = 8;
	int power4 = 16;
	int power5 = 32;
	int power6 = 64;
	int power7 = 128;
	int power8 = 256;
	int power9 = 512;
	int power10 = 1024;
	int power11 = 2048;
	int power12 = 4096;
	int power13 = 8192;
	int power14 = 16384;
	int power15 = 32768;
	int power16 = 65536;
	int power17 = 131072;
	int power18 = 262144;
	int power19 = 524288;
	int power20 = 1048576;
	int power21 = 2097152;
	int power22 = 4194304;
	int power23 = 8388608;
	int power24 = 16777216;
	int power25 = 33554432;
	int power26 = 67108864;
	int power27 = 134217728;
	int power28 = 268435456;
	int power29 = 536870912;
	int power30 = 1073741824;
	int power31 = 2147483647; // actually (2 ^ 31) - 1

	c += (power31 * b <= a) * power31;
	a -= (power31 * b <= a) * power31 * b;

	c += (power30 * b <= a) * power30;
	a -= (power30 * b <= a) * power30 * b;

	c += (power29 * b <= a) * power29;
	a -= (power29 * b <= a) * power29 * b;

	c += (power28 * b <= a) * power28;
	a -= (power28 * b <= a) * power28 * b;

	c += (power27 * b <= a) * power27;
	a -= (power27 * b <= a) * power27 * b;

	c += (power26 * b <= a) * power26;
	a -= (power26 * b <= a) * power26 * b;

	c += (power25 * b <= a) * power25;
	a -= (power25 * b <= a) * power25 * b;

	c += (power24 * b <= a) * power24;
	a -= (power24 * b <= a) * power24 * b;

	c += (power23 * b <= a) * power23;
	a -= (power23 * b <= a) * power23 * b;

	c += (power22 * b <= a) * power22;
	a -= (power22 * b <= a) * power22 * b;

	c += (power21 * b <= a) * power21;
	a -= (power21 * b <= a) * power21 * b;

	c += (power20 * b <= a) * power20;
	a -= (power20 * b <= a) * power20 * b;

	c += (power19 * b <= a) * power19;
	a -= (power19 * b <= a) * power19 * b;

	c += (power18 * b <= a) * power18;
	a -= (power18 * b <= a) * power18 * b;

	c += (power17 * b <= a) * power17;
	a -= (power17 * b <= a) * power17 * b;

	c += (power16 * b <= a) * power16;
	a -= (power16 * b <= a) * power16 * b;

	c += (power15 * b <= a) * power15;
	a -= (power15 * b <= a) * power15 * b;

	c += (power14 * b <= a) * power14;
	a -= (power14 * b <= a) * power14 * b;

	c += (power13 * b <= a) * power13;
	a -= (power13 * b <= a) * power13 * b;

	c += (power12 * b <= a) * power12;
	a -= (power12 * b <= a) * power12 * b;

	c += (power11 * b <= a) * power11;
	a -= (power11 * b <= a) * power11 * b;

	c += (power10 * b <= a) * power10;
	a -= (power10 * b <= a) * power10 * b;

	c += (power9 * b <= a) * power9;
	a -= (power9 * b <= a) * power9 * b;

	c += (power8 * b <= a) * power8;
	a -= (power8 * b <= a) * power8 * b;

	c += (power7 * b <= a) * power7;
	a -= (power7 * b <= a) * power7 * b;

	c += (power6 * b <= a) * power6;
	a -= (power6 * b <= a) * power6 * b;

	c += (power5 * b <= a) * power5;
	a -= (power5 * b <= a) * power5 * b;

	c += (power4 * b <= a) * power4;
	a -= (power4 * b <= a) * power4 * b;

	c += (power3 * b <= a) * power3;
	a -= (power3 * b <= a) * power3 * b;

	c += (power2 * b <= a) * power2;
	a -= (power2 * b <= a) * power2 * b;

	c += (power1 * b <= a) * power1;
	a -= (power1 * b <= a) * power1 * b;

	c += (power0 * b <= a) * power0;
	a -= (power0 * b <= a) * power0 * b;

	return c * (a0 >= b0);
}

 int main(int argc, char* argv[])
{
	int a = inputA();
	int b = inputB();
	int s = sign(a) * sign(b);
	int c = s * division(absolute(a), absolute(b));

	std::cout << "standard a / b = " << a / b << std::endl;
	std::cout << "my a / b = " << c << std::endl;

	return EXIT_SUCCESS;
}

*/