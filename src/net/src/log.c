#include "log.h"

void log_info(const char *file, const char *func, int line, const char *fmt, ...)
{
    const char *end = file + plat_strlen(file);
    while (end >= file)
    {
        if (*end == '\\' || *end == '/')
        {
            break;
        }
        end--;
    }
    end++;
    plat_printf("(%s-%s-%d):", end, func, line);
    char buf[128];
    va_list args;
    va_start(args, fmt);
    plat_vsprintf(buf, fmt, args);
    plat_printf("%s\n", buf);
    va_end(args);
}