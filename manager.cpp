#include<iostream>
#include<string>
using namespace std;
 
const int number_max=100;
 
class Professor{
    private:
        string Name;
        int Birth_year, Num;
    public:
    	string name(){
    		return Name;
		}
		int birth_year(){
			return Birth_year;
		}
		int num(){
			return Num;
		}
		void setname(string s){
			Name=s;
		}
		void setyear(int year){
			Birth_year=year;
		}
		void setnum(int num1){
			Num=num1;
		}
};
 
class Subject{
    private:
        string Name;
        int Cnt;
        Professor L[number_max];
        int Total;
    public:
    	string name(){
    		return Name;
		}
		int cnt(){
			return Cnt;
		}
		Professor * l(){
			return L;
		}
		int total(){
			return Total;
		}
		void setname(string name){
			Name=name;
		}
		void setcnt(int cnt){
			Cnt=cnt;
		}
		void settotal(int total){
			Total=total;
		}
		void setl(Professor x, int i){
			L[i]=x;
		}
		void srt(){
			int n=Cnt;
			for(int i=0; i<n; i++)
		    for(int j=i+1; j<n; j++){
		        if(L[i].birth_year()>L[j].birth_year()){
		            Professor temp=L[i];
		            L[i]=L[j];
		            L[j]=temp;
		        }
		    }
		}
};
 
int f(string s){
    if(s[0]=='H') return 0;
    if(s[0]=='S') return 1;
    return 2;
} 
int n;
Subject sb[3];
char option;
 

