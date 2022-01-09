#include<bits/stdc++.h>
	using namespace std;


	
	
	
	int main(){
		


			ios_base::sync_with_stdio(false);
   			 cin.tie(NULL); 
   			 long long int n=4,sum=0,mindiff=100000;
   			

   			 long long int a[n],freq[n+1]={0},target,ans;
   			 for(int i=0;i<n;i++){
   			 	cin>>a[i];
   			 	freq[a[i]]++;
   			 }
   			 cin>>target;

   			 for(int i=0;i<=n;i++){
   			 	for(int j=i+1;j<n;j++){
   			 		for(int k=j+1;k<n;k++){
   			 			int temp=a[i]+a[j]+a[k];
   			 			//mindiff=min(mindiff,abs(target-temp));
   			 			if(mindiff>abs(target-temp)){
   			 				mindiff=min(mindiff,abs(target-temp));

   			 				ans=temp;
   			 			}

   			 		}
   			 	}
   			 }
   			 cout<<ans<<endl;

			
				
			}
