#include <iostream>

int main()
{
    const int arraySize = 10;
    int myArray[arraySize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Array before shuffle:";
    for (int i = 0; i < arraySize; ++i)
    {
        std::cout << myArray[i] << " ";
    }
     
     return 0;
}
