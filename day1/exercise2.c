#include <stdio.h>
#include <string.h>
#include "exercise2.h"

char* get_file_extension(char *file_path){
	int i=0,length=0;
	static char extension[10] = {0} ;
	length=strlen(file_path);
	while(1){
		if(file_path[i]=='.'){
			break;
		}
		i++;
	}
	 if(i<length){  
   	 	strcpy(extension,file_path+i+1);
		//printf("%s\n",extension);
	}else{  
		strcpy(extension,"\0");
	}
	return extension;  
}

char* get_file_name(char *file_path){
	int i=0,j=0,k=0,length=0;
	static char name[10] = {0} ;
	length=strlen(file_path);
	while(1){
		if(file_path[i]=='.'){
			break;
		}
		i++;
	}
	j=i;
	while(1){
		if(file_path[i]=='/'){
			break;
		}
		i--;
	}

	 if(j-i-1>0){  
		for(k=0;k<j-i-1;k++){
			*(name+k) = *(file_path+i+k+1);
			//printf("%s\n",name);
		}   	 	
		*(name+k) = '\0';

	}else{  
		strcpy(name,"\0");
	}
	return name;

}

int main(int argc, char* argv[]){  
	char  a[40] ={0},ch = 0;  
    	int i=0;  
	while((ch=getchar())!='\n'){  
		a[i++]=ch;  
		if(i>=40)  
		break;  
	}  
	a[i]='\0';  
	printf("%s\n",get_file_extension(a));
	printf("%s\n",get_file_name(a));
	return 0;     
}  


