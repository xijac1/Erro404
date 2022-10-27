// we will create our project here

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    cout << "Hello please enter your name: ";
    getline(cin, name);
    
    cout << name << " how may i help you?" << endl;
}