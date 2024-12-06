#include<iostream>
#include<string>

using namespace std;

class calculator{
	
	string name,color,format;
	
	public:
		calculator(string n,string c,string f){
			
			name = n;
			color = c;
			format = f;
		}


int sum(int a, int b){
	
	return a+b;
	
}

int sum(int a,int b, int c){
	
	return a+b+c;
}

float sum(float a, float b, int c){
	
	return a+b+c;
}


int sub(int a,int b){
	
	return a-b;
}


int sub(int a,int b,int c){
	return a+b-c;
}

};


int main(){

calculator cat1("taz cal","blue","basic");
cout<<cat1.sum(2.2,2.9,4.);
cout<<cat1.sub(10,25,9);



    return 0;
}
