/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __TEST_EXT_POSIX_H__
#define __TEST_EXT_POSIX_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtPosix : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_posix_access();
  bool test_posix_ctermid();
  bool test_posix_get_last_error();
  bool test_posix_getcwd();
  bool test_posix_getegid();
  bool test_posix_geteuid();
  bool test_posix_getgid();
  bool test_posix_getgrgid();
  bool test_posix_getgrnam();
  bool test_posix_getgroups();
  bool test_posix_getlogin();
  bool test_posix_getpgid();
  bool test_posix_getpgrp();
  bool test_posix_getpid();
  bool test_posix_getppid();
  bool test_posix_getpwnam();
  bool test_posix_getpwuid();
  bool test_posix_getrlimit();
  bool test_posix_getsid();
  bool test_posix_getuid();
  bool test_posix_initgroups();
  bool test_posix_isatty();
  bool test_posix_kill();
  bool test_posix_mkfifo();
  bool test_posix_mknod();
  bool test_posix_setegid();
  bool test_posix_seteuid();
  bool test_posix_setgid();
  bool test_posix_setpgid();
  bool test_posix_setsid();
  bool test_posix_setuid();
  bool test_posix_strerror();
  bool test_posix_times();
  bool test_posix_ttyname();
  bool test_posix_uname();
};

///////////////////////////////////////////////////////////////////////////////

#endif // __TEST_EXT_POSIX_H__