#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string>
#include <conio.h>
#include <stack>
#include <map>
#include <time.h>
using namespace std;
char number[9];
string first;
string second;
int fpoint=0;
int spoint=0;
int i,n,f=0;
char sele;
int nich(),winx(),wino(),main(),winner(),game(),vibor();
int game(){
	system("cls");
	cout<<"                          "<< number[1] << "|" << number[2] << "|" << number[3]<<endl;
	cout<<"                          "<< "-----" <<endl;
	cout<<"                          "<< number[4] << "|" << number[5] << "|" << number[6]<<endl;
	cout<<"                          "<< "-----" <<endl;
	cout<<"                          "<< number[7] << "|" << number[8] << "|" << number[9]<<endl<<endl;
	cout<<"        СЧЕТ    "<<first<<" - "<<fpoint<<"  :  "<<second<<" - "<<spoint<<endl<<endl;
	winner();
};
int main(){
	system("chcp 1251 >> null");
	if(first.empty()){
		cout<<"введите имя первого игрока"<<endl;
		cin>>first;
		cout<<"введите имя второго игрока"<<endl;
		cin>>second;
	}
	if(i==0){
		vibor();
	}
	int kv;
	cout<<"Напишите нормер позиции, куда вы хотите поставить -";
	if(i%2==0){
		cout<<" крестик"<<endl;
	}
	else{
		cout<<" нолик"<<endl;
	};
	cin>>kv;
	if(number[kv]!='\0' or kv>9){
		system("cls");
		cout<<"Этой  позиции не существует или  уже занята, попробуй еще раз"<<endl;
		Sleep(3000);
		game();
	}
	else if(i%2==0){
		number[kv]='x';
		n++;
		i++;
		game();
	}
	else{
		number[kv]='o';
		n++;
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
	else if(n==9){
		nich();
	}
	else{
		main();
	}
}
int winx(){
		system("cls");
		if(f==0 and sele=='x'){
			fpoint=fpoint+1;
			cout<<"Игрок "<<first<<" победил играя за Крестик"<<endl<<endl;
		}else if(f==1 and sele=='x'){
			spoint=spoint+1;
			cout<<"Игрок "<<second<<" победил играя за Крестик"<<endl<<endl;
		}
		cout<<"Если хочешь поиграть еще нажми - 'y'"<<endl;
		char rest;
		cin>>rest;
		if(rest=='y'){
			memset(number, 0, sizeof(char)*10);
			i=0;
			n=0;
			game();
		}
		else{
			cout<<"                Пока-Пока, буду ждать еще";
			
		};
}
int wino(){
		system("cls");
		if(f==0 and sele=='o'){
			fpoint=fpoint+1;
			cout<<"Игрок "<<first<<" победил играя за Нолик"<<endl<<endl;
		}else if(f==1 and sele=='o'){
			spoint=spoint+1;
			cout<<"Игрок "<<second<<" победил играя за Нолик"<<endl<<endl;
		}
		cout<<"Если хочешь поиграть еще нажми - 'y'"<<endl;
		char rest;
		cin>>rest;
		if(rest=='y'){
			memset(number, 0, sizeof(char)*10);
			i=0;
			n=0;
			game();
		}
		else{
			cout<<"                Пока-Пока, буду ждать еще";
			
		};
}
int nich(){
		system("cls");
		cout<<"как-то получилась ничья)"<<endl;
		cout<<"Если хочешь поиграть еще нажми - 'y'"<<endl;
		char rest;
		cin>>rest;
		if(rest=='y'){
			memset(number, 0, sizeof(char)*10);
			i=0;
			n=0;
			game();
		}
		else{
			cout<<"                Пока-Пока, буду ждать еще";
			
		};
}
int	vibor(){
		srand(time(0));
		f=rand()%2;
		if(f==0){
			cout<<"игрок - "<<first<<", получает возможность выбрать кем он играет, напишити 'x' или 'o'"<<endl;
			cin>>sele;
			if(sele=='x'){
				i=2;
				main();
			}
			else if(sele=='o'){
				i=1;
				main();
			}
			else{
				cout<<"ты выбрал недопустимое значение"<<endl;
				vibor();
			}
		}
		else if(f==1){
			cout<<"игрок - "<<second<<", получает возможность выбрать кем он играет, напишити 'x' или 'o'"<<endl;
			cin>>sele;
			if(sele=='x'){
				i=2;
				main();
			}
			else if(sele=='o'){
				i=1;
				main();
			}
			else{
				cout<<"ты выбрал недопустимое значение"<<endl;
				vibor();
			}
		}
}
