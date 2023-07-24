#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
// this is only the outlook how the game should word with a fixed word not the final code can add a random word of any length 
printf("\t HANG-MAN \n ");

int i ,j,k;
int mistake=0 , errors=0, try=3, ans=0;

char word[]="abc";
char emp='_';
char inp;
char b=word[1];

printf("%c %c %c \n",word[0],emp,word[2]); // can be used loop for printing in final program
printf("enter the missing letter:\n");

while(try!=0){
    scanf(" %c",&inp);
if(inp==b){
                    ans++;
                    printf("you are safe form hanging\n");
                    return 0;


}
else{
    printf("you have only %d life left \n",try-1);
    try--;
}
if(try==0){
                printf("\n the game is over: you are hanged \n");

}

}
}
