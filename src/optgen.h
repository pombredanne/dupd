
/*
 * DO NOT EDIT THIS FILE BY HAND!
 *
 * All changes will be lost when file gets regenerated.
 *
 * Generated by optgen 0.5 from config file "options.conf"
 *
 * Copyright (c) 2017, Jyri J. Virkki
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef OPTGEN_H
#define OPTGEN_H

#include <stdlib.h>

//
// The following short options are NOT yet taken:
// ab..e.g.ijkl.no..rstu.w.yzABC.E.G..JK.MNOPQRSTU.WXYZ0123456789
//

#define COUNT_OPTIONS 38

// path (-p,--path) PATH : path where scanning will start
#define OPT_path 0

// nodb (--nodb) : do not generate database file
#define OPT_nodb 1

// file_count (--file-count) NUM : max estimated number of files to scan
#define OPT_file_count 2

// avg_size (--avg-size) : deprecated
#define OPT_avg_size 3

// stats_file (--stats-file) FILE : save stats to this file
#define OPT_stats_file 4

// minsize (-m,--minsize) SIZE : min size of files to scan
#define OPT_minsize 5

// hidden (--hidden) : include hidden files and dirs in scan
#define OPT_hidden 6

// hdd (-D,--hdd) : select HDD mode
#define OPT_hdd 7

// hardlink_is_unique (-I,--hardlink-is-unique) : ignore hard links as duplicates
#define OPT_hardlink_is_unique 8

// no_thread_scan (--no-thread-scan) : do scan phase in a single thread
#define OPT_no_thread_scan 9

// no_thread_hash (--no-thread-hash) : do hash/compare phase in a single thread
#define OPT_no_thread_hash 10

// pathsep (--pathsep) CHAR : change internal path separator to CHAR
#define OPT_pathsep 11

// firstblocks (--firstblocks) N : max blocks to read in first hash pass
#define OPT_firstblocks 12

// firstblocksize (--firstblocksize) N : size of firstblocks to read
#define OPT_firstblocksize 13

// intblocks (--intblocks) N : blocks to read in intermediate hash
#define OPT_intblocks 14

// blocksize (--blocksize) N : size of regular blocks to read
#define OPT_blocksize 15

// fileblocksize (--fileblocksize) N : size of blocks to read in file compare
#define OPT_fileblocksize 16

// skip_two (--skip-two) : do not compare two files directly
#define OPT_skip_two 17

// skip_three (--skip-three) : do not compare three files directly
#define OPT_skip_three 18

// cmp_two (--cmp-two) : force direct comparison of two files
#define OPT_cmp_two 19

// cmp_three (--cmp-three) : force direct comparison of three files
#define OPT_cmp_three 20

// uniques (--uniques) : save info about unique files
#define OPT_uniques 21

// x_analyze (--x-analyze) : for testing only
#define OPT_x_analyze 22

// cut (-c,--cut) PATHSEG : remove 'PATHSEG' from report paths
#define OPT_cut 23

// format (--format) NAME : report output format (text, csv, json)
#define OPT_format 24

// file (-f,--file) PATH : check this file
#define OPT_file 25

// exclude_path (-x,--exclude-path) PATH : ignore duplicates under this path
#define OPT_exclude_path 26

// link (-L,--link) : create symlinks for deleted files
#define OPT_link 27

// hardlink (-H,--hardlink) : create hard links for deleted files
#define OPT_hardlink 28

// hash (-F,--hash) NAME : specify alternate hash function
#define OPT_hash 29

// verbose (-v,--verbose) : increase verbosity (may be repeated for more)
#define OPT_verbose 30

// verbose_threads (-V,--verbose-threads) : deprecated
#define OPT_verbose_threads 31

// quiet (-q,--quiet) : quiet, supress all output except fatal errors
#define OPT_quiet 32

// db (-d,--db) PATH : path to dupd database file
#define OPT_db 33

// help (-h,--help) : show brief usage info
#define OPT_help 34

// no_unique (--no-unique) : ignore unique table even if present, for testing
#define OPT_no_unique 35

// x_small_buffers (--x-small-buffers) : for testing only, not useful otherwise
#define OPT_x_small_buffers 36

// x_testing (--x-testing) : for testing only, not useful otherwise
#define OPT_x_testing 37

// scan: scan starting from the given path
#define COMMAND_scan 1

// refresh: remove deleted files from the database
#define COMMAND_refresh 2

// report: show duplicate report from last scan
#define COMMAND_report 3

// file: based on report, check for duplicates of one file
#define COMMAND_file 4

// uniques: based on report, look for unique files
#define COMMAND_uniques 5

// dups: based on report, look for duplicate files
#define COMMAND_dups 6

// ls: based on report, list info about every file seen
#define COMMAND_ls 7

// rmsh: create shell script to delete all duplicates
#define COMMAND_rmsh 8

// validate: revalidate all duplicates in db
#define COMMAND_validate 9

// help: show brief usage info
#define COMMAND_help 10

// usage: show more extensive documentation
#define COMMAND_usage 11

// man: show more extensive documentation
#define COMMAND_man 12

// license: show license info
#define COMMAND_license 13

// version: show version and exit
#define COMMAND_version 14

// GLOBAL: 
#define COMMAND_GLOBAL 15

/**
 * Function to parse the arguments.
 *
 * Parameters:
 *   argc    - argv size (as passed to main)
 *   argv    - Arguments (as passed to main)
 *   command - Command (if present) will be stored here
 *   options - Caller-allocated array where option values will be stored
 *
 * Return:
 *   OPTGEN_OK on success
 *   OPTGEN_NONE if no arguments seen
 *   command will be set to OPTGEN_NO_COMMAND if no command given, or
 *     one of the COMMAND_* constants above.
 *   options array has an entry for each OPT_* index for each known option.
 *     The value of each OPT_* entry is one of:
 *       NULL if the option was not seen
 *       string value if the option had a value
 *       for options with no value, a string value of an integer
 *
 * Sample call:
 *
 *   char * options[COUNT_OPTIONS];
 *   int command;
 *
 *   int rv = optgen_parse(argc, argv, &command, options);
 *
 */
