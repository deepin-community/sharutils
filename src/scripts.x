/*  -*- buffer-read-only: t -*- vi: set ro:
 *
 * DO NOT EDIT THIS FILE   (scripts.x)
 *
 * It has been AutoGen-ed
 * From the definitions    scripts.def
 * and the template file   scripts.tpl
 *
 * shar is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * shar is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  This file defines the shell script strings in C format.
 *  The compiler will reconstruct the original string found in scripts.def.
 *  shar.c will emit these strings into the constructed shar archive.
 *  See "scripts.def" for rationale.
 */
#ifndef SHAR_SCRIPTS_X_GUARD
#define SHAR_SCRIPTS_X_GUARD 1

static const char aok_check_z[14] = 
"test $? -eq 0";

static const char break_line_z[35] = 
"# ============= %s ==============\n";

static const char ck_chct_z[53] = 
"test `LC_ALL=C wc -c < %s` -ne %s && \\\n\
  ${echo} %s\n";

static const char ck_lockdir_z[22] = 
"test ! -d ${lock_dir}";

static const char clobber_check_z[74] = 
"if test \"X$1\" = \"X-c\"\n\
then keep_file=''\n\
else keep_file=true\n\
fi\n\
echo=echo\n";

static const char contents_z[113] = 
"#\n\
# This shar contains:\n\
# length mode       name\n\
# ------ ---------- ------------------------------------------\n";

static const char continue_archive_z[167] = 
"#!/bin/sh\n\
# This is '%s' (part %d of %s).\n\
# Do not concatenate these parts, unpack them in order with '/bin/sh'.\n\
# File '%s' is being continued...\n\
#\n\
lock_dir=_sh%05d\n";

static const char cut_mark_line_z[50] = 
"---- Cut Here and feed the following to sh ----\n\n";

static const char dev_tty_check_z[83] = 
"if test -n \"`ls /dev/tty 2>/dev/null`\"\n\
then shar_tty=/dev/tty\n\
else shar_tty= ; fi\n";

static const char dev_tty_nocheck_z[31] = 
"shar_tty=\n\
shar_n=\n\
shar_c='\\n'\n";

static const char dir_check_z[23] = 
"if test ! -d %s; then\n";

static const char dir_create_z[12] = 
"  mkdir %s\n";

static const char echo_checks_z[202] = 
"if (echo \"testing\\c\"; echo 1,2,3) | grep c >/dev/null\n\
then if (echo -n test; echo 1,2,3) | grep n >/dev/null\n\
     then shar_n= shar_c='\n\
'\n\
     else shar_n=-n shar_c= ; fi\n\
else shar_n= shar_c='\\c' ; fi\n";

static const char echo_string_z[12] = 
"${echo} %s\n";

static const char exist_note_z[24] = 
"#\n\
# Existing files %s.\n";

static const char exist_keep_z[52] = 
"will *not* be overwritten, unless '-c' is specified";

static const char exist_kill_z[20] = 
"WILL be overwritten";

static const char exist_ask_z[65] = 
"MAY be overwritten.\n\
# The unsharer will be INTERACTIVELY queried";

static const char explain_1_z[40] = 
"This is part 1 of a multipart archive.\n";

static const char explain_2_z[70] = 
"Do not concatenate these parts, unpack them in order with '/bin/sh'.\n";

static const char explain_fmt_fmt_z[20] = 
"# %%-%ds\n\
# %%-%ds\n\n";

static const char file_leader_z[218] = 
"#!/bin/sh\n\
# This is %s%s archive (produced by GNU %s %s).\n\
# To extract the files from this archive, save it to some FILE, remove\n\
# everything before the '#!/bin/sh' line above, then type 'sh FILE'.\n\
#\n\
lock_dir=_sh%05d\n";

static const char i18n_z[758] = 
"save_IFS=\"${IFS}\"\n\
IFS=\"${IFS}:\"\n\
gettext_dir=\n\
locale_dir=\n\
set_echo=false\n\n\
for dir in $PATH\n\
do\n\
  if test -f $dir/gettext \\\n\
     && ($dir/gettext --version >/dev/null 2>&1)\n\
  then\n\
    case `$dir/gettext --version 2>&1 | sed 1q` in\n\
      *GNU*) gettext_dir=$dir\n\
      set_echo=true\n\
      break ;;\n\
    esac\n\
  fi\n\
done\n\n\
if ${set_echo}\n\
then\n\
  set_echo=false\n\
  for dir in $PATH\n\
  do\n\
    if test -f $dir/shar \\\n\
       && ($dir/shar --print-text-domain-dir >/dev/null 2>&1)\n\
    then\n\
      locale_dir=`$dir/shar --print-text-domain-dir`\n\
      set_echo=true\n\
      break\n\
    fi\n\
  done\n\n\
  if ${set_echo}\n\
  then\n\
    TEXTDOMAINDIR=$locale_dir\n\
    export TEXTDOMAINDIR\n\
    TEXTDOMAIN=sharutils\n\
    export TEXTDOMAIN\n\
    echo=\"$gettext_dir/gettext -s\"\n\
  fi\n\
fi\n\
IFS=\"$save_IFS\"\n";

