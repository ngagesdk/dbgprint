// Spdx-License-Identifier: MIT

#ifndef DBGPRINT_H
#define DBGPRINT_H

#define dbgprint_f(message) dbgprint("%s(): %s", __FUNCTION__, message)

#ifdef __cplusplus
extern "C" {
#endif

void dbgprint(const char* format, ...);

#ifdef __cplusplus
}
#endif

#endif /* DBGPRINT_H */
