#pragma once

#include <stdarg.h>
#include "sys_plat.h"

void log_info(const char *file, const char *func, int line, const char *fmt, ...);

#define log_info(fmt, ...) log_info(__FILE__, __FUNCTION__, __LINE__, fmt, ##__VA_ARGS__)
