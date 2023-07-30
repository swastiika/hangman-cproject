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
char filled[100];
    for (i = 1; i < len - 1; i++) {
        filled[i] = emp;
    }
printf("Enter the guess the character\n");



int correct_guess;
while (try != 0) {
    printf("Enter the guess the character\n");
    scanf(" %c", &ans);

    correct_guess = 0; 

    for (i = 1; i < len - 1; i++) {
        if (ans == guss[i]) {
            printf("you are correct\n");
            correct_guess =  1; 
            filled[i] = ans;
        }
    }
            printf("%c", guss[0]);
        for (i = 1; i < len - 1; i++) {
            printf("%c", filled[i] != emp ? filled[i] : emp);
        }
          printf("%c\n", guss[len - 1]);
              int fully_guessed = 1;
        for (i = 1; i < len - 1; i++) {
            if (filled[i] == emp) {
                fully_guessed = 0;
                break;
            }
        }

        if (fully_guessed) {
            printf("Congratulations! You guessed the word correctly!\n");
            break;
        }

        if (!correct_guess) {
            try--;
            printf("you have only %d life left\n", try);
        }
    }

    return 0;
}


