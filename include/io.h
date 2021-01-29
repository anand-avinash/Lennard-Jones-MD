#ifndef _IO_OPERATIONS_H_
#define _IO_OPERATIONS_H_

#include "physics.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

/* generic file- or pathname buffer length */
#define BLEN 200

extern int get_a_line(FILE *fp, char *buf);
extern void output(mdsys_t *sys, FILE *erg, FILE *traj);

#endif
