/*
 * security.c:  Security internal calls
 *
 * Author:
 *	Sebastien Pouliot  <sebastien@ximian.com>
 *
 * (C) 2004 Novell (http://www.novell.com)
 */


#ifndef _MONO_METADATA_SECURITY_H_
#define _MONO_METADATA_SECURITY_H_

#include <mono/metadata/object.h>


/* System.Environment */
extern MonoString* ves_icall_System_Environment_get_UserName (void);


/* System.Security.Principal.WindowsIdentity */
extern MonoArray* ves_icall_System_Security_Principal_WindowsIdentity_GetRoles (gpointer token);
extern gpointer ves_icall_System_Security_Principal_WindowsIdentity_GetCurrentToken (void);
extern MonoString* ves_icall_System_Security_Principal_WindowsIdentity_GetTokenName (gpointer token);
extern gpointer ves_icall_System_Security_Principal_WindowsIdentity_GetUserToken (MonoString *username);


/* System.Security.Principal.WindowsImpersonationContext */
extern gboolean ves_icall_System_Security_Principal_WindowsImpersonationContext_CloseToken (gpointer token);
extern gpointer ves_icall_System_Security_Principal_WindowsImpersonationContext_DuplicateToken (gpointer token);
extern gboolean ves_icall_System_Security_Principal_WindowsImpersonationContext_SetCurrentToken (gpointer token);
extern gboolean ves_icall_System_Security_Principal_WindowsImpersonationContext_RevertToSelf (void);


/* System.Security.Principal.WindowsPrincipal */
extern gboolean ves_icall_System_Security_Principal_WindowsPrincipal_IsMemberOfGroupId (gpointer user, gpointer group);
extern gboolean ves_icall_System_Security_Principal_WindowsPrincipal_IsMemberOfGroupName (gpointer user, MonoString *group);


#endif /* _MONO_METADATA_SECURITY_H_ */

