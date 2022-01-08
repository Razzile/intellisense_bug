
#include <stdlib.h>

#ifdef __ANDROID__
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#endif


int main() {
#ifdef __ANDROID__
    pid_t pid = fork();

    if (pid == 0) {
        sleep(5000);
    } else {
        wait(NULL);
    }
#endif
     return 0;
}