#include<iostream>
#include<string>
#include"header.h"
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;
int sizeOF;
int size=50;
const double tomato=5.5 ,onion=4.3 ,potato=6.1,water=2.3,coffe=17.09 ,chips=8.7,corn=6.5;
const double soap=3.8 ,bread=5.6 ,egg=2.1 ,kitkat=5.05,lime=7.22 ,milk=23.2 ,tea=8.01;


struct date{
	int day;
	int month;
	int year;
};

void user_in(int arrA[],int &sizeOF){

	
	cout<<"choose your order from the menu :"<<endl;
		for( int i=0;i<sizeOF;i++){
		cin>>*(arrA+i);
		
		
		}
		cout<<"your order now : \n";
		for(int i=0;i<sizeOF;i++){
			
		cout<<*(arrA+i)<<"  "; 
		cout<<endl;
			
		}
			
}




void sort(int arrA[],int &sizeOF){


	int temp;
bool order= false;

	if(sizeOF<2){

cout<<"nothing to sort!";
}
	
else{

for(int i=0 ; i< sizeOF-1 && order==false;++i){
order=true;
for(int j=0 ; j<sizeOF-1 ; ++j)

if(arrA[j]<arrA[j+1]){
order=false;
temp=arrA[j];
arrA[j]=arrA[j+1];
arrA[j+1]=temp;
}
}
}

cout<<"item in ordered from higher to lower :";
for(int i =0 ; i<sizeOF ; i++){
	cout<<arrA[i]<<" ";
	cout<<endl;
}


}



namespace print_m{
	void m(){
cout<<endl;
cout<<"----------menu---------";
cout<<"1-remove item"<<endl<<"2-update item"<<endl<<"3-report bill"<<endl<<"4-calculate price of your products"<<endl;
cout<<"-----------------------";
	cout<<"please enter the number that u want , if you want to exit enter 0 : "<<endl;
}
}




void remove(int arrA[],int &sizeOF){
	int del_item;
	
cout<<"enter items number you want to delete: ";
		cin>>del_item;
	
	for(int i=0 ; i<sizeOF ; i++)
if(arrA[i]==del_item){
for(int j=i ; j<sizeOF ; j++){
arrA[j]=arrA[j+1];

}}

cout<<"item delete,now you have : ";
	for(int i=0 ; i<sizeOF ; i++){
     cout<<arrA[i]<<"  "; 
     cout<<endl;
	}


}


void update(int arrA[],int &sizeOF){
	int update_item;
	int new_item;
cout<<"enter the number of item you want to change:"<<endl;
cin>>update_item;
for(int i=0;i<sizeOF;i++){
	
	if(arrA[i]==update_item){
	
	cout<<"enter new item number :"<<endl;
	cin>>new_item;
	arrA[i]=new_item;
}
	cout<<"list has been updated !!"<<endl;
cout<<"the new list :"<<endl;
for(int i=0;i<sizeOF;i++)
	cout<<arrA[i]<<" ";
		cout<<endl;
	break;
	
}
}
void rotate(int arrA[],int &sizeOF){
	
 int newpo ;
 int temp[sizeOF];
 
	for(int i=0;i<sizeOF;i++){
	
	 	newpo=i+4;
	 	if(newpo>=sizeOF){
	 	newpo=newpo%sizeOF;
	 	temp[newpo]=arrA[i];
		 }
		 
	}
	 cout<<"list after rotate "<<endl;
	 for(int i=0;i<sizeOF;i++){
	 	cout<<temp[i]<<"  ";
	 	cout<<endl;
	 }
	
}


void bill(int arrA[],int &sizeOF){
	
	srand(time(0));
	int bill_num;
bill_num=rand();
cout<<"# "<<bill_num<<endl<<endl;
cout<<" the rotaate: \n";
rotate(arrA, sizeOF);
cout<<"the list now : \n";
sort(arrA,sizeOF);
}





void menuSelection (){
	cout<<"-------super market-------\n";
cout<<"\n 1-tomato \t \t \t 5.5 SAR \n 2-onion \t \t \t 4.3 SAR \n 3-potato \t \t \t 6.1 SAR";
cout<<"\n 4-water \t \t \t 2.3 SAR \n 5-coffe \t \t \t 17.09 SAR \n 6-chips \t \t \t 8.7 SAR \n 7-corn";	
cout<<"\t \t \t \t 6.5 SAR \t \n";
cout<<"\n 8-soap \t \t \t 3.8 SAR \n 9-bread \t \t \t 5.6 SAR \n 10-egg \t \t \t 2.1 SAR";
cout<<"\n 11-kitkat \t \t \t 5.05 SAR \n 12-lime \t \t \t 7.22 SAR \n 13-milk \t \t \t 23.2 SAR \n 14-tea";	
cout<<"\t \t \t \t 8.01 SAR \t \n";	
	 

}



int main(){
	
	string numMobile,mobile[size];
	cout<<"\t \t \t good morning and welcome to our super market!"<<endl<<endl;
	ofstream hfile;
	string x2;
 hfile.open("hfile.txt",ios::out);
 if(hfile.is_open()==true||hfile.is_open()){
 	
 	cout<<"***file opened successfully !!***"<<endl;
 	cout<<" please Enter your Name: \n";
 	cin>>x2;
 	hfile<<x2;
}
 else{	
 	cout<<"not opened";
 }	

 hfile.close();

cout<<"Please Enter your Mobile Number starting from (966),It must consist of 12 digits : \n";
cin>>numMobile;
if(numMobile.substr(0,3)=="966"&&numMobile.length()==12){
for(int x=0;x<size;x++){
	mobile[x]=numMobile;
}
}
else{
	cout<<"Number is not correct! \n";
}

int n,b,y,o;
struct date x;
int arrA[sizeOF];

	cout<<"enter day(integer number) :"<<endl;
	cin>>x.day;
	cout<<"enter the month(integer number):"<<endl;
	cin>>x.month;
	cout<<"enter the year(integer number):"<<endl;
	cin>>x.year;
	cout<<endl;

	cout<<"Enter number of items will purchase: \n";
	cin>>sizeOF;
		menuSelection();
        user_in(arrA,sizeOF);
 


 do{
print_m::m();
cin>>n;
cout<<endl;
	switch(n){
	
		case 1:
		 remove(arrA,sizeOF);
		break;
		
		case 2:
 update(arrA,sizeOF);
		break;	
		case 3:
		cout<<"Date :"<<x.day<<" /  "<<x.month<<" /  "<<x.year;
		cout<<endl;
        bill(arrA,sizeOF);
		break;
	case 4:
		menuSelection();
		cout<<"enter choose your items and quantity : "<<endl;
		cin>>b>>y;
	do{
	
	cout<<menuSelection(b,y);
	cout<<"if please enter the number that u want , if you want to exit enter 0 : ";
	cin>>o;
}while(o!=0);
break;
default:
	cout<<"ERROR!!";
 }} while(n!=0);
 

return 0;}

