#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main() {
    string line;
    ifstream myfile("dataa.txt");
    try{
        if(myfile.is_open()){
            while(getline(myfile, line)){
                cout << line << endl;
            }
            myfile.close();
        }
        else{ 
            throw(1);
        }
    }
    catch(int e){
        cout << "Exeption num " << e;
        cout << "\nUnable to open";

    }

    return 0;
}