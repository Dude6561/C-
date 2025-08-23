#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream inFile("example.txt", ios::in);
    inFile.seekg(0, ios::end);
    cout<<"file Size" << inFile.tellg()<<"bytes"<<endl;
    inFile.seekg(5, ios::beg);
    char ch;
    inFile.get(ch);
    cout<<"the character at position 6 is"<<ch<<endl;
    inFile.close();
    return 0;
}
