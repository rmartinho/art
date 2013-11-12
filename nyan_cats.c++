#include <unistd.h>

int main() {
    int back[2];
    int forth[2];
    pipe(back);
    pipe(forth);
    if(fork() == 0) {
        dup2(back[0], 0);
        dup2(forth[1], 1);
    } else {
        write(back[1], "nyan", 5);
        dup2(forth[0], 0);
        dup2(back[1], 1);
    }
    close(back[0]); close(back[1]);
    close(forth[0]); close(forth[1]);
    execlp("cat", "cat", 0);
}

