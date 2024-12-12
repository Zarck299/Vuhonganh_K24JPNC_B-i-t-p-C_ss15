#include<stdio.h>
#include<string.h>
int main(){
	char string[50];
	char Index;
	int count;
	printf("Nhap chuoi: ");
	fgets(string, 50, stdin);
	for (int i=0; i<strlen(string); i++){
		count=1;
		Index=string[i];
		for (int j=i+1; j< strlen(string); j++){
			if (string[i]==string[j]){
				count++;
			}
		}
		printf("%c = %d\n", Index, count);
	}
	return 0;
}
