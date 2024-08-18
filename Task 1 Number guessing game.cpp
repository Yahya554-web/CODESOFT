#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
srand(static_cast<unsigned int>(time(0)));
int targetnumber=rand()%100+1;
int userguess=0;
cout<<"welcome to number guessing game by Codesoft\n";
cout<<"guess number between 1 to 100:";
cin>>userguess;
while(userguess!=targetnumber){
	if(userguess<targetnumber){
		cout<<"To low:Try again"<<endl;
	}
	else{
		cout<<"To high:try again"<<endl;
	}
	cout<<"enter your guess=";
	cin>>userguess;
}
cout<<"congratulations you won"<<endl;
return 0;
}
