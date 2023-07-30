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
      printf("-----------------------------------------------------------------------------------\n");

int i ,j,k;
int mistake=0 , errors=0, try=3;
char ans;
int line=0;
int index=1;
char word[100];
char emp='_';
char inp[100];
int len;
char guss[100];
 srand(time(0));
 int random = rand() % 84 + 1;

FILE *fp;

fp= fopen("word.txt","r");
while(line==0&&fscanf(fp,"%s",word)==1){
    
        if (index == random ) {

            strcpy(guss,word);
               len=strlen(word);
            printf("%c",guss[0]);
            for(i=0;i<len-2;i++){printf("%c",emp);}
            printf("%c",guss[len-1]);
            printf("\n");
            break; 
        }

        index++;

}

printf("Enter the guess the character\n");



while(try!=0){
  scanf(" %c",&ans);
          for(i=1;i<len-1;i++){
                             
                            if (ans == guss[i]) {
                                 printf("you are correct\n");
                                printf("%c", guss[0]);
        
                                  for (j = 1; j < len - 1; j++) {
                                           if (guss[j] == ans) {
                                          printf("%c", ans);
                                    } else {
                                       printf("%c", emp);
                                       }
                                    }
        
                                         printf("%c\n", guss[len - 1]);
                                             break;
                            
                            }
                            else{
                              try--;
                              printf("you have only %d life left \n",try);
                              break;
                            }
                            
                  }

          }
}