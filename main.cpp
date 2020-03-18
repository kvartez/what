#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	int t[121];
	for (int i=0; i <=121;i++){
		t[i]=0;
		cout<<t[i]<<",";
	}
	int a ;
	cout << endl<<"podaj liczbe 1-119"<<endl;
	cin>> a ;
	if (a>=1&&a<119){
		
		
	}else{
		cout<<"error"<<a<<endl;
		return 0 ;
	}
	
	t[a]=100;
	t[a-1]=10 ;
	t[a+1]=10;
	for (int i=121; i >=0;i--){
		cout<<t[i]<<",";
	}
	
	return 0;

}
