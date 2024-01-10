#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//DEFINING A FUNCTION FOR HINTS
const char* hint(int guess,int target){
int diff = abs(guess-target); 
if (diff==0) {return ("\n!!!HURRAH YOU GUSSED THE CORRECT NUMBER!!!!\n  "); }
else if (diff<=2 && diff>0) return ("\n oopsieeeeee you are very close to the answer \n ");
else if (diff<=4 && diff>2) return ("\n oopsieeee you are close to the answer\n ");
else if (diff<=6 && diff>4 ) return ("\n oopsie you are little far from the answer\n");
else if (diff<=10 && diff>6) return ("\n ooohhoo you were  too far from the answer ");
else if (diff>10) return ("ESSSH!! KINDLY ENTER A NUMBER BETWEEN 0 TO 10");

}

int main() {
   int guess,count,attempt=3;
   printf("\nWELCOME TO THE GUESS GAME\n");
//GENERATING A RANDOM NUMBER AT REAL TIME
   srand(time(NULL));


    int target = rand()%10+1;
    printf("\n  TOTALS ATTEMPTS:- %d\n", attempt);

    while (attempt>0){

    
       printf("\nGUESS A NUMBER BETWEEN 0 TO 10 :- ");
    
       scanf("%d",&guess);
    
       const char* result = hint(guess,target);
    

       printf("%s", result);
    
       attempt--;
    
       printf("\n no of attempts remaining:- %d\n",attempt);

       if (attempt==0) printf("\n  SORRY ATTEMPS OVER\n");

       if (guess==target){break;}
                
         }

    if(attempt==0) printf("\n  BY THE WAY THE NUMBER WAS %d LOL\n", target);
    
     printf("\n THANK YOU FOR PLAYING MY GUESS GAME\n");
     

      return 0;

}


