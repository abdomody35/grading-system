#ifndef FILES_H
#define FILES_H

#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include "error.h"

ERROR get_files(int fds[]);

#endif