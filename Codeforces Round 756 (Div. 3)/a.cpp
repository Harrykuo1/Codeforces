#include<stdio.h>
#include<string.h>
 
long long int t;
char arr[20];
 
int main(){
	scanf("%lld",&t);
	while(t--){
		scanf("%s",arr);
		bool haveEven=false;
		bool firstEven;
		if(arr[0]%2){
			firstEven=false;
		}
		else{
			firstEven=true;
		}
		int len=strlen(arr);
		for(int i=0;i<len;i++){
			if(arr[i]%2==0){
				haveEven=true;
				break;
			}
		}
		if(haveEven==false){
			printf("-1\n");
		}
		else if(arr[len-1]%2==0){
			printf("0\n");
		}
		else if(firstEven==true){
			printf("1\n");
		}
		else if(haveEven==true){
			printf("2\n");
		}
	}
}
