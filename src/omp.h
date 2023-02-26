/*
 * omp.h -- OpenMP header file
 *
 * 2005-08-08: Modified to include the new types added in the OpenMP 2.5 spec.
 *
 */

/* OpenMP Version */
#define _OPENMP                 202111

/* OpenMP Implementation */
#define _OPENMP_SIMD            201511
#define _OPENMP_GPU             201711
#define _OPENMP_TARGET          201911
#define _OPENMP_VE              202101

/* Definitions for 'schedule' clause */
#define omp_sched_static        1
#define omp_sched_dynamic       2
#define omp_sched_guided        3
#define omp_sched_auto          4
#define omp_sched_runtime       5

/* Definitions for 'device' clause */
#define omp_default_device      -1
#define omp_any_device          -2

/* OpenMP environment */
extern int omp_get_num_threads(void);
extern int omp_get_max_threads(void);
extern int omp_get_thread_num(void);
extern int omp_get_num_procs(void);
extern void omp_set_num_threads(int);
extern int omp_in_parallel(void);
extern void omp_set_dynamic(int);
extern int omp_get_dynamic(void);
extern void omp_set_nested(int);
extern int omp_get_nested(void);
extern void omp_set_schedule(int, int);
extern void omp_get_schedule(int *, int *);
extern int omp_get_thread_limit(void);
extern int omp_set_max_active_levels(int);
extern int omp_get_max_active_levels(void);
extern int omp_get_level(void);
extern int omp_get_ancestor_thread_num(int);
extern int omp_get_team_size(int);
extern int omp_get_active_level(void);
extern int omp_in_final(void);

/* OpenMP synchronization */
extern void omp_init_lock(omp_lock_t *);
extern void omp_destroy_lock(omp_lock_t *);
extern void omp_set_lock(omp_lock_t *);
extern void omp_unset_lock(omp_lock_t *);
extern int omp_test_lock(omp_lock_t *);
extern double omp_get_wtime(void);
extern double omp_get_wtick(void);
extern void omp_set_nested(int);

/* OpenMP mutual exclusion */
typedef struct omp_lock_t { int x; } omp_lock_t;
typedef struct omp_nest_lock_t { int x; } omp_nest_lock_t;
typedef struct omp_sched_t { int x; } omp_sched_t;
extern int omp_get_lock(omp_lock_t *);
extern int omp_set_lock(omp_lock_t *);
extern int omp_test_lock(omp_lock_t *);
extern int omp_unset_lock(omp_lock_t *);
extern void omp_init_lock(omp_lock_t *);
extern void omp_destroy_lock(omp_lock_t *);
extern int omp_get_nest_lock(omp_nest_lock_t *);
extern int omp_set_nest_lock(omp_nest_lock_t *);
extern int omp_test_nest_lock(omp_nest_lock_t *);
extern int omp_unset_nest_lock(omp_nest_lock_t *);
extern void omp_init_nest_lock(omp_nest_lock_t *);
extern void omp_destroy_nest_lock(omp_nest_lock_t *);
extern void omp_set_schedule(omp_sched_t, int);
extern void omp_get_schedule(omp_sched_t *, int *);
