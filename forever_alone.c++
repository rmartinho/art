#include <unistd.h>

int main() {
    int loop[2];
    pipe(loop);
    dup2(loop[0], 0);
    dup2(loop[1], 1);
    close(loop[0]); close(loop[1]);
    write(1, "hi", 3);
    execlp("cat", "cat", 0);
}

