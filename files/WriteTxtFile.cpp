#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outFile;
    string fileName = "text.txt";

    outFile.open(fileName);

    if(outFile.is_open())
    {
        outFile << "Hello There :)" << endl;
        outFile << "123" << endl;
    }else{
        cout << "Could not create file: " << fileName << endl;
    }

    return 0;
}

