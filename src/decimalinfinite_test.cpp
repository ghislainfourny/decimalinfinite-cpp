#include "decimalinfinite_test.h"

#include <iostream>
using namespace std;

void DecimalInfiniteTest::run() {
	test("-123456789", "0000011001001101111110101101100000001101101000000000000000000000");
	test("-1000", "00001011001000000000000000000000");
	test("-100", "00001101001000000000000000000000");
	test("-10", "00001111001000000000000000000000");
	test("-9", "00010000100000000000000000000000");
	test("-8", "00010001000000000000000000000000");
	test("-7", "00010001100000000000000000000000");
	test("-6", "00010010000000000000000000000000");
	test("-5", "00010010100000000000000000000000");
	test("-4", "00010011000000000000000000000000");
	test("-3", "00010011100000000000000000000000");
	test("-2", "00010100000000000000000000000000");
	test("-1", "00010100100000000000000000000000");
	test("0", "10000000000000000000000000000000");
	test("0.02", "10001110010000000000000000000000");
	test(".02", "10001110010000000000000000000000");
	test("0.2", "10010001000000000000000000000000");
	test("1", "10101000100000000000000000000000");
	test("2", "10101001000000000000000000000000");
	test("3", "10101001100000000000000000000000");
	test("4", "10101010000000000000000000000000");
	test("5", "10101010100000000000000000000000");
	test("6", "10101011000000000000000000000000");
	test("7", "10101011100000000000000000000000");
	test("8", "10101100000000000000000000000000");
	test("9", "10101100100000000000000000000000");
	test("10", "10110000001000000000000000000000");
	test("11", "10110000001000110010000000000000");
	test("20", "10110000010000000000000000000000");
	test("200", "10110010010000000000000000000000");
	test("2000", "10110100010000000000000000000000");
	test("20000", "10110110010000000000000000000000");
	test("200000", "10111000000100000000000000000000");
	test("2000000", "10111000100100000000000000000000");
	test("20000000", "10111001000100000000000000000000");
	test("123456789", "1011100110001001110101010001101111101111010000000000000000000000");
}
