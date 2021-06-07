#include <iostream>
#include <fstream>
#include <string>

int main()
{
    const char* fileName = "myFile.txt";

    std::ifstream inFile(fileName);
    std::string line = "";

    if (inFile.is_open())
    {
       while (std::getline(inFile, line))
       {
         std::cout << line << std::endl;
       }
    }
    else
    {
        std::cout << "Could not open file." << fileName << std::endl;
    }

   inFile.close(); 

    return 0;
}