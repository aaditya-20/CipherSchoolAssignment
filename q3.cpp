#include<bits/stdc++.h>
	using namespace std;


	
	
	
	int main(){
		


			ios_base::sync_with_stdio(false);
   			 cin.tie(NULL); 
   			 long long int n=4,even=0,odd=0;
   			

   			 long long int a[n];
   			 for(int i=0;i<n;i++){
   			 	cin>>a[i];
   			 	
   			 }
   			 for(int i=0;i<n;i++){
   			 	if(i%2==0){
   			 		even=even+a[i];
   			 	}
   			 	else{
   			 		odd=odd+a[i];
   			 	}
   			 }
   			 cout<<max(even,odd)<<endl;

   			 
			
				
			}
