#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//DEFINING A FUNCTION FOR HINTS
const char* hint(int guess,int target){
int diff = abs(guess-target); 
if (diff==0) {return ("\n!!!HURRAH YOU GUSSED THE CORRECT NUMBER!!!!\n  "); }
else if (diff<=2 && diff>0) return ("\n oopsieeeee you are very close to the answer, pay attention to the hint \n ");
else if (diff<=4 && diff>2) return ("\n oopsieeee you are close to the answer,pay attention to the hint\n ");
else if (diff<=6 && diff>4 ) return ("\n oopsie you are little far from the answer pay attention to the hint\n");
else if (diff<=10 && diff>6) return ("\n ooohhoo you were  too far from the answer pay attention to the hint\n ");
else if (diff>10) return ("ESSSH!! KINDLY ENTER A NUMBER BETWEEN 0 TO 10");

}

int main() {
   int guess,count,attempt=3;

//     Open the text file for reading
         FILE *file1 = fopen("welcome.txt", "r");
             if (file1 == NULL) {
                     fprintf(stderr, "Error opening file\n");
                             return 1;
                                 }
                                     
                                         // Read and print each line of the text file
   char line1[1000];
  while (fgets(line1, sizeof(line1), file1)) {
    printf("%s", line1);
      }
                                                                 
                                                                     // Close the file
      fclose(file1);
    
  printf("\n");
//GENERATING A RANDOM NUMBER AT REAL TIME

        // Open the text file for reading
       FILE *file = fopen("introduction.txt", "r");
             if (file == NULL) {
                     fprintf(stderr, "Error opening file\n");
                             return 1;
                                 }
                                     
                                         // Read and print each line of the text file
                                             char line[10000];
                                                 while (fgets(line, sizeof(line), file)) {
                                                         printf("%s", line);
                                                             }
                                                                 
                                                                     // Close the file
                                                                        fclose(file);
                                                                             
                                                                                 
                                                                                
                                              
  srand(time(NULL));


    int target = rand()%10+1;
    printf("\n  TOTALS ATTEMPTS:- %d\n", attempt);

    while (attempt>0){

    
       printf("\nGUESS A NUMBER BETWEEN 0 TO 10 :- ");
    
       scanf("%d",&guess);
    if(guess>10){printf("enter a number less than 10"); continue;}
     
    const char* result = hint(guess,target);
    if (attempt==1)
    {
    if (guess!=target)  { printf("\n SORRY ATTEMPTS ARE OVER \n");
    
      break;   }
    else {   printf("%s", result);

      }

    }


       printf("%s", result);
    
       attempt--;
     if (guess==target) break;
       printf("\n no of attempts remaining:- %d\n",attempt);

       //if (attempt==0) printf("\n  SORRY ATTEMPS OVER\n");

    //   if (guess==target){break;}
                
  }

 if(attempt>=0) 
  { if (guess!=target){printf("\n  BY THE WAY THE NUMBER WAS %d LOL\n", target);}}


    
     printf("\n THANK YOU FOR PLAYING MY GUESS GAME\n");
     

      return 0;

}


