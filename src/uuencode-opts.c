/*   -*- buffer-read-only: t -*- vi: set ro:
 *
 *  DO NOT EDIT THIS FILE   (uuencode-opts.c)
 *
 *  It has been AutoGen-ed
 *  From the definitions    uuencode-opts.def
 *  and the template file   options
 *
 * Generated from AutoOpts 41:1:16 templates.
 *
 *  AutoOpts is a copyrighted work.  This source file is not encumbered
 *  by AutoOpts licensing, but is provided under the licensing terms chosen
 *  by the uuencode author or copyright holder.  AutoOpts is
 *  licensed under the terms of the LGPL.  The redistributable library
 *  (``libopts'') is licensed under the terms of either the LGPL or, at the
 *  users discretion, the BSD license.  See the AutoOpts and/or libopts sources
 *  for details.
 *
 * The uuencode program is copyrighted and licensed
 * under the following terms:
 *
 *  Copyright (C) 1994-2015 Free Software Foundation, Inc., all rights reserved.
 *  This is free software. It is licensed for use, modification and
 *  redistribution under the terms of the GNU General Public License,
 *  version 3 or later <http://gnu.org/licenses/gpl.html>
 *
 *  uuencode is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  uuencode is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __doxygen__
#define OPTION_CODE_COMPILE 1
#include "uuencode-opts.h"
#include <sys/types.h>

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef  __cplusplus
extern "C" {
#endif
extern FILE * option_usage_fp;
#define zCopyright      (uuencode_opt_strs+0)
#define zLicenseDescrip (uuencode_opt_strs+294)

/*
 *  global included definitions
 */
char const * const program_name = "uuencode";

extern char const * trans_ptr;

#ifndef NULL
#  define NULL 0
#endif

/**
 *  static const strings for uuencode options
 */
static char const uuencode_opt_strs[4269] =
/*     0 */ "uuencode (GNU sharutils) 4.15.2\n"
            "Copyright (C) 1994-2015 Free Software Foundation, Inc., all rights reserved.\n"
            "This is free software. It is licensed for use, modification and\n"
            "redistribution under the terms of the GNU General Public License,\n"
            "version 3 or later <http://gnu.org/licenses/gpl.html>\n\0"
/*   294 */ "uuencode is free software: you can redistribute it and/or modify it under\n"
            "the terms of the GNU General Public License as published by the Free\n"
            "Software Foundation, either version 3 of the License, or (at your option)\n"
            "any later version.\n\n"
            "uuencode is distributed in the hope that it will be useful, but WITHOUT ANY\n"
            "WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS\n"
            "FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more\n"
            "details.\n\n"
            "You should have received a copy of the GNU General Public License along\n"
            "with this program.  If not, see <http://www.gnu.org/licenses/>.\n\0"
/*   899 */ "convert using base64\0"
/*   920 */ "BASE64\0"
/*   927 */ "base64\0"
/*   934 */ "encode the output file name\0"
/*   962 */ "ENCODE_FILE_NAME\0"
/*   979 */ "encode-file-name\0"
/*   996 */ "display extended usage information and exit\0"
/*  1040 */ "help\0"
/*  1045 */ "extended usage information passed thru pager\0"
/*  1090 */ "more-help\0"
/*  1100 */ "output version information and exit\0"
/*  1136 */ "version\0"
/*  1144 */ "save the option state to a config file\0"
/*  1183 */ "save-opts\0"
/*  1193 */ "load options from a config file\0"
/*  1225 */ "LOAD_OPTS\0"
/*  1235 */ "no-load-opts\0"
/*  1248 */ "no\0"
/*  1251 */ "UUENCODE\0"
/*  1260 */ "uuencode (GNU sharutils) - encode a file into email friendly text\n"
            "Usage:  %s [ -<flag> | --<name> ]... [<in-file>] <output-name>\n\0"
/*  1390 */ "$HOME\0"
/*  1396 */ ".sharrc\0"
/*  1404 */ "bug-gnu-utils@gnu.org\0"
/*  1426 */ "'uuencode' is used to create an ASCII representation of a file that can be\n"
            "sent over channels that may otherwise corrupt the data.  Specifically,\n"
            "email cannot handle binary data and will often even insert a character when\n"
            "the six character sequence \"\\nFrom \" is seen.\n\n"
            "'uuencode' will read 'in-file' if provided and otherwise read data from\n"
            "standard in and write the encoded form to standard out.  The output will\n"
            "begin with a header line for use by 'uudecode' giving it the resulting\n"
            "suggested file 'output-name' and access mode.  If the 'output-name' is\n"
            "specifically '/dev/stdout', then 'uudecode' will emit the decoded file to\n"
            "standard out.\n\n"
            "'Note': 'uuencode' uses buffered input and assumes that it is not hand\n"
            "typed from a tty.  The consequence is that at a tty, you may need to hit\n"
            "Ctl-D several times to terminate input.\n\0"
