#include "Array.hpp"

int main()
{
    std::cout << "===== TEST CONSTRUCTOR EMPTY =====" << std::endl;
    Array<int> empty;

    std::cout << "Size: " << empty.size() << std::endl;


    std::cout << "\n===== TEST CONSTRUCTOR WITH SIZE =====" << std::endl;
    Array<int> numbers(5);

    std::cout << "Size: " << numbers.size() << std::endl;

    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        numbers[i] = i * 10;
    }

    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        std::cout << "numbers[" << i << "] = "
                  << numbers[i] << std::endl;
    }


    std::cout << "\n===== TEST COPY CONSTRUCTOR =====" << std::endl;

    Array<int> copy(numbers);

    std::cout << "Original first element: "
              << numbers[0] << std::endl;

    std::cout << "Copy first element: "
              << copy[0] << std::endl;

    // Modification de la copie
    copy[0] = 999;

    std::cout << "After modifying copy:" << std::endl;
    std::cout << "Original[0] = "
              << numbers[0] << std::endl;

    std::cout << "Copy[0] = "
              << copy[0] << std::endl;


    std::cout << "\n===== TEST ASSIGNMENT OPERATOR =====" << std::endl;

    Array<int> assigned;

    assigned = numbers;

    std::cout << "Assigned[1] = "
              << assigned[1] << std::endl;

    assigned[1] = 777;

    std::cout << "After modifying assigned:" << std::endl;

    std::cout << "Original[1] = "
              << numbers[1] << std::endl;

    std::cout << "Assigned[1] = "
              << assigned[1] << std::endl;


    std::cout << "\n===== TEST CONST OPERATOR[] =====" << std::endl;

    const Array<int> constArray(numbers);

    std::cout << "constArray[2] = "
              << constArray[2] << std::endl;


    std::cout << "\n===== TEST EXCEPTION =====" << std::endl;

    try
    {
        std::cout << numbers[100] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: "
                  << e.what() << std::endl;
    }


    std::cout << "\n===== TEST WITH STRING =====" << std::endl;

    Array<std::string> words(3);

    words[0] = "Hello";
    words[1] = "42";
    words[2] = "CPP";

    for (unsigned int i = 0; i < words.size(); i++)
    {
        std::cout << words[i] << std::endl;
    }


    std::cout << "\n===== END TEST =====" << std::endl;

    return 0;
}