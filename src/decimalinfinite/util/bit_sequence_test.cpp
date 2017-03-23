#include "bit_sequence_test.h"

#include "bit_sequence.h"
#include "test.h"

#include <iostream>

void BitSequenceTest::run()
{
    BitSequence s;
    s.appendBits(0b10, 2);
    Test::assertStringEqual("10", s.str());
    Test::assertIntEqual(1, s.getBits(0, 1));
    Test::assertIntEqual(0b10, s.getBits(0, 2));
    Test::assertIntEqual(0b100, s.getBits(0, 3));
    Test::assertIntEqual(0, s.getBits(1, 1));
    Test::assertIntEqual(0, s.getBits(1, 2));
    Test::assertIntEqual(0, s.getBits(1, 3));
    Test::assertIntEqual(0, s.getBits(1, 32));
    s.appendBits(0b1111111111110, 13);
    Test::assertStringEqual("101111111111110", s.str());
    Test::assertIntEqual(0b101111111111110, s.getBits(0, 15));
    Test::assertIntEqual(0b011111111111100, s.getBits(1, 15));
    s.appendBits(0b1111111111110, 13);
    Test::assertStringEqual("1011111111111101111111111110", s.str());
    Test::assertIntEqual(0b1011111111111101111111111110, s.getBits(0, 28));
    Test::assertIntEqual(0b10111111111111011111111111100000, s.getBits(0, 32));
    s.appendBits(0b1111111111110, 13);
    Test::assertStringEqual("10111111111111011111111111101111111111110",
                            s.str());
    Test::assertIntEqual(0b1011111111111101111111111110, s.getBits(0, 28));
    Test::assertIntEqual(0b10111111111111011111111111101111, s.getBits(0, 32));
    Test::assertIntEqual(0b1111, s.getBits(28, 4));
    Test::assertIntEqual(0b1111, s.getBits(29, 4));
    s.appendBits(0b1111111111110, 13);
    Test::assertStringEqual(
            "101111111111110111111111111011111111111101111111111110", s.str());
    s.appendBits(0b1111111111110, 13);
    Test::assertStringEqual(
            "101111111111110111111111111011111111111101111111111110111111111111"
            "0",
            s.str());
    s.appendBits(0b1111111111110, 13);
    Test::assertStringEqual(
            "101111111111110111111111111011111111111101111111111110111111111111"
            "01111111111110",
            s.str());
    s.appendBits(0b1111111111110, 13);
    Test::assertStringEqual(
            "101111111111110111111111111011111111111101111111111110111111111111"
            "011111111111101111111111110",
            s.str());
    s.appendBits(0b110, 3);
    Test::assertStringEqual(
            "101111111111110111111111111011111111111101111111111110111111111111"
            "011111111111101111111111110110",
            s.str());
    s.appendBits(0b1111111111111111111111111111110, 31);
    Test::assertStringEqual(
            "101111111111110111111111111011111111111101111111111110111111111111"
            "0111111111111011111111111101101111111111111111111111111111110",
            s.str());
    s.appendBits(0b0, 1);
    Test::assertStringEqual(
            "101111111111110111111111111011111111111101111111111110111111111111"
            "01111111111110111111111111011011111111111111111111111111111100",
            s.str());
    s.appendBits(0b1, 1);
    Test::assertStringEqual(
            "101111111111110111111111111011111111111101111111111110111111111111"
            "011111111111101111111111110110111111111111111111111111111111001",
            s.str());
}