/*  2256 */ "uuencode (GNU sharutils) 4.15.2\0"
/*  2288 */ "uuencode (GNU sharutils) - encode a file into email friendly text\n"
            "Usage:  uuencode [ -<flag> | --<name> ]... [<in-file>] <output-name>\n\n"
            "   -m, --base64               convert using base64\n"
            "   -e, --encode-file-name     encode the output file name\n"
            "   -v, --version[=MODE]       output version information and exit\n"
            "   -h, --help                 display extended usage information and exit\n"
            "   -!, --more-help            extended usage information passed thru pager\n"
            "   -R, --save-opts[=FILE]     save the option state to a config file FILE\n"
            "   -r, --load-opts=FILE       load options from the config file FILE\n"
            "                                - disabled with '--no-load-opts'\n"
            "                                - may appear multiple times\n\n"
            "Options are specified by doubled hyphens and their name or by a single\n"
            "hyphen and the flag character.\n\n"
            "The following option preset mechanisms are supported:\n"
            " - reading file $HOME/.sharrc\n\n"
            "'uuencode' is used to create an ASCII representation of a file that can be\n"
            "sent over channels that may otherwise corrupt the data.  Specifically,\n"
            "email cannot handle binary data and will often even insert a character when\n"
            "the six character sequence \"\\nFrom \" is seen.\n\n"
            "'uuencode' will read 'in-file' if provided and otherwise read data from\n"
            "standard in and write the encoded form to standard out.  The output will\n"
            "begin with a header line for use by 'uudecode' giving it the resulting\n"
            "suggested file 'output-name' and access mode.  If the 'output-name' is\n"
            "specifically '/dev/stdout', then 'uudecode' will emit the decoded file to\n"
            "standard out.\n\n"
            "'Note': 'uuencode' uses buffered input and assumes that it is not hand\n"
            "typed from a tty.  The consequence is that at a tty, you may need to hit\n"
            "Ctl-D several times to terminate input.\n\n"
            "Please send bug reports to:  <bug-gnu-utils@gnu.org>\n\0"
/*  4089 */ "uuencode (GNU sharutils) - encode a file into email friendly text\n"
            "Usage:  uuencode [ -<flag> | --<name> ]... [<in-file>] <output-name>\n"
            "Try 'uuencode --help' for more information.\n";

/**
 *  base64 option description:
 */
/** Descriptive text for the base64 option */
#define BASE64_DESC      (uuencode_opt_strs+899)
/** Upper-cased name for the base64 option */
#define BASE64_NAME      (uuencode_opt_strs+920)
/** Name string for the base64 option */
#define BASE64_name      (uuencode_opt_strs+927)
/** Compiled in flag settings for the base64 option */
#define BASE64_FLAGS     (OPTST_DISABLED)

/**
 *  encode-file-name option description:
 */
/** Descriptive text for the encode-file-name option */
#define ENCODE_FILE_NAME_DESC      (uuencode_opt_strs+934)
/** Upper-cased name for the encode-file-name option */
#define ENCODE_FILE_NAME_NAME      (uuencode_opt_strs+962)
/** Name string for the encode-file-name option */
#define ENCODE_FILE_NAME_name      (uuencode_opt_strs+979)
/** Compiled in flag settings for the encode-file-name option */
#define ENCODE_FILE_NAME_FLAGS     (OPTST_DISABLED)

/*
 *  Help/More_Help/Version option descriptions:
 */
#define HELP_DESC       (uuencode_opt_strs+996)
#define HELP_name       (uuencode_opt_strs+1040)
#ifdef HAVE_WORKING_FORK
#define MORE_HELP_DESC  (uuencode_opt_strs+1045)
#define MORE_HELP_name  (uuencode_opt_strs+1090)
#define MORE_HELP_FLAGS (OPTST_IMM | OPTST_NO_INIT)
#else
#define MORE_HELP_DESC  HELP_DESC
#define MORE_HELP_name  HELP_name
#define MORE_HELP_FLAGS (OPTST_OMITTED | OPTST_NO_INIT)
#endif
#ifdef NO_OPTIONAL_OPT_ARGS
#  define VER_FLAGS     (OPTST_IMM | OPTST_NO_INIT)
#else
#  define VER_FLAGS     (OPTST_SET_ARGTYPE(OPARG_TYPE_STRING) | \
                         OPTST_ARG_OPTIONAL | OPTST_IMM | OPTST_NO_INIT)
