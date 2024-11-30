#include <stdio.h>
#include <time.h>


int main(){
  char start_key , end_key;
  clock_t start , end;
  double time_taken;

// user input 
  printf("Type 's' to start the timer: ");
  scanf(" %c ", &start_key);
  if (start_key == 's'){
    start = clock();
    printf("Clock is started...\n");
  }

  // to stop the clock
  printf("type 'e' to stop the clock");
  scanf(" %c", &end_key);
  if (end_key == 'e'){
    end = clock();
    printf("Timer is stopped\n");
  }

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC; 

    printf("Elapsed time: %f seconds\n", time_taken);
  return  0;
} 