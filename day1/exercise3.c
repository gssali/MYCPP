#include <stdio.h>
#include <string.h>

inline void bubble_sort(char a[],int n);
 
void bubble_sort(char a[],int n){
	int i,j,temp;
	for(j=0;j<n-1;j++){
		for(i=0;i<n-1-j;i++){
			if(a[i]>a[i+1]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
}


int main(int argc, char* argv[]){
	char str[80]={0};
	char str1[80]={0};
	char str2[80]={0};
	gets(str);
	int len=0,i=0,j=0,k=0;
	len=strlen(str);
	for(i=0;i<len;i++){
		if(str[i]>='a' && str[i]<= 'z' || str[i]>='A' && str[i]<= 'Z'){
			str1[k]=str[i];
			k++;
		}else{
			str2[j]=str[i];
			j++;
		}
	}
	str1[i]='\0';
	str2[j]='\0';
	
	bubble_sort(str1,strlen(str1));
	bubble_sort(str2,strlen(str2));

	printf("%s\n",str1);
	printf("%s\n",str2);
	return 0;
}
