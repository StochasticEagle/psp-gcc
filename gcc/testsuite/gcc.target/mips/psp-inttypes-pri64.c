/* Verify that the PSP GCC/newlib header chain exposes the C99 64-bit
   integer format macros.  */
/* { dg-do compile { target { mipsallegrex*-psp-elf* } } } */

#include <stdint.h>
#include <inttypes.h>

#ifndef PRIi64
#error "PRIi64 must be defined for PSP/newlib"
#endif

#ifndef PRIx64
#error "PRIx64 must be defined for PSP/newlib"
#endif

#ifndef PRIu64
#error "PRIu64 must be defined for PSP/newlib"
#endif

static int64_t signed_value;
static uint64_t unsigned_value;

static const char *const signed_format = "%" PRIi64;
static const char *const hex_format = "%" PRIx64;
static const char *const unsigned_format = "%" PRIu64;

void
psp_inttypes_pri64_test (void)
{
  (void) signed_value;
  (void) unsigned_value;
  (void) signed_format;
  (void) hex_format;
  (void) unsigned_format;
}
