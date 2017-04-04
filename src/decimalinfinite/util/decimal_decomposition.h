#include <stdint.h>
#include <string>
#include <vector>

typedef int8_t DigitType;

class DecimalDecomposition
{
  public:
    DecimalDecomposition();
    DecimalDecomposition(const char* const literal);
    DecimalDecomposition(const DecimalDecomposition& other);

    std::string str();
    std::string dump() const;

    bool isZero() const;
    bool isPositive() const;
    bool isExponentNonNegative() const;
    unsigned int getAbsoluteExponent() const;
    int getExponent() const;
    void getDigits(std::vector<DigitType>* digits) const;
    unsigned int getNumberOfDigits() const;
    bool isNormalized();

    void setZero();
    void setPositive(bool);
    void setExponentNonNegative(bool);
    void setExponent(int);
    void setAbsoluteExponent(unsigned int e);
    void shiftExponent(int newExponent);
    void setDigits(std::vector<DigitType>&& digits);
    void copy(const DecimalDecomposition& other);
    void renormalize();

    DecimalDecomposition operator+=(const DecimalDecomposition& right);

  private:
    bool _sign;
    bool _exponent_sign;
    unsigned int _absolute_exponent;
    std::vector<DigitType> _digits;

    void encode(const char* const literal);
};
