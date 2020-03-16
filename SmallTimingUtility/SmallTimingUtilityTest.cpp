#include <iostream>
#include "small_timing_utility.h"

int main()
{
	timing_ctx Timing = {};

	BeginTiming(&Timing, "HelloWorldTiming");
	for (int i = 0; i < 1000; i++) {
		printf("Hello world %d\n", i);
	}
	EndTiming(&Timing);

	return(0);
}