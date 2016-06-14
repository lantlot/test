#include <stdio.h>
char rndchar();
int main(){
printf("plz insert access count:");
int count =0;
scanf("%d",&count);
FILE *fp1;
fp1=fopen("passwd","w");
char pswd[8];
for (int i=0;i<count;i++){
	for(int j=0;j<8;j++){
	pswd[j]=rndchar();
}	
	fprintf(fp1,"user%d:%s\n\n",i,pswd);
	};
return 0;
}
char rndchar(){
char c;
c=(char)(rand()%75+48);
return c;
}
