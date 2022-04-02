#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "child.h"

int FCFSChild(childInput *input){
    close(input->c2f[0]);
    close(input->c2ff[0]);
    close(input->f2c[1]);
    close(input->ff2c[1]);
    
    return 0;
}
