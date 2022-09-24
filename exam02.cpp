#include <stdio.h>
#include <string.h>
void upperCase(char s[]){
	for(int i=0;i<strlen(s);i++){
	if(s[i]>=97 && s[i]<=122){
		s[i]=s[i]-32;
	}
}
}
int main(){
char s[100];
printf("nhap chuoi:\n",s);
scanf("%s",s);
upperCase(s);
printf("chuoi sau khi chuyen la: %s",s);
}
