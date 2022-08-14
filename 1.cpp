#include <iostream>
#include <fstream>
int main()
{
    std::string line;
    std::ifstream file("myFile.txt");
    int num = 0;
    if (file.is_open())
    {
        while (getline(file,line))
        {
            num += stoi(line);
        }
        file.close();
    }
    std::cout << num << std::endl;
}
