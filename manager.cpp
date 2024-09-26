#include <stdio.h>
#include <filesystem>
#include <unistd.h>
#include <iostream>
#include <cstdlib>
#include <ncurses.h>
#include <dirent.h>
#include <cstring>

using namespace std;


void printDirs(){

	DIR *dir = opendir(".");
	struct dirent *entry  =readdir(dir);
	
	while(entry!=NULL){
		if(entry->d_type == DT_DIR){
			if(strcmp(entry->d_name,".") && strcmp(entry->d_name,"..") && strcmp(entry->d_name,".git")){
			printw("%s\n\n",entry->d_name);
		}}
	entry = readdir(dir);	
	}
	printw("----------\n");
	free(entry);
	closedir(dir);
}

string getString(){
	char buffer[100];
	getnstr(buffer, 100-1);
	buffer[100-1] = '\0';
	return string(buffer);
}

void exec(string folderName){

	std::filesystem::path filePathEXEC = std::filesystem::path(folderName) / "./app";

	string exec = filePathEXEC.string();

	string make = "make -C" + folderName; 
	

	int result = system(make.c_str());

	if(result == 0){
		
		printw("\nBuild Succesful \n"); 

	}else{
		endwin(); 
		std::cout << "Build FAILED" << endl; exit(1); 
	}
	refresh();
	endwin();

	int result1 = system(exec.c_str());

		
	if(result1 == 0){
		
		cout << "\n\nRunned succesfully, press Enter to continue" << endl;

		getch();

		initscr();	

	}else{
		endwin(); 
		std::cout << "Run FAILED" << endl; exit(1); 
	}


}

int main(void){

	initscr();
	clear();
	
	char c=' ';
	clear();
	printw("q - quit 1 - choose app to start\n");
	printw("\n----------\n\n");	
	printDirs();
	refresh();	
	do{
	clear();
	printw("q - quit 1 - choose app to start\n");
	printw("\n----------\n\n");	
	printDirs();		
	c = getchar();
	
	if(c=='1'){
		printw("\nType folder name please\n");
		string folder = getString();
		exec(folder);	
	}
	

	refresh();
	}while(c!='q');	

	endwin();
	
	return 0;

}
