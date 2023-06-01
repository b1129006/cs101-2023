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
            }
        }
        cout << n << " class in main.cpp" << endl;
        
        ifstream out;
        string line2;
        out.open("main.cpp");
        if(out.fail()){
            cout << "Error opening a file" << endl;
            out.close();
        }
        while(getline(out, line2)){
            if(line2.find("class ") != string::npos && line2.find("class ", 0) == 0){
                int one = line2.find_first_of(" ");
                int two = line2.find_first_of("{");
                cout << "class " << line2.substr(one+1, two-2-one) << endl;
            }
        }
        return "";
    }
};

int main(){
    ReadClass rfile;
    rfile.showclass();
    return 0;
}