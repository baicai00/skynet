#ifndef SKYNET_IMP_H
#define SKYNET_IMP_H

struct skynet_config {
	int thread; // 值来自于skynet配制中的thread项,如果配制中未设置则为8
	int harbor; // 值来自于skynet配制中的harbor项,如果配制中未设置则为1
	int profile;// 值来自于skynet配制中的profile项,如果配制中未设置则为1
	const char * daemon;// 值来自于skynet配制中的daemon项,如果配制中未设置则为NULL
	const char * module_path; // 值来自于skynet配制中的cpath项,如果配制中未设置则为"./cservice/?.so"
	const char * bootstrap; // 值来自于skynet配制中的bootstrap项,如果配制中未设置则为"snlua bootstrap"
	const char * logger; // 值来自于skynet配制中的logger项,如果配制中未设置则为NULL
	const char * logservice;// 值来自于skynet配制中的logservice项,如果配制中未设置则为"logger"
};

#define THREAD_WORKER 0
#define THREAD_MAIN 1
#define THREAD_SOCKET 2
#define THREAD_TIMER 3
#define THREAD_MONITOR 4

void skynet_start(struct skynet_config * config);

#endif