static const char lock_dir_z[12] = 
"${lock_dir}";

static const char made_on_comment_z[23] = 
"# Made on %s by <%s>.\n";

static const char make_lock_dir_z[18] = 
"mkdir ${lock_dir}";

static const char md5check_z[165] = 
"MD5SUM=${MD5SUM-md5sum}\n\
f=`${MD5SUM} --version | egrep '^md5sum .*(core|text)utils'`\n\
test -n \"${f}\" && md5check=true || md5check=false\n\
${md5check} || \\\n\
  echo '%s'\n";

static const char md5test_z[99] = 
"  if ${md5check}\n\
  then (\n\
       ${MD5SUM} -c >/dev/null 2>&1 || ${echo} %s: '%s'\n\
       ) << \\%s\n";

static const char mode_fmt_z[14] = 
"begin 600 %s\n";

static const char otherwise_z[7] = 
"\n\
else\n";

static const char pre_exist_z[46] = 
"if test -n \"${keep_file}\" && test -f %s\n\
then\n";

static const char query_answers_z[769] = 
"ans_yes='%s'    yes_means='%s'\n\
ans_no='%s'     no_means='%s'\n\
ans_all='%s'    all_means='%s'\n\
ans_none='%s'   none_means='%s'\n\
ans_help='%s'   help_means='%s'\n\
ans_quit='%s'   quit_means='%s'\n\
user_answers='no yes all none help quit'\n\
shar_wish='no'\n\
ans_list=\"\n\
[<${ans_no}>, ${ans_yes}, ${ans_all}, ${ans_none}, ${ans_help}, ${ans_quit}] ? \"\n\n\
eval_ans='\n\
if test -z \"${shar_wish}\" ; then answer=no ; else\n\
  answer='help'\n\
  case \"${ans_yes}\"  in \"${shar_wish}\"* ) answer=yes  ; break ;; esac\n\
  case \"${ans_no}\"   in \"${shar_wish}\"* ) answer=no   ; break ;; esac\n\
  case \"${ans_all}\"  in \"${shar_wish}\"* ) answer=all  ; break ;; esac\n\
  case \"${ans_none}\" in \"${shar_wish}\"* ) answer=none ; break ;; esac\n\
  case \"${ans_quit}\" in \"${shar_wish}\"* ) answer=quit ; break ;; esac\n\
fi'\n";

static const char query_check_z[246] = 
"  case \"${shar_wish}\" in\n\
    quit) ${echo} '%s'; exit 1 ;;\n\
    none) ${echo} 'x - %s' ; shar_skip=yes ;;\n\
    no)   shar_skip=yes ;;\n\
    yes | all)  shar_skip=no  ;;\n\
  esac\n\
else\n\
  shar_skip=no\n\
fi\n\
if test $shar_skip = yes; then\n\
  ${echo} 'x - %s'\n";

static const char query_user_z[480] = 
"  while : ; do\n\
    answer=${shar_wish}\n\
    case $shar_wish in\n\
      all) ${echo} %s ; break ;;\n\
      none) break ;;\n\
      *) ${echo} $shar_n \"? - %s${ans_list}\"$shar_c\n\
         if test -n \"$shar_tty\"\n\
         then read shar_wish < $shar_tty\n\
         else read shar_wish\n\
         fi\n\
         eval \"${eval_ans}\" ;;\n\
    esac\n\
    shar_wish=help\n\
    for f in ${user_answers}\n\
    do eval printf \"'%%-9s %%s\\n'\" \\\"\\${ans_${f}}\\\" \\\"\\${${f}_means}\\\"\n\
    done\n\
  done\n\
  shar_wish=${answer}\n";

