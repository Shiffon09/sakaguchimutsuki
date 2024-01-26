#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
   const int arraySize = 10;
   int data[arraySize];

   std::srand(static_cast<unsigned int>(std::time(0)));

   for (int i = 0; i < arraySize; ++i)
   {
      data[i] = std::rand();
   } 
   

   for (int i = 0; i < arraySize; ++i)
   {
    std::cout << "data["<< i <<"] =" << data[i] << std::endl;
   }

   return 0;
}