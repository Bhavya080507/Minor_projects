/*Dont those progress bar appear to be irritating when you are dowloading something and the net is slow?
well these one wont be slow!
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

const int BAR_LENGTH=50;
const int MAX_TASKS=5;
typedef struct{
    int id;
    int progress;
    int step;
} Task;
void print_bar(Task task);



int main() {
    printf("\n");
    Task tasks[MAX_TASKS];
    srand(time(NULL));
    //initialising values and tasks
    for(int i=0;i<MAX_TASKS;i++){
        tasks[i].id=i+1;
        tasks[i].progress=0;
        tasks[i].step=(rand() % 5) +1;
    }
    int tasks_incomplete=1;
    while(tasks_incomplete){
        tasks_incomplete=0;
        printf("\033[H\033[J");//clears the screen
        for(int i=0;i<MAX_TASKS;i++){
            tasks[i].progress+=tasks[i].step;
            if(tasks[i].progress>100){
                tasks[i].progress=100;
            }
            else if(tasks[i].progress<100){
            tasks_incomplete=1;
        }
        print_bar(tasks[i]);
        
        }
        fflush(stdout);//printing the output
        sleep(1);
    }
    printf("All tasks are completed!\n");
    return 0;
}

void print_bar(Task task){
    int bar_to_show=(task.progress*BAR_LENGTH)/100;
    printf("Task %d: [",task.id);
    for(int i=0;i<BAR_LENGTH;i++){
        if(i<bar_to_show){
            printf("=");
        }
        else{
            printf(" ");
        }
    }
    printf("] %d%% \n",task.progress);
    
}