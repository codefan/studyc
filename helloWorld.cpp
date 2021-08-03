#include <iostream>
#include <fstream>
using namespace std;
 
int main() {
    ifstream infile;
    infile.open("chBuf.txt", ios::in);
    char chBuf[1024];
    infile.read(chBuf, 1024);
    cout << chBuf << endl;
    infile.close();
}