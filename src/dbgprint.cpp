// Spdx-License-Identifier: MIT

#include <e32std.h>
#include <e32svr.h>
#include <stdarg.h>
#include "dbgprint.h"

void dbgprint(const char* format, ...)
{
    char    buffer[256];
    va_list varg;

    va_start(varg, format);
    vsprintf(buffer, format, varg);
    va_end(varg);

    // Hack.
    TBuf<256> buf;
    buf.Copy(TPtrC8((TText8*)buffer));
    RDebug::Print(_L("\033[93m%S\033[0m"), &buf);
}