int optgen_parse(int argc, char * argv[], int * command, char * options[]);
#define OPTGEN_OK 0
#define OPTGEN_NONE 1
#define OPTGEN_NO_COMMAND -1

/**
 * Convenience function to get count of times an option was specified.
 * For options which take NO arguments but can be repeated multiple times,
 * this function returns the number of times it was seen
 *
 * Parameters:
 *   str - A value from options array
 *
 * Return:
 *
 *   Number of times an option was seen, or zero if none
 *
 */
int opt_count(char * str);

/**
 * Convenience function to return integer value of an option
 *
 * Parameters:
 *   str - A value from options array
 *   def - Default value if none given
 *
 * Return:
 *
 *   Value of option as integer. If NULL, returns default def.
 *
 */
int opt_int(char * str, int def);

/**
 * Convenience function to single char value of an option
 *
 * Parameters:
 *   str - A value from options array
 *   def - Default value if none given
 *
 * Return:
 *
 *   Value of option as char. If NULL, returns default def.
 *
 */
char opt_char(char * str, char def);

/**
 * Convenience function to string value of an option
 *
 * Parameters:
 *   str - A value from options array
 *   def - Default value if none given
 *
 * Return:
 *
 *   Value of option as char *. If NULL, returns default def.
 *
 */
char * opt_string(char * str, char * def);

/**
 * Show help based on command and option descriptions.
 *
 */
void opt_show_help();

// Callbacks need to return one of these values
#define OPTGEN_CALLBACK_OK 0
#define OPTGEN_CALLBACK_FAIL 1

#endif
