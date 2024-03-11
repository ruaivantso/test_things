#include <syslog.h>           
#include <chrono>
#inclu de <thread>
                              
int main(int argc, char** argv) {
                              
    openlog(argv[0], LOG_CONS, LOG_USER);
    syslog(LOG_INFO, "=== S-T-A-R-T-E-D ===");            

    int invocationCount = 0;
    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(2));
        syslog(LOG_INFO, "invocation %d", ++invocationCount);
    }

    closelog();               
                              
    return 0;                 
}        
