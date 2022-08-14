//Day2.2
#include <iostream>
#include <fstream>

int main()
{
    std::string line;
    std::fstream myFile("point.txt", std::ios::in | std::ios::out | std::ios::app);
    std::fstream File("result.txt", std::ios::in | std::ios::out | std::ios::app);
     if (myFile.is_open() && File.is_open())
     {
        std::cout << "The file is opened" << std::endl;
        while (myFile >> line)
        {
            myFile >> line;
            if (line[0] >= 'a' && line[0] <= 'z')
            {
                line[0] -= 32;
            }
            File << line << " ";
        }
    }
    else
    {
       std::cout << "Error" << std::endl;
    }
    myFile.close();
    File.close();
}
