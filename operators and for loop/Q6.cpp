// Reverse of a number
// Write a program to generate the reverse of a given number N. Print the corresponding reverse number.

// Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.



// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 0 <= N < 10^8
// Sample Input 1 :
// 1234
// Sample Output 1 :
// 4321
// Sample Input 2 :
// 1980
// Sample Output 2 :

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int reverse=0;
	int r;
	for(int i=0;n!=0;i++){
		r=n%10;
		reverse=reverse*10+r;
		n=n/10;
	}
		cout<<reverse;
	

}
