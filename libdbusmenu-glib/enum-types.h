
/* Generated data (by glib-mkenums) */

/*
Enums from the dbusmenu headers

Copyright 2011 Canonical Ltd.

Authors:
    Ted Gould <ted@canonical.com>

This program is free software: you can redistribute it and/or modify it 
under the terms of either or both of the following licenses:

1) the GNU Lesser General Public License version 3, as published by the 
   Free Software Foundation; and/or
2) the GNU Lesser General Public License version 2.1, as published by 
   the Free Software Foundation.

This program is distributed in the hope that it will be useful, but 
WITHOUT ANY WARRANTY; without even the implied warranties of 
MERCHANTABILITY, SATISFACTORY QUALITY or FITNESS FOR A PARTICULAR 
PURPOSE.  See the applicable version of the GNU Lesser General Public 
License for more details.

You should have received a copy of both the GNU Lesser General Public 
License version 3 and version 2.1 along with this program.  If not, see 
<http://www.gnu.org/licenses/>
*/

#ifndef __DBUSMENU_ENUM_TYPES_H__
#define __DBUSMENU_ENUM_TYPES_H__

#include <glib-object.h>

G_BEGIN_DECLS

/* Enumerations from file: "types.h" */
#include "types.h"


GType dbusmenu_text_direction_get_type (void) G_GNUC_CONST;
const gchar * dbusmenu_text_direction_get_nick (DbusmenuTextDirection value) G_GNUC_CONST;
DbusmenuTextDirection dbusmenu_text_direction_get_value_from_nick (const gchar * nick) G_GNUC_CONST;

/**
	DBUSMENU_TYPE_TEXT_DIRECTION:

	Gets the #GType value for the type associated with the
	#DbusmenuTextDirection enumerated type.
*/
#define DBUSMENU_TYPE_TEXT_DIRECTION (dbusmenu_text_direction_get_type())


GType dbusmenu_status_get_type (void) G_GNUC_CONST;
const gchar * dbusmenu_status_get_nick (DbusmenuStatus value) G_GNUC_CONST;
DbusmenuStatus dbusmenu_status_get_value_from_nick (const gchar * nick) G_GNUC_CONST;

/**
	DBUSMENU_TYPE_STATUS:

	Gets the #GType value for the type associated with the
	#DbusmenuStatus enumerated type.
*/
#define DBUSMENU_TYPE_STATUS (dbusmenu_status_get_type())


G_END_DECLS

#endif /* __DBUSMENU_ENUM_TYPES_H__ */

/* Generated data ends here */

