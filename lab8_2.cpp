#include<iostream>
using namespace std;

void printO (int height,int width){
	if (height>0 && width>0){
		for (int lineCount=0;lineCount<height;lineCount++){
			for (int letterCount=0;letterCount<width;letterCount++){
				cout << "O";
			}
			cout << endl;
		}
	}else cout << "Invalid input";
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
