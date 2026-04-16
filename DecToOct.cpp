#include <iostream>
#include <string>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    long long  uDecNum,uTempVal;
    std::string strOctNum;
    std::cout << "Input an unsigned integer number\r\n";
    std::cin >> uDecNum;
    if (uDecNum < 0 or uDecNum > UINT32_MAX)
    {
        std::cout << "Incorrect number format\r\n";
        std::cin.ignore();
        std::cin.get();
        return 0;
    }
    uTempVal = uDecNum;
    while (uTempVal > 0)
    {
        long long nOctDigit = uTempVal % 8;
        char chOctDighit = static_cast<char>(nOctDigit + '0');
        strOctNum = chOctDighit + strOctNum;
        uTempVal /= 8;
    }
    if (strOctNum.empty()) strOctNum = "0";
    std::cout << "The octal equivalent of the decimal number " << uDecNum
              << " is:" << strOctNum << "\r\n";
    std::cin.ignore();
    std::cin.get();
    return 0;
}
