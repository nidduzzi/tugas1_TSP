#include "lib.h"

int main() /* Main function. */
{
    /* Open input and output files. */
    infile = fopen("mm1.in", "r");
    outfile = fopen("mm1.out", "w");
    /* Specify the number of events for the timing function. */
    num_events = 2;
    /* Read input parameters. */
    fscanf(infile, "%f %f %d", &mean_interarrival, &mean_service, &num_delays_required);
    /* Write report heading and input parameters. */
    fprintf(outfile, "Single-server queueing system\n\n");
    fprintf(outfile, "Mean interarrival time%11.3f minutes\n\n", mean_interarrival);
    fprintf(outfile, "Mean service time%16.3f minutes\n\n", mean_service);
    fprintf(outfile, "Number of customers%14d\n\n", num_delays_required);
    /* Initialize the simulation. */
    initialize();
    /* Run the simulation while more delays are still needed. */
    int running = 1;
    // asumsi mulai pas jam 9
    while (running)
    {
        /* Determine the next event. */
        timing();
        /* Update time-average statistical accumulators. */
        update_time_avg_stats();
        /* Invoke the appropriate event function. */
        // operasi normal sebelum jam 17
        if (sim_time < 8.0 * 60.0)
        {
            switch (next_event_type)
            {
            case 1:
                arrive();
                break;
            case 2:
                depart();
                break;
            }
        }
        // setelah jam 17, hanya yang dalam antrian dan sedang dilayani yang terjadi
        else
        {
            // tidak ada yang datang setelah jan 17, dan hanya ada yang pergi
            depart();
            // cek jika antrian kosong dan tidak ada yang sedang dilayani
            if (num_in_q == 0 && server_status == IDLE)
            {
                running = 0;
            }
        }
    }
    /* Invoke the report generator and end the simulation. */
    report();
    fclose(infile);
    fclose(outfile);
    return 0;
}
