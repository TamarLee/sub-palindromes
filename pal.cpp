#include<iostream>
#define n 6
using namespace std;

int palindromi(char str[], int p);

main(){
	char str[n];
	for(int i=0; i<n; i++) cin >> str[i];
	int s = palindromi(str, n);
	cout << endl << "sub-pal: " << s;
}

int palindromi(char str[], int p){
	int i, j, k, s=0;
	
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(str[i]==str[j]){
				bool t = true;
				for(int k=i; k<=(j-i+1)/2; k++){
					if(str[k]!=str[j-k]){
						t = false;
					}
				}
				if(t){
					s = s+1;
				} 
			}
		}
	}
	return s;
}


