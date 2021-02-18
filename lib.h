/* External definitions for single-server queueing system. */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "lcgrand.h" /* Header file for random-number generator. */
// limit di queue menjadi 2
#define Q_LIMIT 2 /* Limit on queue length. */
#define BUSY 1 /* Mnemonics for server's being busy */
#define IDLE 0 /* and idle. */
int next_event_type, num_custs_delayed, num_delays_required, num_events,
num_in_q, server_status, num_balked;
float area_num_in_q, area_server_status, mean_interarrival, mean_service,
sim_time, time_arrival[Q_LIMIT + 1], time_last_event, time_next_event[3],
total_of_delays;
FILE *infile, *outfile;
void initialize(void);
void timing(void);
void arrive(void);
void depart(void);
void report(void);
void update_time_avg_stats(void);
float expon(float mean);
