#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

void fill_date(char buffer[]);
void fill_time24(char buffer[]);
void fill_time12(char buffer[]);
int input_format();
void clear_screen();

int main() {
    int format=input_format();
    while(1){
        if(format==1){
        char time[50],date[100];
        fill_time12(time);
        fill_date(date);
        clear_screen();
        printf("Current time: %s\n",time);
        printf("Date: %s\n",date);
        sleep(1);
    }
    else{
        char time[50],date[100];
        fill_time24(time);
        fill_date(date);
        clear_screen();
        printf("Current time: %s\n",time);
        printf("Date: %s\n",date);
        sleep(1);
    }
    }
    return 0;
}
//functions
void clear_screen(){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
void fill_date(char buffer[]){
    time_t raw_time;
    struct tm *current_time;
    
    time(&raw_time);
    current_time=localtime(&raw_time);
    strftime(buffer, 100,"%A, %B %d %Y" ,current_time);
}

void fill_time24(char buffer[]){
    time_t raw_time;
    struct tm *current_time;
    
    time(&raw_time);
    current_time=localtime(&raw_time);
    strftime(buffer, 50,"%H:%M:%S" ,current_time);
}
void fill_time12(char buffer[]){
    time_t raw_time;
    struct tm *current_time;
    
    time(&raw_time);
    current_time=localtime(&raw_time);
    strftime(buffer, 50,"%I:%M:%S %p" ,current_time);
}
//i have created the functions to get the exact time currently shown on the device used
int input_format(){
    int format;
    printf("\n");
    printf("Choose the format for the time\n");
    printf("1. 24 hour format(default)\n");
    printf("2. 12 hour format\n");
    printf("Choose (1/2): ");
    scanf("%d",&format);
    printf("\n");
    return format;
//function to input the format
}