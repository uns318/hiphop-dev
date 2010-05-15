/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   | Copyright (c) 1997-2010 The PHP Group                                |
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

#ifndef __EXTPROFILE_POSIX_H__
#define __EXTPROFILE_POSIX_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_posix.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline bool x_posix_access(CStrRef file, int mode = 0) {
  FUNCTION_INJECTION_BUILTIN(posix_access);
  return f_posix_access(file, mode);
}

inline String x_posix_ctermid() {
  FUNCTION_INJECTION_BUILTIN(posix_ctermid);
  return f_posix_ctermid();
}

inline int x_posix_get_last_error() {
  FUNCTION_INJECTION_BUILTIN(posix_get_last_error);
  return f_posix_get_last_error();
}

inline String x_posix_getcwd() {
  FUNCTION_INJECTION_BUILTIN(posix_getcwd);
  return f_posix_getcwd();
}

inline int x_posix_getegid() {
  FUNCTION_INJECTION_BUILTIN(posix_getegid);
  return f_posix_getegid();
}

inline int x_posix_geteuid() {
  FUNCTION_INJECTION_BUILTIN(posix_geteuid);
  return f_posix_geteuid();
}

inline int x_posix_getgid() {
  FUNCTION_INJECTION_BUILTIN(posix_getgid);
  return f_posix_getgid();
}

inline Variant x_posix_getgrgid(int gid) {
  FUNCTION_INJECTION_BUILTIN(posix_getgrgid);
  return f_posix_getgrgid(gid);
}

inline Variant x_posix_getgrnam(CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(posix_getgrnam);
  return f_posix_getgrnam(name);
}

inline Variant x_posix_getgroups() {
  FUNCTION_INJECTION_BUILTIN(posix_getgroups);
  return f_posix_getgroups();
}

inline Variant x_posix_getlogin() {
  FUNCTION_INJECTION_BUILTIN(posix_getlogin);
  return f_posix_getlogin();
}

inline Variant x_posix_getpgid(int pid) {
  FUNCTION_INJECTION_BUILTIN(posix_getpgid);
  return f_posix_getpgid(pid);
}

inline int x_posix_getpgrp() {
  FUNCTION_INJECTION_BUILTIN(posix_getpgrp);
  return f_posix_getpgrp();
}

inline int x_posix_getpid() {
  FUNCTION_INJECTION_BUILTIN(posix_getpid);
  return f_posix_getpid();
}

inline int x_posix_getppid() {
  FUNCTION_INJECTION_BUILTIN(posix_getppid);
  return f_posix_getppid();
}

inline Variant x_posix_getpwnam(CStrRef username) {
  FUNCTION_INJECTION_BUILTIN(posix_getpwnam);
  return f_posix_getpwnam(username);
}

inline Variant x_posix_getpwuid(int uid) {
  FUNCTION_INJECTION_BUILTIN(posix_getpwuid);
  return f_posix_getpwuid(uid);
}

inline Variant x_posix_getrlimit() {
  FUNCTION_INJECTION_BUILTIN(posix_getrlimit);
  return f_posix_getrlimit();
}

inline Variant x_posix_getsid(int pid) {
  FUNCTION_INJECTION_BUILTIN(posix_getsid);
  return f_posix_getsid(pid);
}

inline int x_posix_getuid() {
  FUNCTION_INJECTION_BUILTIN(posix_getuid);
  return f_posix_getuid();
}

inline bool x_posix_initgroups(CStrRef name, int base_group_id) {
  FUNCTION_INJECTION_BUILTIN(posix_initgroups);
  return f_posix_initgroups(name, base_group_id);
}

inline bool x_posix_isatty(CVarRef fd) {
  FUNCTION_INJECTION_BUILTIN(posix_isatty);
  return f_posix_isatty(fd);
}

inline bool x_posix_kill(int pid, int sig) {
  FUNCTION_INJECTION_BUILTIN(posix_kill);
  return f_posix_kill(pid, sig);
}

inline bool x_posix_mkfifo(CStrRef pathname, int mode) {
  FUNCTION_INJECTION_BUILTIN(posix_mkfifo);
  return f_posix_mkfifo(pathname, mode);
}

inline bool x_posix_mknod(CStrRef pathname, int mode, int major = 0, int minor = 0) {
  FUNCTION_INJECTION_BUILTIN(posix_mknod);
  return f_posix_mknod(pathname, mode, major, minor);
}

inline bool x_posix_setegid(int gid) {
  FUNCTION_INJECTION_BUILTIN(posix_setegid);
  return f_posix_setegid(gid);
}

inline bool x_posix_seteuid(int uid) {
  FUNCTION_INJECTION_BUILTIN(posix_seteuid);
  return f_posix_seteuid(uid);
}

inline bool x_posix_setgid(int gid) {
  FUNCTION_INJECTION_BUILTIN(posix_setgid);
  return f_posix_setgid(gid);
}

inline bool x_posix_setpgid(int pid, int pgid) {
  FUNCTION_INJECTION_BUILTIN(posix_setpgid);
  return f_posix_setpgid(pid, pgid);
}

inline int x_posix_setsid() {
  FUNCTION_INJECTION_BUILTIN(posix_setsid);
  return f_posix_setsid();
}

inline bool x_posix_setuid(int uid) {
  FUNCTION_INJECTION_BUILTIN(posix_setuid);
  return f_posix_setuid(uid);
}

inline String x_posix_strerror(int errnum) {
  FUNCTION_INJECTION_BUILTIN(posix_strerror);
  return f_posix_strerror(errnum);
}

inline Variant x_posix_times() {
  FUNCTION_INJECTION_BUILTIN(posix_times);
  return f_posix_times();
}

inline Variant x_posix_ttyname(CVarRef fd) {
  FUNCTION_INJECTION_BUILTIN(posix_ttyname);
  return f_posix_ttyname(fd);
}

inline Variant x_posix_uname() {
  FUNCTION_INJECTION_BUILTIN(posix_uname);
  return f_posix_uname();
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_POSIX_H__
