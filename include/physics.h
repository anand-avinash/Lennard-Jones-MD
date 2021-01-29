#ifndef _PHYSICS_OPERATIONS_H_
#define _PHYSICS_OPERATIONS_H_

#include <math.h>

/* a few physical constants */
static const double kboltz = 0.0019872067; /* boltzman constant in kcal/mol/K */
static const double mvsq2e = 2390.05736153349; /* m*v^2 in kcal/mol */

/* structure to hold the complete information
 * about the MD system */
struct _mdsys {
        int natoms, nfi, nsteps;
        double dt, mass, epsilon, sigma, box, rcut;
        double ekin, epot, temp;
        double *rx, *ry, *rz;
        double *vx, *vy, *vz;
        double *fx, *fy, *fz;
};
typedef struct _mdsys mdsys_t;

extern void ekin(mdsys_t *sys);
extern double pbc(double x, const double boxby2);
extern void force(mdsys_t *sys);
extern void velverlet(mdsys_t *sys);

#endif
