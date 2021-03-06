/*
 * and its toplevel COPYING file starts with:
 *
 * GROMACS is free software, distributed under the GNU General Public License
 * (GPL) Version 2.
 */

/* #undef _LARGEFILE_SOURCE */
/* #undef _LARGEFILE64_SOURCE */
/* #undef _LARGE_FILES */
/* #undef _FILE_OFFSET_BITS */

/* detect failure even with -Wno-error on command line */
#pragma GCC diagnostic error "-Werror"

#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  /* Cause a compile-time error if off_t is smaller than 64 bits,
   * and make sure we have ftello / fseeko.
   */
#define LARGE_OFF_T (((off_t) 1 << 62) - 1 + ((off_t) 1 << 62))
  int off_t_is_large[ (LARGE_OFF_T % 2147483629 == 721 && LARGE_OFF_T % 2147483647 == 1) ? 1 : -1 ];
  /* silence unused warnings */
  FILE *fp;
  off_t offset;
  (void)off_t_is_large;
  (void)argc;
  (void)argv;
  fp = fopen(argv[0],"r");
  offset = ftello( fp );

  fseeko( fp, offset, SEEK_CUR );
  fclose(fp);
  return 0;
}

