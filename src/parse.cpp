#include <string> 
#include <iostream>
#include <string.h>

using namespace std;

void parse_input(char** args, const string& usrIn){
	if(usrIn.size() == 0){
		return;
	}
	else{
		char* usrCstr = new char [usrIn.length()+1];
		strcpy (usrCstr, usrIn.c_str());
		char* temp = strtok(usrCstr, " ");
		int curr = 0;
		while (temp != 0){
			args[curr] = temp;
			++curr;
			temp = strtok(NULL, " ");
		}
		delete[] usrCstr;
		return;
	}
}

int main()
{
	return 0;
}
