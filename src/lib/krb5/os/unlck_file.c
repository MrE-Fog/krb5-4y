/*
 * $Source$
 * $Author$
 *
 * Copyright 1990 by the Massachusetts Institute of Technology.
 * All Rights Reserved.
 *
 * For copying and distribution information, please see the file
 * <krb5/copyright.h>.
 *
 * libos: krb5_lock_file routine
 */

#if !defined(lint) && !defined(SABER)
static char rcsid_unlock_file_c [] =
"$Id$";
#endif	/* !lint & !SABER */

#include <stdio.h>

#include <krb5/krb5.h>
#include <krb5/libos.h>
#include <krb5/libos-proto.h>

krb5_error_code
krb5_unlock_file(filep, pathname)
FILE *filep;
char *pathname;
{
    return krb5_lock_file(filep, pathname, KRB5_LOCKMODE_UNLOCK);
}
