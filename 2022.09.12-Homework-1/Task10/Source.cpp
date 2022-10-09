// Create the integer division operation using only + - *

#include <iostream>

 int main(int argc, char* argv[])
{
	short a = 0;
	short b = 0;
	unsigned short absA = 0;
	unsigned short absB = 0;
	short signA = 0;
	short signB = 0;
	unsigned short z = 0;
	unsigned short absC = 0;

	std::cin >> a >> b;

	absA = (a >= 0) * a + (a < 0) * (-a);
	absB = (b >= 0) * b + (b < 0) * (-b);

	signA = 1 * (a >= 0) + (-1) * (a < 0);
	signB = 1 * (b >= 0) + (-1) * (b < 0);

	z += (absB >> 15 & 1) * 16 * !z;
	z += (absB >> 14 & 1) * 15 * !z;
	z += (absB >> 13 & 1) * 14 * !z;
	z += (absB >> 12 & 1) * 13 * !z;
	z += (absB >> 11 & 1) * 12 * !z;
	z += (absB >> 10 & 1) * 11 * !z;
	z += (absB >> 9 & 1) * 10 * !z;
	z += (absB >> 8 & 1) * 9 * !z;
	z += (absB >> 7 & 1) * 8 * !z;
	z += (absB >> 6 & 1) * 7 * !z;
	z += (absB >> 5 & 1) * 6 * !z;
	z += (absB >> 4 & 1) * 5 * !z;
	z += (absB >> 3 & 1) * 4 * !z;
	z += (absB >> 2 & 1) * 3 * !z;
	z += (absB >> 1 & 1) * 2 * !z;
	z += (absB & 1) * !z;

	z = 16 - z;

	absB = absB << z; // normalization
	z++;

	absC = absC << (z > 0);
	absC += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	absC = absC << (z > 0);
	absC += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	absC = absC << (z > 0);
	absC += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	absC = absC << (z > 0);
	absC += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	absC = absC << (z > 0);
	absC += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	absC = absC << (z > 0);
	absC += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	absC = absC << (z > 0);
	absC += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	absC = absC << (z > 0);
	absC += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	absC = absC << (z > 0);
	absC += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	absC = absC << (z > 0);
	absC += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	absC = absC << (z > 0);
	absC += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	absC = absC << (z > 0);
	absC += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	absC = absC << (z > 0);
	absC += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	absC = absC << (z > 0);
	absC += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	absC = absC << (z > 0);
	absC += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	absC = absC << (z > 0);
	absC += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	std::cout << signA * signB * (short)absC << std::endl;
	std::cout << "check: " << a / b << std::endl;

	return EXIT_SUCCESS;
}


// same solution for int type
/*
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	unsigned int absA = 0;
	unsigned int absB = 0;
	char signA = 0;
	char signB = 0;
	unsigned int c = 0; // the result
	unsigned int z = 0; // normalizator

	std::cin >> a >> b;

	absA = (a >= 0) * a + (a < 0) * (-a);
	absB = (b >= 0) * b + (b < 0) * (-b);

	signA = 1 * (a >= 0) + (-1) * (a < 0);
	signB = 1 * (b >= 0) + (-1) * (b < 0);

	z += (absB >> 31 & 1) * 32;
	z += (absB >> 30 & 1) * 31 * !z;
	z += (absB >> 29 & 1) * 30 * !z;
	z += (absB >> 28 & 1) * 29 * !z;
	z += (absB >> 27 & 1) * 28 * !z;
	z += (absB >> 26 & 1) * 27 * !z;
	z += (absB >> 25 & 1) * 26 * !z;
	z += (absB >> 24 & 1) * 25 * !z;
	z += (absB >> 23 & 1) * 24 * !z;
	z += (absB >> 22 & 1) * 23 * !z;
	z += (absB >> 21 & 1) * 22 * !z;
	z += (absB >> 20 & 1) * 21 * !z;
	z += (absB >> 19 & 1) * 20 * !z;
	z += (absB >> 18 & 1) * 19 * !z;
	z += (absB >> 17 & 1) * 18 * !z;
	z += (absB >> 16 & 1) * 17 * !z;
	z += (absB >> 15 & 1) * 16 * !z;
	z += (absB >> 14 & 1) * 15 * !z;
	z += (absB >> 13 & 1) * 14 * !z;
	z += (absB >> 12 & 1) * 13 * !z;
	z += (absB >> 11 & 1) * 12 * !z;
	z += (absB >> 10 & 1) * 11 * !z;
	z += (absB >> 9 & 1) * 10 * !z;
	z += (absB >> 8 & 1) * 9 * !z;
	z += (absB >> 7 & 1) * 8 * !z;
	z += (absB >> 6 & 1) * 7 * !z;
	z += (absB >> 5 & 1) * 6 * !z;
	z += (absB >> 4 & 1) * 5 * !z;
	z += (absB >> 3 & 1) * 4 * !z;
	z += (absB >> 2 & 1) * 3 * !z;
	z += (absB >> 1 & 1) * 2 * !z;
	z += (absB & 1) * !z;

	z = 32 - z;

	absB = absB << z;
	z++;

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	c = c << (z > 0);
	c += (absA >= absB) & (z > 0);
	absA -= (absA >= absB) * absB;
	absB = absB >> 1;
	z -= (z > 0);

	std::cout << signA * signB * (int)c << std::endl;
	std::cout << "check: " << a / b << std::endl;

	return EXIT_SUCCESS;
}
*/

// old solution using powers of 2
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