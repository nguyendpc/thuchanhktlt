#include <iostream>
#include <fstream>
using namespace std;

int createFile(){
	// Create and open a text file
  	ofstream MyFile("filename.txt");

  	// Write to the file
  	MyFile << "Files can be tricky, but it is fun enough!";

  	// Close the file
  	MyFile.close();
}

void readFile(){
	// Create a text string, which is used to output the text file
	string myText;
	
	// Read from the text file
	ifstream MyReadFile("filename.txt");
	
	// Use a while loop together with the getline() function to read the file line by line
	while (getline (MyReadFile, myText)) {
	  // Output the text from the file
	  cout << myText;
	}
	
	// Close the file
	MyReadFile.close();
}

void readFileStep(){
	string valueOfText;

	ifstream readFile("filename.txt");
	if(readFile.is_open()){
		while(  !readFile.eof() ){
			readFile >> valueOfText; // sets EOF flag if no value found
			cout << "The next number is " << valueOfText << endl;
		}
		readFile.close();
	}else{
		cout << "không mo duoc";
	}
}


void readFileChar(){
	ifstream MyReadFile("filename.txt");     // open file
	char c;
	while (MyReadFile.get(c))          // loop getting single characters
		cout << c;
	MyReadFile.close();   
}

int main() {
	//createFile();
	//readFile();
	//readFileStep();
	readFileChar();
	return 0;
}
