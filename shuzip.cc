/*****************************************************************
** Shuzhou ShuZip 20.07                                         **
** (c)2020 Shuzhou Foundation. All rights reserved.             **
** Shuzhou ShuZip is open-sourced and downloadable at our github**
** page: (https://shuzhoufoundation.github.io/ShuZip).          **
** Or you can download it from releases. If you want to use it  **
** as a function like "git" or something, it is recommended that**
** you should use our installer to install it and then you can  **
** enter a command like "shuzip help" to help in the Command    **
** Prompt. You can also download it on /releases.               **
*****************************************************************/ 
#include "shuzip.h"
using namespace ShuHash;
int main(){
	string choice;
	cin >> choice;
	if (choice == "help") ShuZipHelp();
	if (choice == "clone"){
		cin >> choice;
		if (choice == "ff") system ("git clone https://github.com/chromium/chromium.git");
		if (choice == "aa") system ("git clone https://github.com/shuzhoufoundation/shuzip.git");
		if (choice == "ee") ShellExecute (0,"open","https://github.com/ShuzhouFoundation/ShuZip/archive/master.zip",NULL,NULL,NULL);
	}
	if (choice == "generate"){
	generate_random_shuhash(QWORD);//We are using 64-bit currently.
	cout <<"Enter your ShuHash:";
	string ShuHash;
	cin >> ShuHash;
	ShuZipGenerate (HEX,ShuHash);
  }
}
