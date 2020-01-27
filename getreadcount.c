// Omaa koodia
#include "fcntl.h"
#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
    printf(1, "read -system call was called %d times\n", getreadcount());
    exit();
}