#endif
#define VER_DESC        (uuencode_opt_strs+1100)
#define VER_name        (uuencode_opt_strs+1136)
#define SAVE_OPTS_DESC  (uuencode_opt_strs+1144)
#define SAVE_OPTS_name  (uuencode_opt_strs+1183)
#define LOAD_OPTS_DESC     (uuencode_opt_strs+1193)
#define LOAD_OPTS_NAME     (uuencode_opt_strs+1225)
#define NO_LOAD_OPTS_name  (uuencode_opt_strs+1235)
#define LOAD_OPTS_pfx      (uuencode_opt_strs+1248)
#define LOAD_OPTS_name     (NO_LOAD_OPTS_name + 3)
/**
 *  Declare option callback procedures
 */
extern tOptProc
    optionBooleanVal,   optionNestedVal,    optionNumericVal,
    optionPagedUsage,   optionPrintVersion, optionResetOpt,
    optionStackArg,     optionTimeDate,     optionTimeVal,
    optionUnstackArg,   optionVendorOption;
static tOptProc
    doUsageOpt;
#define VER_PROC        optionPrintVersion

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 *  Define the uuencode Option Descriptions.
 * This is an array of OPTION_CT entries, one for each
 * option that the uuencode program responds to.
 */
static tOptDesc optDesc[OPTION_CT] = {
  {  /* entry idx, value */ 0, VALUE_OPT_BASE64,
     /* equiv idx, value */ 0, VALUE_OPT_BASE64,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ BASE64_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --base64 */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ BASE64_DESC, BASE64_NAME, BASE64_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 1, VALUE_OPT_ENCODE_FILE_NAME,
     /* equiv idx, value */ 1, VALUE_OPT_ENCODE_FILE_NAME,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ ENCODE_FILE_NAME_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --encode-file-name */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ ENCODE_FILE_NAME_DESC, ENCODE_FILE_NAME_NAME, ENCODE_FILE_NAME_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_VERSION, VALUE_OPT_VERSION,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_VERSION,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ VER_FLAGS, AOUSE_VERSION,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ VER_PROC,
     /* desc, NAME, name */ VER_DESC, NULL, VER_name,
     /* disablement strs */ NULL, NULL },



  {  /* entry idx, value */ INDEX_OPT_HELP, VALUE_OPT_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OPTST_IMM | OPTST_NO_INIT, AOUSE_HELP,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doUsageOpt,
     /* desc, NAME, name */ HELP_DESC, NULL, HELP_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_MORE_HELP, VALUE_OPT_MORE_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_MORE_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ MORE_HELP_FLAGS, AOUSE_MORE_HELP,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL,  NULL,
     /* option proc      */ optionPagedUsage,
     /* desc, NAME, name */ MORE_HELP_DESC, NULL, MORE_HELP_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_SAVE_OPTS, VALUE_OPT_SAVE_OPTS,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_SAVE_OPTS,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OPTST_SET_ARGTYPE(OPARG_TYPE_STRING)
                       | OPTST_ARG_OPTIONAL | OPTST_NO_INIT, AOUSE_SAVE_OPTS,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL,  NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ SAVE_OPTS_DESC, NULL, SAVE_OPTS_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_LOAD_OPTS, VALUE_OPT_LOAD_OPTS,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_LOAD_OPTS,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, NOLIMIT, 0,
     /* opt state flags  */ OPTST_SET_ARGTYPE(OPARG_TYPE_STRING)
			  | OPTST_DISABLE_IMM, AOUSE_LOAD_OPTS,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ optionLoadOpt,
     /* desc, NAME, name */ LOAD_OPTS_DESC, LOAD_OPTS_NAME, LOAD_OPTS_name,
     /* disablement strs */ NO_LOAD_OPTS_name, LOAD_OPTS_pfx }
};


