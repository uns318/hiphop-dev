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

#ifndef __EXTPROFILE_MAILPARSE_H__
#define __EXTPROFILE_MAILPARSE_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_mailparse.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline bool x_mail(CStrRef to, CStrRef subject, CStrRef message, CStrRef additional_headers = null_string, CStrRef additional_parameters = null_string) {
  FUNCTION_INJECTION_BUILTIN(mail);
  return f_mail(to, subject, message, additional_headers, additional_parameters);
}

inline int x_ezmlm_hash(CStrRef addr) {
  FUNCTION_INJECTION_BUILTIN(ezmlm_hash);
  return f_ezmlm_hash(addr);
}

inline Object x_mailparse_msg_create() {
  FUNCTION_INJECTION_BUILTIN(mailparse_msg_create);
  return f_mailparse_msg_create();
}

inline bool x_mailparse_msg_free(CObjRef mimemail) {
  FUNCTION_INJECTION_BUILTIN(mailparse_msg_free);
  return f_mailparse_msg_free(mimemail);
}

inline Variant x_mailparse_msg_parse_file(CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(mailparse_msg_parse_file);
  return f_mailparse_msg_parse_file(filename);
}

inline bool x_mailparse_msg_parse(CObjRef mimemail, CStrRef data) {
  FUNCTION_INJECTION_BUILTIN(mailparse_msg_parse);
  return f_mailparse_msg_parse(mimemail, data);
}

inline Variant x_mailparse_msg_extract_part_file(CObjRef mimemail, CVarRef filename, CVarRef callbackfunc = "") {
  FUNCTION_INJECTION_BUILTIN(mailparse_msg_extract_part_file);
  return f_mailparse_msg_extract_part_file(mimemail, filename, callbackfunc);
}

inline Variant x_mailparse_msg_extract_whole_part_file(CObjRef mimemail, CVarRef filename, CVarRef callbackfunc = "") {
  FUNCTION_INJECTION_BUILTIN(mailparse_msg_extract_whole_part_file);
  return f_mailparse_msg_extract_whole_part_file(mimemail, filename, callbackfunc);
}

inline Variant x_mailparse_msg_extract_part(CObjRef mimemail, CVarRef msgbody, CVarRef callbackfunc = "") {
  FUNCTION_INJECTION_BUILTIN(mailparse_msg_extract_part);
  return f_mailparse_msg_extract_part(mimemail, msgbody, callbackfunc);
}

inline Array x_mailparse_msg_get_part_data(CObjRef mimemail) {
  FUNCTION_INJECTION_BUILTIN(mailparse_msg_get_part_data);
  return f_mailparse_msg_get_part_data(mimemail);
}

inline Variant x_mailparse_msg_get_part(CObjRef mimemail, CStrRef mimesection) {
  FUNCTION_INJECTION_BUILTIN(mailparse_msg_get_part);
  return f_mailparse_msg_get_part(mimemail, mimesection);
}

inline Array x_mailparse_msg_get_structure(CObjRef mimemail) {
  FUNCTION_INJECTION_BUILTIN(mailparse_msg_get_structure);
  return f_mailparse_msg_get_structure(mimemail);
}

inline Array x_mailparse_rfc822_parse_addresses(CStrRef addresses) {
  FUNCTION_INJECTION_BUILTIN(mailparse_rfc822_parse_addresses);
  return f_mailparse_rfc822_parse_addresses(addresses);
}

inline bool x_mailparse_stream_encode(CObjRef sourcefp, CObjRef destfp, CStrRef encoding) {
  FUNCTION_INJECTION_BUILTIN(mailparse_stream_encode);
  return f_mailparse_stream_encode(sourcefp, destfp, encoding);
}

inline Variant x_mailparse_uudecode_all(CObjRef fp) {
  FUNCTION_INJECTION_BUILTIN(mailparse_uudecode_all);
  return f_mailparse_uudecode_all(fp);
}

inline Variant x_mailparse_determine_best_xfer_encoding(CObjRef fp) {
  FUNCTION_INJECTION_BUILTIN(mailparse_determine_best_xfer_encoding);
  return f_mailparse_determine_best_xfer_encoding(fp);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_MAILPARSE_H__
