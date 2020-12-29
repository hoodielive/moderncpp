#include <iostream>
#include <fstream>

// Output to file, if file does not exist, create it.
// Text or Binary.

int main()
{
    std::string data = "This is data. \n This is a new Line.";
    std::string fileName = "myFile.txt";
    std::ofstream outFile;

    outFile.open(fileName.c_str());

    if (outFile.is_open())
    {
        std::cout << data.c_str() << std::endl;
    }

    outFile.close();
    
    return 0;
}