/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/** Reference to the upper cased version of uuencode. */
#define zPROGNAME       (uuencode_opt_strs+1251)
/** Reference to the title line for uuencode usage. */
#define zUsageTitle     (uuencode_opt_strs+1260)
/** uuencode configuration file name. */
#define zRcName         (uuencode_opt_strs+1396)
/** Directories to search for uuencode config files. */
static char const * const apzHomeList[2] = {
    uuencode_opt_strs+1390,
    NULL };
/** The uuencode program bug email address. */
#define zBugsAddr       (uuencode_opt_strs+1404)
/** Clarification/explanation of what uuencode does. */
#define zExplain        (NULL)
/** Extra detail explaining what uuencode does. */
#define zDetail         (uuencode_opt_strs+1426)
/** The full version string for uuencode. */
#define zFullVersion    (uuencode_opt_strs+2256)
/* extracted from optcode.tlib near line 364 */

#if defined(ENABLE_NLS)
# define OPTPROC_BASE OPTPROC_TRANSLATE
  static tOptionXlateProc translate_option_strings;
#else
# define OPTPROC_BASE OPTPROC_NONE
# define translate_option_strings NULL
#endif /* ENABLE_NLS */

#define uuencode_full_usage (uuencode_opt_strs+2288)
#define uuencode_short_usage (uuencode_opt_strs+4089)

#endif /* not defined __doxygen__ */

/*
 *  Create the static procedure(s) declared above.
 */
/**
 * The callout function that invokes the optionUsage function.
 *
 * @param[in] opts the AutoOpts option description structure
 * @param[in] od   the descriptor for the "help" (usage) option.
 * @noreturn
 */
static void
doUsageOpt(tOptions * opts, tOptDesc * od)
{
    int ex_code;
    ex_code = UUENCODE_EXIT_SUCCESS;
    optionUsage(&uuencodeOptions, ex_code);
    /* NOTREACHED */
    exit(1);
    (void)opts;
    (void)od;
}
/* extracted from optmain.tlib near line 1250 */

/**
 * Print a usage message with a format and va_list argument.
 * The optionUsage function is then invoked to print
 * the error usage text (somewhat abbreviated) and then exit.
 *
 * @param[in] fmt the message format string
 * @param[in] ap  the var-arg list.
 * @noreturn
 */
void
vusage_message(char const * fmt, va_list ap)
{
    char const * er_leader = _("uuencode usage error:\n");
    fputs(er_leader, stderr);
    vfprintf(stderr, fmt, ap);
    optionUsage(&uuencodeOptions, UUENCODE_EXIT_USAGE_ERROR);
    /* NOTREACHED */
    exit(1);
}

/**
 * Print a usage message with a format and a variable argument list.
 * vusage_message() is called to do the work.
 *
 * @param[in] fmt the message format string
 * @param[in] ... the argument list for the message
 * @noreturn
 */
void
usage_message(char const * fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    vusage_message(fmt, ap);
    /* NOTREACHED */
    va_end(ap);
}

/**
 * Print a fatal error message and die, \a va_list style.
 *
 * @param[in] exit_code  the value to call exit(3) with
 * @param[in] fmt        the death rattle message
 * @param[in] ap         the argument list for the message
 * @noreturn
 */
void
vdie(int exit_code, char const * fmt, va_list ap)
{
    char const * die_leader = _("uuencode fatal error:\n");
    fputs(die_leader, stderr);
    vfprintf(stderr, fmt, ap);
    fflush(stderr);
    exit(exit_code);
    /* NOTREACHED */
}

/**
 * Print a fatal error message and die, var-arg style.
 *
 * @param[in] exit_code  the value to call exit(3) with
 * @param[in] fmt        the death rattle message
 * @param[in] ...        the list of arguments for the message
 * @noreturn
 */
void
die(int exit_code, char const * fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    vdie(exit_code, fmt, ap);
    /* NOTREACHED */
    va_end(ap);
}

/**
 * Print a file system error fatal error message and die.
 *
 * @param[in] exit_code  the value to call exit(3) with.
 * @param[in] op         the operation that failed.
 * @param[in] fname      the file name the operation was on.
 * @noreturn
 */
void
fserr(int exit_code, char const * op, char const * fname)
{
    char const * fserr_fmt = _("fserr %d (%s) performing '%s' on %s\n");
    die(exit_code, fserr_fmt, errno, strerror(errno), op, fname);
    /* NOTREACHED */
}

/**
 * The directory containing the data associated with uuencode.
 */
#ifndef  PKGDATADIR
# define PKGDATADIR ""
#endif

/**
 * Information about the person or institution that packaged uuencode
 * for the current distribution.
 */
