#include <string.h>
#include <iostream>
using namespace std;

/* The code below will work for all the case */

int main()
{
    string str="XYYZXZYZXXYZ";
    string str1="XYZ",sub,check=str1,check1;
    int i,j,k=0;
    for(i=0;i<str1.length();i++){
    	check1+='*';
    }
    while(k<=(str.length()-str1.length())){
    	for(i=k;i<(k+str1.length());i++){
    		for(j=0;j<str1.length();j++){
    			if(str[i]==check[j]){
    				check[j]='*';
    				break;
    			}
    		}
    		sub+=str[i];
    	}
		if(check==check1){
    		cout<<"substring '"<<sub<<"' present at index "<<k<<"\n";	
		}
		sub="";
		check=str1;
		k++;
	}
    
    return 0;
}
