#include <iostream>
#include <fstream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

int matrix[ROWS][COLS] = {}; // t?o ma tr?n r?ng v?i k�ch thu?c 3x3
string tenFile = "example.txt";

void writeFile() {
    ofstream  file;    // tao doi tuong file
    file.open(tenFile.c_str());    // mo file v� neu file kh�ng ton tai, se tao mot file moi

    if (file.is_open()) {    // kiem tra xem file d� duoc mo hay chua
    	for(int i=0;i<ROWS;i++){
    		for(int j=0;j<COLS;j++){
    			file << 1 << " ";    // ghi noi dung v�o file
			}
			file << endl;
		}
	        
        file.close();    // d�ng file
    }
    else {
        cout << "Unable to open file";    // th�ng b�o loi neu kh�ng the mo file
    }

}

void readFile() {
    ifstream file;    // tao doi tuong file
    file.open(tenFile.c_str());    // mo file
	
	 int arr[10];
        int i=0;
	
    if (file.is_open()) {    // kiem tra xem file d� dudc mo hay chua
       	for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                file >> matrix[i][j];    // d?c t?ng ph?n t? c?a ma tr?n t? file
            }
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
	for(int i=0;i<ROWS;i++){
    	for(int j=0;j<COLS;j++){
    		cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
