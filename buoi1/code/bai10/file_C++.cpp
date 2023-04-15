#include <iostream>
#include <fstream>
using namespace std;

int n;
int mang[100];

void writeFile() {
    ofstream  file;    // tao doi tuong file
    file.open("result.dat");    // mo file v� neu file kh�ng ton tai, se tao mot file moi

    if (file.is_open()) {    // kiem tra xem file d� duoc mo hay chua
    	for(int i=0;i<n;i++){
    		file << mang[i] << " ";    // ghi noi dung v�o file
		}
	    file << endl;  
        file.close();    // d�ng file
    }
    else {
        cout << "Unable to open file";    // th�ng b�o loi neu kh�ng the mo file
    }
}

void readFile() {
    ifstream file;    // tao doi tuong file
    file.open("data1.dat");    // mo file
    if (file.is_open()) {   
    	file >> n;
    	for(int i=0;i<n;i++){
    		file >> mang[i];
		}
        file.close();    // d�ng file
    }
    else {
        cout << "Unable to open file";    // th�ng b�o loi neu kh�ng the mo file
    }
}

int main(){
	writeFile();
	readFile();
	return 0;
}
