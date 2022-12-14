# Configure template for GNU shar utilities. -*- Mode: M4 -*-
# Copyright (C) 1994-2015 Free Software Foundation, Inc.
# Process this file with autoconf to produce a configure script.
#
AC_INIT([GNU sharutils],[4.15.2],[bug-gnu-utils@gnu.org])
AC_CONFIG_SRCDIR([src/shar.c])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([1.14 dist-xz])
AC_USE_SYSTEM_EXTENSIONS
AC_SUBST(DIST_ALPHA)
AC_PROG_CC
gl_EARLY
AM_GNU_GETTEXT([no-libtool])
AM_GNU_GETTEXT_VERSION([0.19.3])
gl_INIT
AC_PROG_INSTALL
AC_PROG_MAKE_SET
AC_PROG_RANLIB
AM_PROG_CC_C_O
AM_PROG_AR

dnl FIXME: Check that it is GNU diff indeed.
# Carefully avoid gdiff for X as found on SGI systems.
[if (DISPLAY= gdiff /dev/null /dev/null) 2> /dev/null; then]
  AC_PATH_PROGS(DIFF, [gnudiff diffgnu gdiff diff], [no])
[else]
  AC_PATH_PROGS(DIFF, [gnudiff diffgnu diff], [no])
[fi

my_save_cflags="$CFLAGS"
CFLAGS=${CFLAGS}' -Wno-format-contains-nul']
AC_MSG_CHECKING([whether CC supports -Wformat-contains-nul])
AC_COMPILE_IFELSE([AC_LANG_PROGRAM([])],
    [AC_MSG_RESULT([yes])]
    [AM_CFLAGS="${AM_CFLAGS} -Wno-format-contains-nul"
    my_save_cflags="$CFLAGS"],
    [AC_MSG_RESULT([no])]
)
[CFLAGS="$my_save_cflags"]
AC_SUBST([AM_CFLAGS])

dnl FIXME: Check that mailer accepts -s.
[PATH_save="$PATH"; PATH="$PATH:/usr/sbin:/usr/ucb:/usr/bin:/bin"]
AC_PATH_PROGS(MAILER, [mailx elm mush mail], [no])
[PATH="$PATH_save"]

AC_PATH_PROGS(SH,  [bash ksh dash sh], [no])
AC_PATH_PROGS(TAR, [gnutar targnu gtar tar], [tar])

dnl in m4/sharutils.m4
CHECK_COMPRESS_AND_LINK

AC_SEARCH_LIBS([strerror],[cposix])
AC_SYS_LARGEFILE
[if test $cross_compiling = no; then]
  AC_C_CHAR_UNSIGNED
[fi]
AC_C_CONST
AC_C_INLINE
AC_C_BIGENDIAN

AC_CHECK_HEADERS([locale.h stdbool.h])
AC_HEADER_DIRENT
[test X$ac_header_dirent = Xno && {]
  AC_MSG_ERROR([a dirent header is required.])
[}
DIRENT_HEADER="<${ac_header_dirent}>"]
AC_DEFINE_UNQUOTED(DIRENT_HEADER, [${DIRENT_HEADER}],
         [define to directory entry header file])
AC_SUBST(DIRENT_HEADER)
AC_HEADER_STAT
AC_HEADER_STDC
AC_STRUCT_TIMEZONE
AC_TYPE_SIZE_T
AC_CHECK_FUNCS([fchmod isascii strchr])
AC_FUNC_CLOSEDIR_VOID
AC_FUNC_FSEEKO
AC_REPLACE_FUNCS([memset mktime strftime xmalloc xstrdup])
AC_ARG_ENABLE(uucode,
  [AS_HELP_STRING([--disable-uucode],
	[disable installation of uuencode and uudecode])])
AM_CONDITIONAL(UUCODE, [test "x$enable_uucode" != xno])

AM_WITH_DMALLOC

# sharutils is somewhat special about internationalization in that it
# always requires the GNU .mo files installed.
[if test "x$CATOBJEXT" = "x.mo" || test "x$CATOBJEXT" = "x.cat"; then
  new_CATALOGS=""
  for cat in $CATALOGS; do
    lang=`echo $cat | sed "s/\(.*\)\..*/\1/"`
    new_CATALOGS="$new_CATALOGS $cat $lang.gmo"
  done
  CATALOGS="$new_CATALOGS"
fi]

# INVOKE_LIBOPTS_MACROS
[ac_cv_header_alloca_h=yes
ac_cv_header_ctype_h=yes
ac_cv_header_getopt_h=yes
ac_cv_header_stddef_h=yes
ac_cv_header_stdio_h=yes
ac_cv_header_stdlib_h=yes
ac_cv_header_stdnoreturn_h=yes
ac_cv_header_string_h=yes
ac_cv_header_sys_utsname_h=yes
ac_cv_header_sys_wait_h=yes
ac_cv_header_time_h=yes
ac_cv_header_unistd_h=yes
]INVOKE_LIBOPTS_MACROS

[AUTOGEN=`command -v autogen`
$AUTOGEN --version >/dev/null 2>&1 || AUTOGEN='touch $@']
AC_SUBST(AUTOGEN)

AH_TOP([#ifndef SHARUTILS_CONFIG_H])
AH_TOP([#define SHARUTILS_CONFIG_H 1])
AH_BOTTOM([#endif /* SHARUTILS_CONFIG_H */])
AC_CONFIG_FILES([
  doc/Makefile
  intl/Makefile
  lib/Makefile
  po/Makefile.in
  src/Makefile
  tests/Makefile
  libopts/Makefile
  Makefile
])
AC_OUTPUT
dnl Local Variables:
dnl mode: autoconf-mode
dnl tab-width: 8
dnl indent-tabs-mode: nil
dnl sh-indentation: 2
dnl sh-basic-offset: 2
dnl End:
dnl
dnl end of configure.ac
