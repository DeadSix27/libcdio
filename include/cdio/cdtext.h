/*
    $Id: cdtext.h,v 1.2 2004/07/09 01:05:31 rocky Exp $

    Copyright (C) 2004 Rocky Bernstein <rocky@panix.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
/*!
 * \file cdtext.h 
 * \brief Header CDTEXT information
*/


#ifndef __CDIO_CDTEXT_H__
#define __CDIO_CDTEXT_H__

#include <cdio/cdio.h>

typedef struct cdtext cdtext_t;

/*! Initialize and allocate a new cdtext structure and return a
  pointer to that. When the structure is no longer needed, release the 
  resources using cdtext_delete.
*/
cdtext_t *cdtext_init (void);

/*! Free memory assocated with cdtext*/
void cdtext_delete (cdtext_t *cdtext);

/*!
  returns 0 if field is a CD-TEXT keyword, returns non-zero otherwise.
*/
int cdtext_is_keyword (char *key);

/*! 
  sets cdtext's keyword entry to field 
 */
void cdtext_set (char *key, char *value, cdtext_t *cdtext);

char *cdtext_get (char *key, cdtext_t *cdtext);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __CDIO_ISO9660_H__ */

/* 
 * Local variables:
 *  c-file-style: "gnu"
 *  tab-width: 8
 *  indent-tabs-mode: nil
 * End:
 */