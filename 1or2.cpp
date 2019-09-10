#include <iostream>
#include <cstdlib>
using namespace std;
	int score=10;
	int vnum;
int game(){
	cin>>vnum;
	int rnum=rand()%2+1;
	if(rnum==vnum){
		system("cls");
		cout<<"umnica,ti ugadal"<<endl;
		cout<<"Ti vibral chislo:"<<vnum<<"  ,a zagadal ya chislo:"<<rnum<<endl;
		score=score+1;
		cout<<"/////////////////////////"<<endl;
		cout<<"tvoi schet :"<<score<<endl;
		cout<<"davai eshe popitku"<<endl;
		rnum=rand()%2+1;
		game();
	}else if(vnum>2){
		system("cls");
		cout<<"Ti vibral ne dopustimoe chislo,no ya tebya proshyayu"<<endl;
		cout<<"Viberi 1 ili 2 eshe raz))"<<endl<<endl<<endl;
		game();
	}else{
		system("cls");
		cout<<"ne v etot rez,solnce"<<endl;		
		cout<<"Ti vibral chislo:"<<vnum<<"  ,a zagadal ya chislo:"<<rnum<<endl;
		score=score-1;
		cout<<"/////////////////////////"<<endl;
		cout<<"tvoi schet :"<<score<<endl;
		cout<<"davai eshe popitku"<<endl<<endl<<endl;
		rnum=rand()%2+1;
		game();
	};
}
int main(){
	cout<<endl<<"/////////VIBERI CHISLO 1 ILI 2/////////";
	cout<<endl<<"////////tvoy nachalnyj schet:10////////";
	cout<<endl<<"esli scet budet menshe 0,to ti proigral"<<endl<<endl;
	game();
}
