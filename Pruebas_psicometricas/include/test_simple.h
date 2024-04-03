#ifndef TEST_SIMPLE_H
#define TEST_SIMPLE_H
#include"Test.h"

class Test_simple : public Test
{
    public:
        Test_simple(int, int, int, std::string respuesta, std::string respuestapersona);
        int evaluate() override;
};

#endif // TEST_SIMPLE_H
