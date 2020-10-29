#include <Poco/String.h>
#include <iostream>

using Poco::trim;
using Poco::trimLeft;
using Poco::trimRight;
using Poco::trimRightInPlace;

int main(int argc, char** argv)
{
    std::string hello(" Hello, world! ");
    std::cout << hello << std::endl;
    std::string s1(trimLeft(hello)); // "Hello, world! "
    std::cout << s1 << std::endl;

    return 0;
}