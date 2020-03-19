#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main(){
  int status, pid1, pid2;
  pid1 = fork();
  if(pid1 == 0){
    printf("Child 1:\n\"> ps -ef\"\n");
    char* args[] = {"/bin/ps", "-ef", NULL};
    execvp("/bin/ps", args);
  }
  else {
    waitpid(pid1, NULL, 0);
    pid2 = fork();
    if(pid2 == 0){
      printf("Child 2: > free -h\"\n");
      char* args[] = {"/usr/bin/free", "-h", NULL};
      if(execvp("/usr/bin/free", args) < 0){
        printf("Fail to execute \"free -h\n");
      }
    }
    else {
      printf("Child 2: %d", pid2);
      waitpid(pid2, NULL, 0);
    }
  }
  return 0;
}