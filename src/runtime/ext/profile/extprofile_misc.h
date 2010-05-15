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

#ifndef __EXTPROFILE_MISC_H__
#define __EXTPROFILE_MISC_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_misc.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline int x_connection_aborted() {
  FUNCTION_INJECTION_BUILTIN(connection_aborted);
  return f_connection_aborted();
}

inline int x_connection_status() {
  FUNCTION_INJECTION_BUILTIN(connection_status);
  return f_connection_status();
}

inline int x_connection_timeout() {
  FUNCTION_INJECTION_BUILTIN(connection_timeout);
  return f_connection_timeout();
}

inline Variant x_constant(CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(constant);
  return f_constant(name);
}

inline bool x_define(CStrRef name, CVarRef value, bool case_insensitive = false) {
  FUNCTION_INJECTION_BUILTIN(define);
  return f_define(name, value, case_insensitive);
}

inline bool x_defined(CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(defined);
  return f_defined(name);
}

inline Variant x_die(CVarRef status = null_variant) {
  FUNCTION_INJECTION_BUILTIN(die);
  return f_die(status);
}

inline Variant x_exit(CVarRef status = null_variant) {
  FUNCTION_INJECTION_BUILTIN(exit);
  return f_exit(status);
}

inline Variant x_eval(CStrRef code_str) {
  FUNCTION_INJECTION_BUILTIN(eval);
  return f_eval(code_str);
}

inline Variant x_get_browser(CStrRef user_agent = null_string, bool return_array = false) {
  FUNCTION_INJECTION_BUILTIN(get_browser);
  return f_get_browser(user_agent, return_array);
}

inline void x___halt_compiler() {
  FUNCTION_INJECTION_BUILTIN(__halt_compiler);
  f___halt_compiler();
}

inline Variant x_highlight_file(CStrRef filename, bool ret = false) {
  FUNCTION_INJECTION_BUILTIN(highlight_file);
  return f_highlight_file(filename, ret);
}

inline Variant x_show_source(CStrRef filename, bool ret = false) {
  FUNCTION_INJECTION_BUILTIN(show_source);
  return f_show_source(filename, ret);
}

inline Variant x_highlight_string(CStrRef str, bool ret = false) {
  FUNCTION_INJECTION_BUILTIN(highlight_string);
  return f_highlight_string(str, ret);
}

inline int x_ignore_user_abort(bool setting = false) {
  FUNCTION_INJECTION_BUILTIN(ignore_user_abort);
  return f_ignore_user_abort(setting);
}

inline Variant x_pack(int _argc, CStrRef format, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(pack);
  return f_pack(_argc, format, _argv);
}

inline bool x_php_check_syntax(CStrRef filename, Variant error_message = null) {
  FUNCTION_INJECTION_BUILTIN(php_check_syntax);
  return f_php_check_syntax(filename, ref(error_message));
}

inline String x_php_strip_whitespace(CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(php_strip_whitespace);
  return f_php_strip_whitespace(filename);
}

inline int x_sleep(int seconds) {
  FUNCTION_INJECTION_BUILTIN(sleep);
  return f_sleep(seconds);
}

inline void x_usleep(int micro_seconds) {
  FUNCTION_INJECTION_BUILTIN(usleep);
  f_usleep(micro_seconds);
}

inline Variant x_time_nanosleep(int seconds, int nanoseconds) {
  FUNCTION_INJECTION_BUILTIN(time_nanosleep);
  return f_time_nanosleep(seconds, nanoseconds);
}

inline bool x_time_sleep_until(double timestamp) {
  FUNCTION_INJECTION_BUILTIN(time_sleep_until);
  return f_time_sleep_until(timestamp);
}

inline String x_uniqid(CStrRef prefix = null_string, bool more_entropy = false) {
  FUNCTION_INJECTION_BUILTIN(uniqid);
  return f_uniqid(prefix, more_entropy);
}

inline Variant x_unpack(CStrRef format, CStrRef data) {
  FUNCTION_INJECTION_BUILTIN(unpack);
  return f_unpack(format, data);
}

inline Array x_sys_getloadavg() {
  FUNCTION_INJECTION_BUILTIN(sys_getloadavg);
  return f_sys_getloadavg();
}

inline Array x_token_get_all(CStrRef source) {
  FUNCTION_INJECTION_BUILTIN(token_get_all);
  return f_token_get_all(source);
}

inline String x_token_name(int64 token) {
  FUNCTION_INJECTION_BUILTIN(token_name);
  return f_token_name(token);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_MISC_H__