static const char seq_check_z[156] = 
"test -r ${lock_dir}/seq || {\n\
  ${echo} '%s' >&2\n\
  exit 1\n\
}\n\
shar_sequence=`cat ${lock_dir}/seq`\n\
test \"$shar_sequence\" = %d || {\n\
  ${echo} %s >&2\n\
  exit 1\n\
}\n";

static const char shar_decode_z[31] = 
"uudecode ${lock_dir}/uue && \\\n";

static const char shar_touch_z[76] = 
"  (set %02d %02d %02d %02d %02d %02d %02d %s\n\
   eval \"${shar_touch}\") && \\\n";

static const char show_all_status_z[44] = 
"if %s\n\
then ${echo} %s\n\
else ${echo} %s%s\n\
fi\n";

static const char show_bad_status_z[37] = 
"if %s ; then :\n\
else ${echo} %s%s\n\
fi\n";

static const char show_good_status_z[26] = 
"if %s\n\
then ${echo} %s\n\
fi\n";

static const char show_status_dies_z[13] = 
"\n\
     exit 1";

static const char source_dir_comment_z[30] = 
"# Source directory was '%s'.\n";

static const char split_file_z[27] = 
": > ${lock_dir}/continued\n";

static const char split_continue_quietly_z[40] = 
"if test -f ${lock_dir}/continued; then\n";

static const char split_continue_z[49] = 
"if test ! -f ${lock_dir}/continued\n\
then ${echo} ";

static const char split_resume_z[64] = 
"  rm -f ${lock_dir}/continued\n\
  sed 's/^%c//' << '%s' >> %s &&\n";

static const char timestamp_z[652] = 
"f=shar-touch.$$\n\
st1=200112312359.59\n\
st2=123123592001.59\n\
st2tr=123123592001.5 # old SysV 14-char limit\n\
st3=1231235901\n\n\
if   touch -am -t ${st1} ${f} >/dev/null 2>&1 && \\\n\
     test ! -f ${st1} && test -f ${f}; then\n\
  shar_touch='touch -am -t $1$2$3$4$5$6.$7 \"$8\"'\n\n\
elif touch -am ${st2} ${f} >/dev/null 2>&1 && \\\n\
     test ! -f ${st2} && test ! -f ${st2tr} && test -f ${f}; then\n\
  shar_touch='touch -am $3$4$5$6$1$2.$7 \"$8\"'\n\n\
elif touch -am ${st3} ${f} >/dev/null 2>&1 && \\\n\
     test ! -f ${st3} && test -f ${f}; then\n\
  shar_touch='touch -am $3$4$5$6$2 \"$8\"'\n\n\
else\n\
  shar_touch=:\n\
  echo\n\
  ${echo} %s\n\
  echo\n\
fi\n\
rm -f ${st1} ${st2} ${st2tr} ${st3} ${f}\n\
#\n";

#define SHAR_MSG_CT  49

static char const * shar_msg_table[SHAR_MSG_CT] = {
  "Note: not verifying md5sums.  Consider installing GNU coreutils.",
  "WARNING: not restoring timestamps.  Consider getting and\n\
installing GNU 'touch', distributed in GNU coreutils...",
  "lock directory %s exists",
  "failed to create %s lock directory",
  "x - created lock directory %s.",
  "x - failed to create lock directory %s.",
  "x - created directory %s.",
  "x - failed to create directory %s.",
  "yes",
  "overwrite this file",
  "no",
  "skip this file",
  "all",
  "overwrite all files",
  "none",
  "overwrite no files",
  "help",
  "explain choices",
  "quit",
  "exit immediately",
  "restore of %s failed",
  "  chmod %04o %s\n",
  "End of part %d, continue with part %d",
  "End of %s part %d",
  "restoration warning:  size of %s is not %s",
  "(text)",
  "(compressed)",
  "(gzipped)",
  "(bzipped)",
  "(binary)",
  "archive",
  "File %s is continued in part %d",
  "Please unpack part 1 first!",
  "Please unpack part ${shar_sequence} next!",
  "x - STILL SKIPPING %s",
  "continuing file %s",
  "(empty)",
  "x - overwriting %s",
  "overwrite %s",
  "SKIPPING %s",
  "extraction aborted",
  "x - SKIPPING %s (file already exists)",
  "x - extracting %s %s",
  "File %s is complete",
  "uudecoding file %s",
  "MD5 check failed",
  "You have unpacked the last part",
  "x - removed lock directory %s.",
  "x - failed to remove lock directory %s."
};

