#include <iostream>
#include <windows.h>
using namespace std;
 
int main(){
	setlocale(0,"");
	int x,y,speed;
	cout<<"������� ����� ���� : ";
	cin>>x;
	cout<<"������� ������ ���� : ";
	cin>>y;
	cout<<"������� �������� ���������� ������ ������(� ��) : ";
	cin>>speed;
	char ArrMain[y][x];
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			ArrMain[i][j]=0;
			
		}
	}
	for(int i=0;i<=x;i++){
		if(i%2==0){
			for(int j=0;j<y;j++){
				for(int i1=0;i1<y;i1++){
					for(int j1=0;j1<x;j1++){
						cout<<ArrMain[i1][j1]<<"|";
					}
					cout<<endl;
				}
			ArrMain[j][i]=43;
			Sleep(speed);
			if(j==y-1 and i==x){
				return 0;
			}
			system("cls");
			}
		}else{
			for(int j=y;j>=0;j--){
				for(int i1=0;i1<y;i1++){
					for(int j1=0;j1<x;j1++){
						cout<<ArrMain[i1][j1]<<"|";
					}
					cout<<endl;
				}
			ArrMain[j][i]=43;
			Sleep(speed);
			if(j==y-1 and i==x){
				return 0;
			}
			system("cls");
			}
		}
		
	}
}
