#include <string.h>
#include <iostream>
using namespace std;

/* The code below will only work for unique charecter in substring */

int main()
{
    string str="XYYZXZYZXXYZ";
    string str1="XYZ",sub;
    int i,j,k=0,count=0,sum=0;
    for(i=1;i<=str1.length();i++){
    	sum+=i*i;
    }
    while(k<=(str.length()-str1.length())){
    	for(i=k;i<(k+str1.length());i++){
    		for(j=0;j<=str1.length();j++){
    			if(str[i]==str1[j]){
    				count+=(j+1)*(j+1);
    				break;
    			}
    		}
    		sub+=str[i];
    	}
		if(sum==count){
    		cout<<"substring '"<<sub<<"' present at index "<<k<<"\n";	
		}
		sub="";
		count=0;
		k++;
	}
    
    return 0;
}
