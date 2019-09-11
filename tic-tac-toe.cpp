#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string>
#include <conio.h>
#include <stack>
#include <map>
using namespace std;
char number[9];
int i=0;
string first;
string second;
int fpoint=0;
int spoint=0;
int nich(),winx(),wino(),main(),winner(),game();
int game(){
	system("cls");
	cout<<"                          "<< number[1] << "|" << number[2] << "|" << number[3]<<"                          "<<first<<"    "<<second<<endl;
	cout<<"                          "<< "-----" <<"                          "<<fpoint<<"            "<<spoint<<endl;
	cout<<"                          "<< number[4] << "|" << number[5] << "|" << number[6]<<endl;
	cout<<"                          "<< "-----" <<endl;
	cout<<"                          "<< number[7] << "|" << number[8] << "|" << number[9]<<endl;
	winner();
};
int main(){
	system("chcp 1251 >> null");
	if(first.empty()){
		cout<<"ââåäèòå èìÿ ïåðâîãî èãðîêà"<<endl;
		cin>>first;
		cout<<"ââåäèòå èìÿ âòîðîãî èãðîêà"<<endl;
		cin>>second;
	}
	int kv;
	cout<<"Íàïèøèòå íîðìåð ïîçèöèè, êóäà âû õîòèòå ïîñòàâèòü -";
	if(i%2==0){
		cout<<" êðåñòèê"<<endl;
	}
	else{
		cout<<" íîëèê"<<endl;
	};
	cin>>kv;
	if(number[kv]!='\0' or kv>9){
		system("cls");
		cout<<"Ýòîé  ïîçèöèè íå ñóùåñòâóåò èëè  óæå çàíÿòà, ïîïðîáóé åùå ðàç"<<endl;
		Sleep(3000);
		game();
	}
	else if(i%2==0){
		number[kv]='x';
		
		i++;
		game();
	}
	else{
		number[kv]='o';
		i++;
		game();
	};
}
int winner(){
	if((number[1]=='x')&&(number[2]=='x')&&(number[3]=='x')){
		winx();
	}
	else if((number[4]=='x')&&(number[5]=='x')&&(number[6]=='x')){
		winx();
	}
	else if((number[7]=='x')&&(number[8]=='x')&&(number[9]=='x')){
		winx();
	}
	else if((number[1]=='x')&&(number[5]=='x')&&(number[9]=='x')){
		winx();
	}
	else if((number[3]=='x')&&(number[5]=='x')&&(number[7]=='x')){
		winx();
	}
	else if((number[1]=='x')&&(number[4]=='x')&&(number[7]=='x')){
		winx();
	}
	else if((number[2]=='x')&&(number[5]=='x')&&(number[8]=='x')){
		winx();
	}
	else if((number[3]=='x')&&(number[6]=='x')&&(number[9]=='x')){
		winx();
	}
	else if((number[1]=='o')&&(number[2]=='o')&&(number[3]=='o')){
		wino();
	}
	else if((number[4]=='o')&&(number[5]=='o')&&(number[6]=='o')){
		wino();
	}
	else if((number[7]=='o')&&(number[8]=='o')&&(number[9]=='o')){
		wino();
	}
	else if((number[1]=='o')&&(number[4]=='o')&&(number[7]=='o')){
		wino();
	}
	else if((number[2]=='o')&&(number[5]=='o')&&(number[8]=='o')){
		wino();
	}
	else if((number[3]=='o')&&(number[6]=='o')&&(number[9]=='o')){
		wino();
	}
	else if((number[1]=='o')&&(number[5]=='o')&&(number[9]=='o')){
		wino();
	}
	else if((number[3]=='o')&&(number[5]=='o')&&(number[7]=='o')){
		wino();
	}
	else if(i==9){
		nich();
	}
	else{
		main();
	}
}
int winx(){
		system("cls");
		cout<<"ã¬ã==¬ã===¬ã===¬ã==¬ã====¬ã==¬ã==¬"<<endl;
		cout<<"¦¦¦ã=-¦ã=¬¦¦ã==-¦ã=-L=¬ã=-L¬ã-¦ã=-"<<endl;
		cout<<"¦L-¦--¦L=-¦¦L==¬¦L=¬--¦¦---¦¦-¦¦"<<endl;
		cout<<"¦ã¬¦--¦ã¬ã-¦ã==-L=¬¦--¦¦---¦¦-¦¦"<<endl;
		cout<<"¦¦¦L=¬¦¦¦¦-¦L==¬ã=-¦--¦¦--ã-L¬¦L=¬"<<endl;
		cout<<"L-L==-L-L--L===-L==---L---L==-L==-"<<endl;
		cout<<"ã===¬ã==¬ã==¬-ã===¬ã==¬-ã==¬ã¬"<<endl;
		cout<<"¦ã=¬¦¦ã¬¦¦ã¬¦-¦ã==-¦ã¬L¬L¬ã-¦¦"<<endl;
		cout<<"¦L=-¦¦¦¦¦¦L-L¬¦L==¬¦¦L¬¦-¦¦-¦¦"<<endl;
		cout<<"¦ã==-¦¦¦¦¦ã=¬¦¦ã==-¦¦-¦¦-¦¦-¦¦"<<endl;
		cout<<"¦¦---¦L-¦¦L=-¦¦L==¬¦L=-¦ã-L¬¦L=¬"<<endl;
		cout<<"L----L==-L===-L===-L===-L==-L==-"<<endl<<endl;
		cout<<"Åñëè õî÷åøü ïîèãðàòü åùå íàæìè - 'y'"<<endl;
		fpoint=fpoint+1;
		char rest;
		cin>>rest;
		if(rest=='y'){
			memset(number, 0, sizeof(char)*10);
			i=0;
			game();
		}
		else{
			cout<<"                Ïîêà-Ïîêà, áóäó æäàòü åùå";
			
		};
}
int wino(){
		system("cls");
		cout<<"ã¬-ã¬ã==¬ã¬--ã==¬ã¬ã==¬"<<endl;
		cout<<"¦L=-¦¦ã¬¦¦¦--L¬ã-¦¦¦ã=-"<<endl;
		cout<<"¦ã¬-¦¦¦¦¦¦¦---¦¦-¦L-¦"<<endl;
		cout<<"¦¦L¬¦¦¦¦¦¦¦---¦¦-¦ã¬¦"<<endl;
		cout<<"¦¦-¦¦¦L-¦¦L=¬ã-L¬¦¦¦L=¬"<<endl;
		cout<<"L--L-L==-L==-L==-L-L==-"<<endl;
		cout<<"ã===¬ã==¬ã==¬-ã===¬ã==¬-ã==¬ã¬"<<endl;
		cout<<"¦ã=¬¦¦ã¬¦¦ã¬¦-¦ã==-¦ã¬L¬L¬ã-¦¦"<<endl;
		cout<<"¦L=-¦¦¦¦¦¦L-L¬¦L==¬¦¦L¬¦-¦¦-¦¦"<<endl;
		cout<<"¦ã==-¦¦¦¦¦ã=¬¦¦ã==-¦¦-¦¦-¦¦-¦¦"<<endl;
		cout<<"¦¦---¦L-¦¦L=-¦¦L==¬¦L=-¦ã-L¬¦L=¬"<<endl;
		cout<<"L----L==-L===-L===-L===-L==-L==-"<<endl<<endl;
		cout<<"Åñëè õî÷åøü ïîèãðàòü åùå íàæìè - 'y'"<<endl;
		spoint=spoint+1;		
		char rest;
		cin>>rest;
		if(rest=='y'){
			memset(number, 0, sizeof(char)*10);
			i=0;
			game();
		}
		else{
			cout<<"                Ïîêà-Ïîêà, áóäó æäàòü åùå";
			
		};
}
int nich(){
		system("cls");
		cout<<"êàê-òî ïîëó÷èëàñü íè÷üÿ)"<<endl;
		cout<<"Åñëè õî÷åøü ïîèãðàòü åùå íàæìè - 'y'"<<endl;
		char rest;
		cin>>rest;
		if(rest=='y'){
			memset(number, 0, sizeof(char)*10);
			i=0;
			game();
		}
		else{
			cout<<"                Ïîêà-Ïîêà, áóäó æäàòü åùå";
			
		};
}

