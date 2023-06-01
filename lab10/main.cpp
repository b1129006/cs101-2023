#include <iostream>
#include <fstream>
using namespace std;

class myString {
    private:
        string m_str;
    public:
        myString(string s){
            m_str = s;
        }
};

class ReadClass {
    public:
    string showclass(){
        ifstream in;
        string line;
        int n = 0;
        in.open("main.cpp");
        if(in.fail()) {
            cout << "Error opening a file" << endl;
            in.close();
        }
        while(getline(in, line)){
            if(line.find("class ") != string::npos && line.find("class ", 0) == 0){
                n = n + 1;
                int one = line.find_first_of(" ");
                int two = line.find_first_of("{");
                cout << "class " << line.substr(one+1, two-2-one) << endl;
            }
        }
        cout << n << " class in main.cpp" << endl;
        return "";
    }
};

int main(){
    ReadClass rfile;
    rfile.showclass();
    return 0;
}