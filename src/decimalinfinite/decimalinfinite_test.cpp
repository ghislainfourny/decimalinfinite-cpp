#include "decimalinfinite_test.h"

#include <iostream>
using namespace std;
using namespace di;

void DecimalInfiniteTest::run() {
	test("-123456789", "0000011011001101111110101101100000001101110");
	test("-1000", "00001101001");
	test("-100", "00001111001");
	test("-10", "000101001");
	test("-9", "000110001");
	test("-8", "000110010");
	test("-7", "000110011");
	test("-6", "000110100");
	test("-5", "000110101");
	test("-4", "000110110");
	test("-3", "000110111");
	test("-2", "000111000");
	test("-1", "000111001");
	test("0", "10");
	test("0.02", "10001110010");
	test("0.2", "100100010");
	test("1", "101000001");
	test("2", "101000010");
	test("3", "101000011");
	test("4", "101000100");
	test("5", "101000101");
	test("6", "101000110");
	test("7", "101000111");
	test("8", "101001000");
	test("9", "101001001");
	test("10", "101010001");
	test("11", "1010100010001100100");
	test("20", "101010010");
	test("200", "10110000010");
	test("2000", "10110010010");
	test("20000", "10110100010");
	test("200000", "10110110010");
	test("2000000", "1011100000010");
	test("20000000", "1011100010010");
	test("123456789", "1011100100001001110101010001101111101111010");
}

void DecimalInfiniteTest::test(std::string literal, std::string expected) {
  decimal d(literal);
  // Tests that the expected encoding is calculated.
  Test::assertStringEqual(expected, d.dumpBits());
  // Tests that decoding against leads to the original literal.
  Test::assertStringEqual(literal, d.str());
};
