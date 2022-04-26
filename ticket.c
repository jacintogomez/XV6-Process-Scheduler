#include <kernel/types.h>
#include <kernel/stat.h>
#include <user/user.h>
#include <kernel/fcntl.h>

int main(int argc, char *argv[]) {
    int tickets, pid;

    if(argc < 3) {
        printf(2, "Correct usage is: pid ticket\n");
        exit();
    }


    if(argv[2][0] == '-'){
        printf(2, "This is the ticket you entered %s%s\n", argv[2][0],argv[2][1]);
        tickets = -atoi(&argv[2][1]);

    }
    else {
        //printf(2, "This is the nice you entered %s \n", argv[2]);
        tickets = atoi(argv[2]);
    }
    //printf(2, "This is the nice that was converted into atoi %d \n", newNice);

    pid = atoi(argv[1]);

    //int lowerbound = -20;

    if (tickets < 0) {
        printf(2, "Invalid ticket amount, can't be negative!\n");
        exit();
    }

    ticket(pid, tickets);
    exit();
}
