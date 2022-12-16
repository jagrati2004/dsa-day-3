#include<bits/stdc++.h>
using namespace std;
int main()
{
	int rev=0;
	int n;
	cin>>n;
	int dup=n;
	while(n>0)
	{
		int rem=n%10;
		rev=rev*10+rem;
		n=n/10;
    }
    cout<<rev;
	if(dup==rev){
	
		cout<< "given no is palindrom";
	}
	else{
	
		cout<<"given no number is not palindrom";
	}
	return 0;
}
