#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 1024
void ruleclassify(long long int r1[7][800],long long int r2[7][800],long long int r3[7][800],long long int r4[7][800])
{
int len=-1;
int M[5];
int N[5];
int D[5];
int K[3];
long long int m,n;
char rule[MAX_LINE];  
FILE *fp;                  
fp = fopen("rule1.txt","r");
 while(fgets(rule,MAX_LINE,fp) != NULL)
 {
     len++;
sscanf(rule,"@%d.%d.%d.%d/%*d\t%d.%d.%d.%d/%*d\t%d : %d\t%d : %d\t%x/%x\n",\
			&M[0],&M[1],&M[2],&M[3],\
			&N[0],&N[1],&N[2],&N[3],\
			&D[0],&D[1],&D[2],&D[3],\
			&K[1],&K[2]);
m=M[0]*4096+M[1]*256+M[2]*16+M[3];           
n=N[0]*4096+N[1]*256+N[2]*16+N[3];          
if(m>0){
	if(n>0){

	}
	else {

	}
}
else {
	if(n>0){

	}
	else {

	}
}
 //通过这种方法获取数组
 }}
 void packet(char *packetname){
	 long long int r1[7][800], r2[7][800], r3[7][800], r4[7][800];
	char packet[1024]; 
	ruleclassify(r1,r2,r3,r4);
   FILE *packe;    
   int len;           
    packe = fopen(packetname,"r"); 
    while(fgets(packet,1024,packe) != NULL) {
     long long int pk1,pk2;
     int pk3,pk4,pk5;
     sscanf(packet,"%lld %lld %d %d %d",&pk1,&pk2,&pk3,&pk4,&pk5);
	if(pk1>0){
		if(pk2>0){
		}
		else {

		}
	}
	else {
		if(pk2>0){

		}
		else {

		}
	}
    
    fprintf("result","%lld\n",len);
	fclose(packe);
 } 
 }
 int main(){  
    char pacname[10];
	printf("输入所需匹配的文件名");
    scanf("%s",pacname);
    packet(pacname);
    return 0;
}       