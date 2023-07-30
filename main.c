#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main ()
{
 printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n");
      printf("#    #       *      # *    #    ########   #           #     *        #*      #  				    \n");
      printf("#    #     *  *     #  *   #     #         #  #     #  #    *  *      #*      #    				\n");
      printf("#    #    *    *    #   *  #    #          #   #   #   #   *    *     #  *    #   \n");
      printf("######    *******   #    * #    #  #####   #      #    #   *******    #   *   #	 		            \n");
      printf("#    #    #     #   #     *#    #      #   #           #   *     *    #    *  # 				        \n");
      printf("#    #    #     #   #     *#    #      #   #           #   *     *    #      *#			        \n");
      printf("#    #    #     #   #      #    ########   #           #   *     *    #       #    		            \n");
      printf("\n\n                                  WELCOME TO HANGMAN GAME\n");

int i ,j,k;
int mistake=0 , errors=0, try=3, ans=0;
int line=0;
int index=1;
char word[100];
char emp='_';
char inp[100];
int len;
char guss[100];
 srand(time(0));
 int random = rand() % 4 + 1;

FILE *fp;

fp= fopen("word.txt","r");
while(line==0&&fscanf(fp,"%s",word)==1){
    
        if (index == random ) {

            strcpy(guss,word);
               len=strlen(word);
           //     printf("%d",len);
           // printf("%s\n",  word); // generating random word 
            printf("%c",guss[0]);
            for(i=0;i<len-2;i++){printf("%c",emp);}
            printf("%c",guss[len-1]);
            printf("\n");
            break; // Break after processing the first line
        }

        index++;

}

//printf("%c %c %c \n",word[0],emp,word[2]); // can be used loop for printing in final program
//printf("enter the missing letter:\n");

//while(try!=0){
  //  scanf(" %c",&inp);
//if(inp==b){
  //                  ans++;
    //                printf("you are safe form hanging\n");
      //              return 0;


//}
//else{
  //  printf("you have only %d life left \n",try-1);
    //try--;
//}
//if(try==0){
  //              printf("\n the game is over: you are hanged \n");

//}

//}
}
