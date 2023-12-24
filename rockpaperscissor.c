#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
char a[100];
srand(time(NULL));
int x=0;int y=0;
int b[3],z[3];
printf("Enter player 's name:");
scanf("%s",a);
printf("Enter 0/1/2 for rock paper scissors respectively\n");
for(int i=0;i<3;i++){
printf("%s 's turn...Enter the value ",a);
scanf("%d",b);
int temp=rand()%3;
printf("Computer's value is :%d\n",temp);

if(b[i]==0 && temp==1){
    y++;
}
if(b[i]==0 && temp ==2){
    x++;
}
if(b[i]==1 && temp==0){
    x++;
}
if(b[i]==1 && temp==2){
    y++;
}
if(b[i]==2 && temp==0){
    y++;
}
if(b[i]==2 &&temp==1){
    x++;
}
else
continue;
}   
if(x>y){
    printf("%s is the winner",a);
}
if(y>x){
    printf("computer is the winner ");
}
if(x==y)
printf("draw");
       
    return 0;
}