#define SM_not_verifying_sums   shar_msg_table[  0]
#define SM_time_not_set         shar_msg_table[  1]
#define SM_lock_dir_exists      shar_msg_table[  2]
#define SM_no_lock_dir          shar_msg_table[  3]
#define SM_x_lock_dir_created   shar_msg_table[  4]
#define SM_x_no_lock_dir        shar_msg_table[  5]
#define SM_x_dir_created        shar_msg_table[  6]
#define SM_x_no_dir             shar_msg_table[  7]
#define SM_ans_yes              shar_msg_table[  8]
#define SM_yes_means            shar_msg_table[  9]
#define SM_ans_no               shar_msg_table[ 10]
#define SM_no_means             shar_msg_table[ 11]
#define SM_ans_all              shar_msg_table[ 12]
#define SM_all_means            shar_msg_table[ 13]
#define SM_ans_none             shar_msg_table[ 14]
#define SM_none_means           shar_msg_table[ 15]
#define SM_ans_help             shar_msg_table[ 16]
#define SM_help_means           shar_msg_table[ 17]
#define SM_ans_quit             shar_msg_table[ 18]
#define SM_quit_means           shar_msg_table[ 19]
#define SM_restore_failed       shar_msg_table[ 20]
#define SM_restore_mode         shar_msg_table[ 21]
#define SM_end_of_part          shar_msg_table[ 22]
#define SM_s_end_of_part        shar_msg_table[ 23]
#define SM_bad_size             shar_msg_table[ 24]
#define SM_type_text            shar_msg_table[ 25]
#define SM_type_compressed      shar_msg_table[ 26]
#define SM_type_gzip            shar_msg_table[ 27]
#define SM_type_bzip            shar_msg_table[ 28]
#define SM_type_binary          shar_msg_table[ 29]
#define SM_word_archive         shar_msg_table[ 30]
#define SM_contin_in_part       shar_msg_table[ 31]
#define SM_unpack_part_1        shar_msg_table[ 32]
#define SM_unpack_next_part     shar_msg_table[ 33]
#define SM_still_skipping       shar_msg_table[ 34]
#define SM_continuing           shar_msg_table[ 35]
#define SM_is_empty             shar_msg_table[ 36]
#define SM_overwriting          shar_msg_table[ 37]
#define SM_overwrite            shar_msg_table[ 38]
#define SM_skipping             shar_msg_table[ 39]
#define SM_extract_aborted      shar_msg_table[ 40]
#define SM_skip_exist           shar_msg_table[ 41]
#define SM_x_extracting         shar_msg_table[ 42]
#define SM_file_complete        shar_msg_table[ 43]
#define SM_uudec_file           shar_msg_table[ 44]
#define SM_md5_check_failed     shar_msg_table[ 45]
#define SM_you_are_done         shar_msg_table[ 46]
#define SM_x_rem_lock_dir       shar_msg_table[ 47]
#define SM_x_no_rem_lock_dir    shar_msg_table[ 48]


