#include <iostream>
#include <fstream>
using namespace std;

int n;
int mang[100];

void writeFile() {
    ofstream  file;    // tao doi tuong file
    file.open("result.dat");    // mo file và neu file không ton tai, se tao mot file moi

    if (file.is_open()) {    // kiem tra xem file dã duoc mo hay chua
    	for(int i=0;i<n;i++){
    		file << mang[i] << " ";    // ghi noi dung vào file
		}
	    file << endl;  
        file.close();    // dóng file
    }
    else {
        cout << "Unable to open file";    // thông báo loi neu không the mo file
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
        file.close();    // dóng file
    }
    else {
        cout << "Unable to open file";    // thông báo loi neu không the mo file
    }
}

int main(){
	writeFile();
	readFile();
	return 0;
}
