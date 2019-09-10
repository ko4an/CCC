#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string>
#include <conio.h>
#include <string.h>
using namespace std;
char number[9];
int i=0;
int winx();
int wino();
int main();
int winner();
int game(){
	system("cls");
	cout<<"                          "<< number[1] << "|" << number[2] << "|" << number[3]<<endl;
	cout<<"                          "<< "-----" <<endl;
	cout<<"                          "<< number[4] << "|" << number[5] << "|" << number[6]<<endl;
	cout<<"                          "<< "-----" <<endl;
	cout<<"                          "<< number[7] << "|" << number[8] << "|" << number[9]<<endl;
	Sleep(1000);
	winner();
};
int main(){
	int kv;
	cout<<"Napishite nomer pozicii, kuda vi hotite postavit:";
	if(i%2==0){
		cout<<" krestik"<<endl;
	}
	else{
		cout<<" nolik"<<endl;
	};
	cin>>kv;
	if(number[kv]!='\0' or kv>9){
		system("cls");
		cout<<"Eta  poziciya zanyata ili ee ne sushestvuet, viberi druguy"<<endl;
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
	}else{
		main();
	}
}
int winx(){
		system("cls");
		setlocale(LC_ALL,"Rus");
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
		cout<<"esli hochesh poigrat eshe najmi 'y'"<<endl;
		char rest;
		cin>>rest;
		if(rest=='y'){
			memset(number, 0, sizeof(char)*10);
			i=0;
			game();
		}
		else{
			cout<<"                Poka Poka, budu jdat eshe";
			
		};
}
int wino(){
		system("cls");
		setlocale(LC_ALL,"Rus");
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
		cout<<"esli hochesh poigrat eshe najmi 'y'"<<endl;
		char rest;
		cin>>rest;
		if(rest=='y'){
			memset(number, 0, sizeof(char)*10);
			i=0;
			game();
		}
		else{
			cout<<"                Poka Poka, budu jdat eshe";
			
		};
}
