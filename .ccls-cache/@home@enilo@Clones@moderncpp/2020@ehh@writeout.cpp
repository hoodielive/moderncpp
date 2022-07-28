#include <iostream>
#include <fstream>
#include <string>

// Output to file, if file does not exist, create it.
// Text or Binary.

int main()
{
    int age = 23;
    double height = 1.75;

    std::string data = "This is data. \n This is a new Line.";
    std::string name = "Larry";
    std::string address = "Somewhere in the world.";
    std::string fileName = "myPersonDatabase.txt";

    std::ofstream outFile;

    outFile.open(fileName.c_str());

    if (outFile.is_open())
    {
        outFile << name 
        <<  "\n" 
        << age 
        << "\n"
        << address 
        << "\n"
        << height 
        << "\n";
    }

    outFile.close();
    
    return 0;
}