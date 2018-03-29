#include<iostream>
#include<vector>
#include<ctime>
#include <cstdlib>
#include <algorithm>
#include <fstream>
using namespace std;
int main(){
	std::ofstream out("15.txt");
    std::streambuf *coutbuf = std::cout.rdbuf(); //save old buf
    std::cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!

	
	long long int n,q,k,si,ti,p,x,y;
	int query;
	
	srand(time(0));	

	n=1+rand()%(200000);
	q=1+rand()%(200000);
	k=2+rand()%(n);
	cout<<n<<" "<<k<<" "<<q<<endl;
	
	vector <long long int> *teams;
	teams=new vector<long long int> [k];
	
	for(long long int i=0;i<n;i++){
		si=1+rand()%(200000);
		ti=1+rand()%k;
		cout<<si<<" "<<ti<<endl;
		teams[ti-1].push_back(si);
	}
	for(long long int i=0;i<q;i++){
		query=1+rand()%2;
		cout<<query<<" ";
		if(query==1){
			x=1+rand()%k;
			if(teams[x-1].size())
				p= *std::max_element(&teams[x-1][0], &teams[x-1][teams[x-1].size()-1]) + rand()%(200000);
			else 
				p= 1 + + rand()%(200000);
			cout<<x<<" "<<p<<endl;
		}
		else{
			x=1+rand()%k;
			y=1+rand()%k;
			if(x==y) y=1+ (y+1)%k;
			cout<<x<<" "<<y<<endl;
		}
		
	}
	return 0;	
}