#ifndef  WITH_PACKAGER
# define uuencode_packager_info NULL
#else
/** Packager information for uuencode. */
static char const uuencode_packager_info[] =
    "Packaged by " WITH_PACKAGER

# ifdef WITH_PACKAGER_VERSION
        " ("WITH_PACKAGER_VERSION")"
# endif

# ifdef WITH_PACKAGER_BUG_REPORTS
    "\nReport uuencode bugs to " WITH_PACKAGER_BUG_REPORTS
# endif
    "\n";
#endif
#ifndef __doxygen__

#endif /* __doxygen__ */
/**
 * The option definitions for uuencode.  The one structure that
 * binds them all.
 */
tOptions uuencodeOptions = {
    OPTIONS_STRUCT_VERSION,
    0, NULL,                    /* original argc + argv    */
    ( OPTPROC_BASE
    + OPTPROC_ERRSTOP
    + OPTPROC_SHORTOPT
    + OPTPROC_LONGOPT
    + OPTPROC_NO_REQ_OPT
    + OPTPROC_GNUUSAGE
    + OPTPROC_MISUSE ),
    0, NULL,                    /* current option index, current option */
    NULL,         NULL,         zPROGNAME,
    zRcName,      zCopyright,   zLicenseDescrip,
    zFullVersion, apzHomeList,  zUsageTitle,
    zExplain,     zDetail,      optDesc,
    zBugsAddr,                  /* address to send bugs to */
    NULL, NULL,                 /* extensions/saved state  */
    optionUsage, /* usage procedure */
    translate_option_strings,   /* translation procedure */
    /*
     *  Indexes to special options
     */
    { INDEX_OPT_MORE_HELP, /* more-help option index */
      INDEX_OPT_SAVE_OPTS, /* save option index */
      NO_EQUIVALENT, /* '-#' option index */
      NO_EQUIVALENT /* index of default opt */
    },
    7 /* full option count */, 2 /* user option count */,
    uuencode_full_usage, uuencode_short_usage,
    NULL, NULL,
    PKGDATADIR, uuencode_packager_info
};

#if ENABLE_NLS
/**
 * This code is designed to translate translatable option text for the
 * uuencode program.  These translations happen upon entry
 * to optionProcess().
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#ifdef HAVE_DCGETTEXT
# include <gettext.h>
#endif
#include <autoopts/usage-txt.h>

static char * AO_gettext(char const * pz);
static void   coerce_it(void ** s);

/**
 * AutoGen specific wrapper function for gettext.  It relies on the macro _()
 * to convert from English to the target language, then strdup-duplicates the
 * result string.  It tries the "libopts" domain first, then whatever has been
 * set via the \a textdomain(3) call.
 *
 * @param[in] pz the input text used as a lookup key.
 * @returns the translated text (if there is one),
 *   or the original text (if not).
 */
static char *
AO_gettext(char const * pz)
{
    char * res;
    if (pz == NULL)
        return NULL;
#ifdef HAVE_DCGETTEXT
    /*
     * While processing the option_xlateable_txt data, try to use the
     * "libopts" domain.  Once we switch to the option descriptor data,
     * do *not* use that domain.
     */
    if (option_xlateable_txt.field_ct != 0) {
        res = dgettext("libopts", pz);
        if (res == pz)
            res = (char *)VOIDP(_(pz));
    } else
        res = (char *)VOIDP(_(pz));
#else
    res = (char *)VOIDP(_(pz));
#endif
    if (res == pz)
        return res;
    res = strdup(res);
    if (res == NULL) {
        fputs(_("No memory for duping translated strings\n"), stderr);
        exit(UUENCODE_EXIT_FAILURE);
    }
    return res;
}

/**
 * All the pointers we use are marked "* const", but they are stored in
 * writable memory.  Coerce the mutability and set the pointer.
 */
static void coerce_it(void ** s) { *s = AO_gettext(*s);
}

/**
 * Translate all the translatable strings in the uuencodeOptions
 * structure defined above.  This is done only once.
 */