#ifdef TRANSLATION_EXTRACTION
static void translation_strings (void) {
  /* TRANSLATORS:  This is a phony function generated for the purpose of
     constructing the strings to be extracted for translation.  Each string
     is associated with a name (e.g. SM_ans_yes) that can be found in shar.c,
     if you need to look up context.  These strings are all inserted into
     the shar-generated shell script so the shar user can create shar archives
     with messages localized for one locale.
   */
SM_not_verifying_sums   = N_("Note: not verifying md5sums.  Consider installing GNU coreutils.");
SM_time_not_set         = N_("WARNING: not restoring timestamps.  Consider getting and\n\
installing GNU 'touch', distributed in GNU coreutils...");
SM_lock_dir_exists      = N_("lock directory %s exists");
SM_no_lock_dir          = N_("failed to create %s lock directory");
SM_x_lock_dir_created   = N_("x - created lock directory %s.");
SM_x_no_lock_dir        = N_("x - failed to create lock directory %s.");
SM_x_dir_created        = N_("x - created directory %s.");
SM_x_no_dir             = N_("x - failed to create directory %s.");
SM_ans_yes              = N_("yes");
SM_yes_means            = N_("overwrite this file");
SM_ans_no               = N_("no");
SM_no_means             = N_("skip this file");
SM_ans_all              = N_("all");
SM_all_means            = N_("overwrite all files");
SM_ans_none             = N_("none");
SM_none_means           = N_("overwrite no files");
SM_ans_help             = N_("help");
SM_help_means           = N_("explain choices");
SM_ans_quit             = N_("quit");
SM_quit_means           = N_("exit immediately");
SM_restore_failed       = N_("restore of %s failed");
SM_restore_mode         = N_("  chmod %04o %s\n");
SM_end_of_part          = N_("End of part %d, continue with part %d");
SM_s_end_of_part        = N_("End of %s part %d");
SM_bad_size             = N_("restoration warning:  size of %s is not %s");
SM_type_text            = N_("(text)");
SM_type_compressed      = N_("(compressed)");
SM_type_gzip            = N_("(gzipped)");
SM_type_bzip            = N_("(bzipped)");
SM_type_binary          = N_("(binary)");
SM_word_archive         = N_("archive");
SM_contin_in_part       = N_("File %s is continued in part %d");
SM_unpack_part_1        = N_("Please unpack part 1 first!");
SM_unpack_next_part     = N_("Please unpack part ${shar_sequence} next!");
SM_still_skipping       = N_("x - STILL SKIPPING %s");
SM_continuing           = N_("continuing file %s");
SM_is_empty             = N_("(empty)");
SM_overwriting          = N_("x - overwriting %s");
SM_overwrite            = N_("overwrite %s");
SM_skipping             = N_("SKIPPING %s");
SM_extract_aborted      = N_("extraction aborted");
SM_skip_exist           = N_("x - SKIPPING %s (file already exists)");
SM_x_extracting         = N_("x - extracting %s %s");
SM_file_complete        = N_("File %s is complete");
SM_uudec_file           = N_("uudecoding file %s");
SM_md5_check_failed     = N_("MD5 check failed");
SM_you_are_done         = N_("You have unpacked the last part");
SM_x_rem_lock_dir       = N_("x - removed lock directory %s.");
SM_x_no_rem_lock_dir    = N_("x - failed to remove lock directory %s.");
}
#endif /* TRANSLATION_EXTRACTION */

static size_t const shar_msg_size[SHAR_MSG_CT] = {
  64,  112, 24,  34,  30,  39,  25,  34,  3,   19,  2,   14,  3,   19,  4,
  18,  4,   15,  4,   16,  20,  16,  37,  17,  42,  6,   12,  9,   9,   8,
  7,   31,  27,  41,  21,  18,  7,   18,  12,  11,  18,  37,  20,  19,  18,
  16,  31,  30,  39 };


typedef enum {
  XFORM_PLAIN,
  XFORM_APOSTROPHE,
  XFORM_DBL_QUOTE
} msg_xform_t;

static msg_xform_t shar_msg_xform[SHAR_MSG_CT] = {
  XFORM_PLAIN,      XFORM_APOSTROPHE, XFORM_DBL_QUOTE,  XFORM_DBL_QUOTE,
  XFORM_DBL_QUOTE,  XFORM_DBL_QUOTE,  XFORM_DBL_QUOTE,  XFORM_DBL_QUOTE,
  XFORM_PLAIN,      XFORM_PLAIN,      XFORM_PLAIN,      XFORM_PLAIN,
  XFORM_PLAIN,      XFORM_PLAIN,      XFORM_PLAIN,      XFORM_PLAIN,
  XFORM_PLAIN,      XFORM_PLAIN,      XFORM_PLAIN,      XFORM_PLAIN,
  XFORM_DBL_QUOTE,  XFORM_PLAIN,      XFORM_DBL_QUOTE,  XFORM_PLAIN,
  XFORM_DBL_QUOTE,  XFORM_PLAIN,      XFORM_PLAIN,      XFORM_PLAIN,
  XFORM_PLAIN,      XFORM_PLAIN,      XFORM_PLAIN,      XFORM_PLAIN,
  XFORM_PLAIN,      XFORM_DBL_QUOTE,  XFORM_DBL_QUOTE,  XFORM_DBL_QUOTE,
  XFORM_PLAIN,      XFORM_DBL_QUOTE,  XFORM_PLAIN,      XFORM_DBL_QUOTE,
  XFORM_PLAIN,      XFORM_DBL_QUOTE,  XFORM_DBL_QUOTE,  XFORM_DBL_QUOTE,
  XFORM_DBL_QUOTE,  XFORM_PLAIN,      XFORM_PLAIN,      XFORM_DBL_QUOTE,
  XFORM_DBL_QUOTE };

#endif /* SHAR_SCRIPTS_X_GUARD */
/*
 * Local Variables:
 * mode: C
 * c-file-style: "gnu"
 * indent-tabs-mode: nil
 * End:
 * end of scripts.x */
