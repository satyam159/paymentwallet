#include<iostream>
#include<fstream>
#include <sstream> 
#include<cstring>
#include<vector>
#include<string>
using namespace std;
#include<map>
class id{
	public:
		void converter(int i,vector<char> &b){
	vector<int> a;
for(int j=0;j<200;j++){
	if(i!=0){
			a.push_back(i%10);
	i=i/10;
	}
else{
	break;
}
}
	for(int j=a.size()-1;j>=0;j--){
	     char n=48+a[j];
	     b.push_back(n);
	}
}
	int seatno=0;
	int amount=0;
	int wallet=300;
	void seatallow(int number){
		seatno=number;
			ifstream fin;
	fin.open("finalwallet.txt");
string t;
fin>>t;
fin.close();
    stringstream geek(t); 
    int x = 0; 
	    geek >> wallet; 
	}
void print(){
	cout<<"seatno.-"<<seatno<<endl;
	cout<<"amount-"<<amount<<endl;
}
void getdata(){
		map<string,int> station;
	station["ambala"]=0;
	station["sd"]=20;
	station["kuk"]=50;
	station["karnal"]=100;
	station["sonepat"]=150;
	station["delhi"]=200;
  string s1,s2;
  cout<<"enter source";
	cin>>s1;
	cout<<"enter destination";
	cin>>s2;
	int distance=station[s2]-station[s1];
	cout<<"distance-"<<distance<<"km"<<endl;
int price=2;
this->amount=price*distance;
}
void pay(){int wall;
	cout<<"your payment done"<<endl;
	wall=this->wallet-this->amount;
	 cout<<"current wallet balance-"<<wall<<endl;
	 	vector<char> b;
	converter(wall,b);
for(int j=0;j<b.size();j++){
	cout<<b[j];
}
	ofstream fout;
	fout.open("finalwallet.txt",ios::ate);
	for(int j=0;j<b.size();j++){
	fout.put(b[j]);
}
	fout.close();
}
void nopay(){cout<<"your payment cancelled!!";}
bool balance(){
	if(wallet>amount){	return true;
	}
	else{return false;	}
}
};

void converternew(int i,vector<char> &b){
	vector<int> a;
for(int j=0;j<200;j++){
	if(i!=0){
			a.push_back(i%10);
	i=i/10;
	}
else{
	break;
}
}
for(int j=a.size()-1;j>=0;j--){
	     char n=48+a[j];
	     b.push_back(n);
	}
}
int main(){
	int j;	id satyam;int option;
	cout<<"2 for add money and 3 for payment";
	cin>>option;
	if(option==2){
			ifstream fin;
	fin.open("finalwallet.txt");
string t;
fin>>t;
fin.close();
cout<<t;
    stringstream geek(t); 
    int x = 0; 
    geek >> x; 
    int money;
    cout<<"add money";
    cin>>money;
	vector<char> b;
	converternew(money+x,b);
for(int j=0;j<b.size();j++){
	cout<<b[j];
}
	ofstream fout;
	fout.open("finalwallet.txt",ios::ate);
	for(int j=0;j<b.size();j++){
	fout.put(b[j]);
}
	fout.close();
	}
	if(option==3){
			satyam.seatallow(1);satyam.getdata();satyam.print();
	cout<<"enter 1 for pay";
cin>>j;
	if(j==1){
		if(satyam.balance()==true){	satyam.pay();}			
	else{cout<<"sorry!payment cancelled no enough amount in wallent balance "<<endl;}}
else{satyam.nopay();}
	}
	
}