static void
translate_option_strings(void)
{
    tOptions * const opts = &uuencodeOptions;

    /*
     *  Guard against re-translation.  It won't work.  The strings will have
     *  been changed by the first pass through this code.  One shot only.
     */
    if (option_xlateable_txt.field_ct != 0) {
        /*
         *  Do the translations.  The first pointer follows the field count
         *  field.  The field count field is the size of a pointer.
         */
        char ** ppz = (char**)VOIDP(&(option_xlateable_txt));
        int     ix  = option_xlateable_txt.field_ct;

        do {
            ppz++; /* skip over field_ct */
            *ppz = AO_gettext(*ppz);
        } while (--ix > 0);
        /* prevent re-translation and disable "libopts" domain lookup */
        option_xlateable_txt.field_ct = 0;

        coerce_it(VOIDP(&(opts->pzCopyright)));
        coerce_it(VOIDP(&(opts->pzCopyNotice)));
        coerce_it(VOIDP(&(opts->pzFullVersion)));
    }
}
#endif /* ENABLE_NLS */

#ifdef DO_NOT_COMPILE_THIS_CODE_IT_IS_FOR_GETTEXT
/** I18N function strictly for xgettext.  Do not compile. */
static void bogus_function(void) {
  /* TRANSLATORS:

     The following dummy function was crated solely so that xgettext can
     extract the correct strings.  These strings are actually referenced
     by a field name in the uuencodeOptions structure noted in the
     comments below.  The literal text is defined in uuencode_opt_strs.
   
     NOTE: the strings below are segmented with respect to the source string
     uuencode_opt_strs.  The strings above are handed off for translation
     at run time a paragraph at a time.  Consequently, they are presented here
     for translation a paragraph at a time.
   
     ALSO: often the description for an option will reference another option
     by name.  These are set off with apostrophe quotes (I hope).  Do not
     translate option names.
   */
  /* referenced via uuencodeOptions.pzCopyright */
  puts(_("uuencode (GNU sharutils) 4.15.2\n\
Copyright (C) 1994-2015 Free Software Foundation, Inc., all rights reserved.\n\
This is free software. It is licensed for use, modification and\n\
redistribution under the terms of the GNU General Public License,\n\
version 3 or later <http://gnu.org/licenses/gpl.html>\n"));

  /* referenced via uuencodeOptions.pzCopyNotice */
  puts(_("uuencode is free software: you can redistribute it and/or modify it under\n\
the terms of the GNU General Public License as published by the Free\n\
Software Foundation, either version 3 of the License, or (at your option)\n\
any later version.\n\n"));
  puts(_("uuencode is distributed in the hope that it will be useful, but WITHOUT ANY\n\
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS\n\
FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more\n\
details.\n\n"));
  puts(_("You should have received a copy of the GNU General Public License along\n\
with this program.  If not, see <http://www.gnu.org/licenses/>.\n"));

  /* referenced via uuencodeOptions.pzUsageTitle */
  puts(_("uuencode (GNU sharutils) - encode a file into email friendly text\n\
Usage:  %s [ -<flag> | --<name> ]... [<in-file>] <output-name>\n"));

  /* referenced via uuencodeOptions.pzDetail */
  puts(_("'uuencode' is used to create an ASCII representation of a file that can be\n\
sent over channels that may otherwise corrupt the data.  Specifically,\n\
email cannot handle binary data and will often even insert a character when\n\
the six character sequence \"\\nFrom \" is seen.\n\n"));
  puts(_("'uuencode' will read 'in-file' if provided and otherwise read data from\n\
standard in and write the encoded form to standard out.  The output will\n\
begin with a header line for use by 'uudecode' giving it the resulting\n\
suggested file 'output-name' and access mode.  If the 'output-name' is\n\
specifically '/dev/stdout', then 'uudecode' will emit the decoded file to\n\
standard out.\n\n"));
  puts(_("'Note': 'uuencode' uses buffered input and assumes that it is not hand\n\
typed from a tty.  The consequence is that at a tty, you may need to hit\n\
Ctl-D several times to terminate input.\n"));

  /* referenced via uuencodeOptions.pzFullVersion */
  puts(_("uuencode (GNU sharutils) 4.15.2"));

  /* referenced via uuencodeOptions.pzFullUsage */
  puts(_("uuencode (GNU sharutils) - encode a file into email friendly text\n\
Usage:  uuencode [ -<flag> | --<name> ]... [<in-file>] <output-name>\n\n"));
  puts(_("   -m, --base64               convert using base64\n"));
  puts(_("   -e, --encode-file-name     encode the output file name\n"));
  puts(_("   -v, --version[=MODE]       output version information and exit\n"));
  puts(_("   -h, --help                 display extended usage information and exit\n"));
  puts(_("   -!, --more-help            extended usage information passed thru pager\n"));
  puts(_("   -R, --save-opts[=FILE]     save the option state to a config file FILE\n"));
  puts(_("   -r, --load-opts=FILE       load options from the config file FILE\n\
                                - disabled with '--no-load-opts'\n\
                                - may appear multiple times\n\n"));
  puts(_("Options are specified by doubled hyphens and their name or by a single\n\
hyphen and the flag character.\n\n"));
  puts(_("The following option preset mechanisms are supported:\n"));
  puts(_(" - reading file $HOME/.sharrc\n\n\
'uuencode' is used to create an ASCII representation of a file that can be\n\
sent over channels that may otherwise corrupt the data.  Specifically,\n\
email cannot handle binary data and will often even insert a character when\n\
the six character sequence \"\\nFrom \" is seen.\n\n"));
  puts(_("'uuencode' will read 'in-file' if provided and otherwise read data from\n\
standard in and write the encoded form to standard out.  The output will\n\
begin with a header line for use by 'uudecode' giving it the resulting\n\
suggested file 'output-name' and access mode.  If the 'output-name' is\n\
specifically '/dev/stdout', then 'uudecode' will emit the decoded file to\n\
standard out.\n\n"));
  puts(_("'Note': 'uuencode' uses buffered input and assumes that it is not hand\n\
typed from a tty.  The consequence is that at a tty, you may need to hit\n\
Ctl-D several times to terminate input.\n\n\
Please send bug reports to:  <bug-gnu-utils@gnu.org>\n"));

  /* referenced via uuencodeOptions.pzShortUsage */
  puts(_("uuencode (GNU sharutils) - encode a file into email friendly text\n\
Usage:  uuencode [ -<flag> | --<name> ]... [<in-file>] <output-name>\n\
Try 'uuencode --help' for more information.\n"));
  /* LIBOPTS-MESSAGES: */
#line 67 "../autoopts.c"
  puts(_("allocation of %d bytes failed\n"));
#line 93 "../autoopts.c"
  puts(_("allocation of %d bytes failed\n"));
#line 53 "../init.c"
  puts(_("AutoOpts function called without option descriptor\n"));
#line 86 "../init.c"
  puts(_("\tThis exceeds the compiled library version:  "));
#line 84 "../init.c"
  puts(_("Automated Options Processing Error!\n"
       "\t%s called AutoOpts function with structure version %d:%d:%d.\n"));
#line 80 "../autoopts.c"
  puts(_("realloc of %d bytes at 0x%p failed\n"));
#line 88 "../init.c"
  puts(_("\tThis is less than the minimum library version:  "));
#line 121 "../version.c"
  puts(_("Automated Options version %s\n"
       "\tCopyright (C) 1999-2014 by Bruce Korb - all rights reserved\n"));
#line 87 "../makeshell.c"
  puts(_("(AutoOpts bug):  %s.\n"));
#line 90 "../reset.c"
  puts(_("optionResetOpt() called, but reset-option not configured"));
#line 292 "../usage.c"
  puts(_("could not locate the 'help' option"));
#line 336 "../autoopts.c"
  puts(_("optionProcess() was called with invalid data"));
#line 748 "../usage.c"
  puts(_("invalid argument type specified"));
#line 598 "../find.c"
  puts(_("defaulted to option with optional arg"));
#line 76 "../alias.c"
  puts(_("aliasing option is out of range."));
#line 234 "../enum.c"
  puts(_("%s error:  the keyword '%s' is ambiguous for %s\n"));
#line 108 "../find.c"
  puts(_("  The following options match:\n"));
#line 293 "../find.c"
  puts(_("%s: ambiguous option name: %s (matches %d options)\n"));
#line 161 "../check.c"
  puts(_("%s: Command line arguments required\n"));
#line 43 "../alias.c"
  puts(_("%d %s%s options allowed\n"));
#line 94 "../makeshell.c"
  puts(_("%s error %d (%s) calling %s for '%s'\n"));
#line 306 "../makeshell.c"
  puts(_("interprocess pipe"));
#line 168 "../version.c"
  puts(_("error: version option argument '%c' invalid.  Use:\n"
       "\t'v' - version only\n"
       "\t'c' - version and copyright\n"
       "\t'n' - version and full copyright notice\n"));
#line 58 "../check.c"
  puts(_("%s error:  the '%s' and '%s' options conflict\n"));
#line 217 "../find.c"
  puts(_("%s: The '%s' option has been disabled."));
#line 430 "../find.c"
  puts(_("%s: The '%s' option has been disabled."));
#line 38 "../alias.c"
  puts(_("-equivalence"));
#line 469 "../find.c"
  puts(_("%s: illegal option -- %c\n"));
#line 110 "../reset.c"
  puts(_("%s: illegal option -- %c\n"));
#line 271 "../find.c"
  puts(_("%s: illegal option -- %s\n"));
#line 755 "../find.c"
  puts(_("%s: illegal option -- %s\n"));
#line 118 "../reset.c"
  puts(_("%s: illegal option -- %s\n"));
#line 335 "../find.c"
  puts(_("%s: unknown vendor extension option -- %s\n"));
#line 159 "../enum.c"
  puts(_("  or an integer from %d through %d\n"));
#line 169 "../enum.c"
  puts(_("  or an integer from %d through %d\n"));
#line 747 "../usage.c"
  puts(_("%s error:  invalid option descriptor for %s\n"));
#line 1081 "../usage.c"
  puts(_("%s error:  invalid option descriptor for %s\n"));
#line 385 "../find.c"
  puts(_("%s: invalid option name: %s\n"));
#line 527 "../find.c"
  puts(_("%s: The '%s' option requires an argument.\n"));
#line 156 "../autoopts.c"
  puts(_("(AutoOpts bug):  Equivalenced option '%s' was equivalenced to both\n"
       "\t'%s' and '%s'."));
#line 94 "../check.c"
  puts(_("%s error:  The %s option is required\n"));
#line 632 "../find.c"
  puts(_("%s: The '%s' option cannot have an argument.\n"));
#line 151 "../check.c"
  puts(_("%s: Command line arguments are not allowed.\n"));
#line 535 "../save.c"
  puts(_("error %d (%s) creating %s\n"));
#line 234 "../enum.c"
  puts(_("%s error:  '%s' does not match any %s keywords.\n"));
#line 93 "../reset.c"
  puts(_("%s error: The '%s' option requires an argument.\n"));
#line 184 "../save.c"
  puts(_("error %d (%s) stat-ing %s\n"));
#line 238 "../save.c"
  puts(_("error %d (%s) stat-ing %s\n"));
#line 143 "../restore.c"
  puts(_("%s error: no saved option state\n"));
#line 231 "../autoopts.c"
  puts(_("'%s' is not a command line option.\n"));
#line 111 "../time.c"
  puts(_("%s error:  '%s' is not a recognizable date/time.\n"));
#line 132 "../save.c"
  puts(_("'%s' not defined\n"));
#line 50 "../time.c"
  puts(_("%s error:  '%s' is not a recognizable time duration.\n"));
#line 92 "../check.c"
  puts(_("%s error:  The %s option must appear %d times.\n"));
#line 164 "../numeric.c"
  puts(_("%s error:  '%s' is not a recognizable number.\n"));
#line 200 "../enum.c"
  puts(_("%s error:  %s exceeds %s keyword count\n"));
#line 330 "../usage.c"
  puts(_("Try '%s %s' for more information.\n"));
#line 45 "../alias.c"
  puts(_("one %s%s option allowed\n"));
#line 208 "../makeshell.c"
  puts(_("standard output"));
#line 943 "../makeshell.c"
  puts(_("standard output"));
#line 274 "../usage.c"
  puts(_("standard output"));
#line 415 "../usage.c"
  puts(_("standard output"));
#line 625 "../usage.c"
  puts(_("standard output"));
#line 175 "../version.c"
  puts(_("standard output"));
#line 274 "../usage.c"
  puts(_("standard error"));
#line 415 "../usage.c"
  puts(_("standard error"));
#line 625 "../usage.c"
  puts(_("standard error"));
#line 175 "../version.c"
  puts(_("standard error"));
#line 208 "../makeshell.c"
  puts(_("write"));
#line 943 "../makeshell.c"
  puts(_("write"));
#line 273 "../usage.c"
  puts(_("write"));
#line 414 "../usage.c"
  puts(_("write"));
#line 624 "../usage.c"
  puts(_("write"));
#line 174 "../version.c"
  puts(_("write"));
#line 60 "../numeric.c"
  puts(_("%s error:  %s option value %ld is out of range.\n"));
#line 44 "../check.c"
  puts(_("%s error:  %s option requires the %s option\n"));
#line 131 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 183 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 237 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 256 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 534 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
  /* END-LIBOPTS-MESSAGES */
}
#endif /* uncompilable code */
#ifdef  __cplusplus
}
#endif
/* uuencode-opts.c ends here */
