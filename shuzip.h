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
//ShuZip.h
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h> 
#include <fstream>
namespace ShuHash{
	using namespace std;
	typedef int var;
	typedef void function;
	typedef bool io;
	typedef long lg;
	typedef long long lnlg;
	typedef float num;
	typedef char chr;
	typedef const char* cstchr;
	#define DWORD 32
	#define QWORD 64
	#define dword 32
	#define qword 64
	#define HEX 16
	#define DEC 10
	#define hex 16
	#define dec 10
	#define OCT 8
	#define oct 8
	#define BIN 2
	#define bin 2
}
using namespace ShuHash;
ShuHash::function generate_random_shuhash(ShuHash::var ShuHashBits){
		//ShuHashBits is usually set to 32-bits.
		srand (time(0));
		ShuHash::var numhash;
		for (; ShuHashBits > 0 ; --ShuHashBits){
		numhash = rand() % 16;
		if (numhash <= 9) cout << numhash;
		if (numhash >= 10){
			if (numhash == 10) cout << "a";
			if (numhash == 11) cout << "b";
			if (numhash == 12) cout << "c";
			if (numhash == 13) cout << "d";
			if (numhash == 14) cout << "e";
			if (numhash == 14) cout << "f";
		}
		}
	}
ShuHash::function ShuZipHelp(){
	cout << "ShuZip Help"<<endl;
	cout << "Command                  What does it do"<<endl;
	cout << "________________________________________"<<endl;
	cout << "clone                    Downloads the ShuZips that you need."<<endl;
	cout << "generate                 Make a ShuZip yourself! Exciting?"<<endl;
	cout << "help                     Ask for help."<<endl;
	cout << "about                    About ShuZip."<<endl;
}
int ShuZipGenerate(int GenerateReturnValue, std::string &text)
{
    std::ofstream log_file(
        "d9wqfiuvq9vq90w8fh12iufiqywg9vqcqwvvqqo0uf9f2ouwenwqqivqhvcry.ShuZip", std::ios_base::out | std::ios_base::app );
    log_file << text;
}
