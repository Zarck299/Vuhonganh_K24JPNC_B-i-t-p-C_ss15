#include<stdio.h>
#include<string.h>
int main(){
	char string[50];
	char deleteIndex;
	int length;
	printf("Nhap vao chuoi: ");
	fgets(string, 50, stdin);
	printf("Nhap vao ky tu muon xoa: ");
	scanf("%c", &deleteIndex);
	length=strlen(string);
	for (int i=0;i<length;i++){
		if(string[i]==deleteIndex){
			for (int j=i;j<length;j++){
				string[j]=string[j+1];
			}
			i--;
		}
	}
	printf("Chuoi sau khi xoa la: %s", string);
	return 0;
}
