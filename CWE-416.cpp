//Potential use after free

#include "iostream"
using namespace std;

#define SIZE 20
int main(int argc, char** argv)
{
	//Potential use after free
	
	char* buf = new char[SIZE];
	bool error = true; //assume  error
	if (error) {
		free(buf); //error handling has freed the buffer
	}

	//log_contents(buf); //but it is still used here for logging
	cout << buf;
}