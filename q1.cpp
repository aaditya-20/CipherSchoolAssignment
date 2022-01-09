#include<bits/stdc++.h>
	using namespace std;


	
	
	
	int main(){
		


			ios_base::sync_with_stdio(false);
   			 cin.tie(NULL); 
   			 long long int n;
   			 cin>>n;

   			 long long int a[n],freq[n+1]={0};
   			 for(int i=0;i<n;i++){
   			 	cin>>a[i];
   			 	freq[a[i]]++;
   			 }
   			 for(int i=0;i<=n;i++){
   			 	if(freq[i]==0){
   			 		cout<<i<<endl;
   			 	}
   			 }

			
				
			}
