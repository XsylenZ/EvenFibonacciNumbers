#include <iostream>

const uint32_t MAX_FIBONACCI_NR = 4000000;

uint32_t sumOfEvenFibonacciNumbers( uint32_t maxNumber);

int main()
{
    std::cout << "The sum of even-valued fibonacci terms: " << sumOfEvenFibonacciNumbers( MAX_FIBONACCI_NR ) << std::endl;

    return 0;
}

uint32_t sumOfEvenFibonacciNumbers( uint32_t maxNumber)
{
    uint32_t sum = 0;
    uint32_t first = 1;
    uint32_t second = 1;
    uint32_t third = first + second;

    while (third <= maxNumber)
    {
        // Every third Fibonacci number is even
        sum += third;
        first = second + third;
        second = third + first;
        third = first + second;
    }

    return sum;
}