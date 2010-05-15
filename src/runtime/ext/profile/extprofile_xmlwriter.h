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

#ifndef __EXTPROFILE_XMLWRITER_H__
#define __EXTPROFILE_XMLWRITER_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_xmlwriter.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Variant x_xmlwriter_open_memory() {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_open_memory);
  return f_xmlwriter_open_memory();
}

inline Object x_xmlwriter_open_uri(CStrRef uri) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_open_uri);
  return f_xmlwriter_open_uri(uri);
}

inline bool x_xmlwriter_set_indent_string(CObjRef xmlwriter, CStrRef indentstring) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_set_indent_string);
  return f_xmlwriter_set_indent_string(xmlwriter, indentstring);
}

inline bool x_xmlwriter_set_indent(CObjRef xmlwriter, bool indent) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_set_indent);
  return f_xmlwriter_set_indent(xmlwriter, indent);
}

inline bool x_xmlwriter_start_document(CObjRef xmlwriter, CStrRef version = "1.0", CStrRef encoding = null_string, CStrRef standalone = null_string) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_start_document);
  return f_xmlwriter_start_document(xmlwriter, version, encoding, standalone);
}

inline bool x_xmlwriter_start_element(CObjRef xmlwriter, CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_start_element);
  return f_xmlwriter_start_element(xmlwriter, name);
}

inline bool x_xmlwriter_start_element_ns(CObjRef xmlwriter, CStrRef prefix, CStrRef name, CStrRef uri) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_start_element_ns);
  return f_xmlwriter_start_element_ns(xmlwriter, prefix, name, uri);
}

inline bool x_xmlwriter_write_element_ns(CObjRef xmlwriter, CStrRef prefix, CStrRef name, CStrRef uri, CStrRef content = null_string) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_write_element_ns);
  return f_xmlwriter_write_element_ns(xmlwriter, prefix, name, uri, content);
}

inline bool x_xmlwriter_write_element(CObjRef xmlwriter, CStrRef name, CStrRef content = null_string) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_write_element);
  return f_xmlwriter_write_element(xmlwriter, name, content);
}

inline bool x_xmlwriter_end_element(CObjRef xmlwriter) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_end_element);
  return f_xmlwriter_end_element(xmlwriter);
}

inline bool x_xmlwriter_full_end_element(CObjRef xmlwriter) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_full_end_element);
  return f_xmlwriter_full_end_element(xmlwriter);
}

inline bool x_xmlwriter_start_attribute_ns(CObjRef xmlwriter, CStrRef prefix, CStrRef name, CStrRef uri) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_start_attribute_ns);
  return f_xmlwriter_start_attribute_ns(xmlwriter, prefix, name, uri);
}

inline bool x_xmlwriter_start_attribute(CObjRef xmlwriter, CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_start_attribute);
  return f_xmlwriter_start_attribute(xmlwriter, name);
}

inline bool x_xmlwriter_write_attribute_ns(CObjRef xmlwriter, CStrRef prefix, CStrRef name, CStrRef uri, CStrRef content) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_write_attribute_ns);
  return f_xmlwriter_write_attribute_ns(xmlwriter, prefix, name, uri, content);
}

inline bool x_xmlwriter_write_attribute(CObjRef xmlwriter, CStrRef name, CStrRef value) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_write_attribute);
  return f_xmlwriter_write_attribute(xmlwriter, name, value);
}

inline bool x_xmlwriter_end_attribute(CObjRef xmlwriter) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_end_attribute);
  return f_xmlwriter_end_attribute(xmlwriter);
}

inline bool x_xmlwriter_start_cdata(CObjRef xmlwriter) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_start_cdata);
  return f_xmlwriter_start_cdata(xmlwriter);
}

inline bool x_xmlwriter_write_cdata(CObjRef xmlwriter, CStrRef content) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_write_cdata);
  return f_xmlwriter_write_cdata(xmlwriter, content);
}

inline bool x_xmlwriter_end_cdata(CObjRef xmlwriter) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_end_cdata);
  return f_xmlwriter_end_cdata(xmlwriter);
}

inline bool x_xmlwriter_start_comment(CObjRef xmlwriter) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_start_comment);
  return f_xmlwriter_start_comment(xmlwriter);
}

inline bool x_xmlwriter_write_comment(CObjRef xmlwriter, CStrRef content) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_write_comment);
  return f_xmlwriter_write_comment(xmlwriter, content);
}

inline bool x_xmlwriter_end_comment(CObjRef xmlwriter) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_end_comment);
  return f_xmlwriter_end_comment(xmlwriter);
}

inline bool x_xmlwriter_end_document(CObjRef xmlwriter) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_end_document);
  return f_xmlwriter_end_document(xmlwriter);
}

inline bool x_xmlwriter_start_pi(CObjRef xmlwriter, CStrRef target) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_start_pi);
  return f_xmlwriter_start_pi(xmlwriter, target);
}

inline bool x_xmlwriter_write_pi(CObjRef xmlwriter, CStrRef target, CStrRef content) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_write_pi);
  return f_xmlwriter_write_pi(xmlwriter, target, content);
}

inline bool x_xmlwriter_end_pi(CObjRef xmlwriter) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_end_pi);
  return f_xmlwriter_end_pi(xmlwriter);
}

inline bool x_xmlwriter_text(CObjRef xmlwriter, CStrRef content) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_text);
  return f_xmlwriter_text(xmlwriter, content);
}

inline bool x_xmlwriter_write_raw(CObjRef xmlwriter, CStrRef content) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_write_raw);
  return f_xmlwriter_write_raw(xmlwriter, content);
}

inline bool x_xmlwriter_start_dtd(CObjRef xmlwriter, CStrRef qualifiedname, CStrRef publicid = null_string, CStrRef systemid = null_string) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_start_dtd);
  return f_xmlwriter_start_dtd(xmlwriter, qualifiedname, publicid, systemid);
}

inline bool x_xmlwriter_write_dtd(CObjRef xmlwriter, CStrRef name, CStrRef publicid = null_string, CStrRef systemid = null_string, CStrRef subset = null_string) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_write_dtd);
  return f_xmlwriter_write_dtd(xmlwriter, name, publicid, systemid, subset);
}

inline bool x_xmlwriter_start_dtd_element(CObjRef xmlwriter, CStrRef qualifiedname) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_start_dtd_element);
  return f_xmlwriter_start_dtd_element(xmlwriter, qualifiedname);
}

inline bool x_xmlwriter_write_dtd_element(CObjRef xmlwriter, CStrRef name, CStrRef content) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_write_dtd_element);
  return f_xmlwriter_write_dtd_element(xmlwriter, name, content);
}

inline bool x_xmlwriter_end_dtd_element(CObjRef xmlwriter) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_end_dtd_element);
  return f_xmlwriter_end_dtd_element(xmlwriter);
}

inline bool x_xmlwriter_start_dtd_attlist(CObjRef xmlwriter, CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_start_dtd_attlist);
  return f_xmlwriter_start_dtd_attlist(xmlwriter, name);
}

inline bool x_xmlwriter_write_dtd_attlist(CObjRef xmlwriter, CStrRef name, CStrRef content) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_write_dtd_attlist);
  return f_xmlwriter_write_dtd_attlist(xmlwriter, name, content);
}

inline bool x_xmlwriter_end_dtd_attlist(CObjRef xmlwriter) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_end_dtd_attlist);
  return f_xmlwriter_end_dtd_attlist(xmlwriter);
}

inline bool x_xmlwriter_start_dtd_entity(CObjRef xmlwriter, CStrRef name, bool isparam) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_start_dtd_entity);
  return f_xmlwriter_start_dtd_entity(xmlwriter, name, isparam);
}

inline bool x_xmlwriter_write_dtd_entity(CObjRef xmlwriter, CStrRef name, CStrRef content, bool pe = false, CStrRef publicid = null_string, CStrRef systemid = null_string, CStrRef ndataid = null_string) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_write_dtd_entity);
  return f_xmlwriter_write_dtd_entity(xmlwriter, name, content, pe, publicid, systemid, ndataid);
}

inline bool x_xmlwriter_end_dtd_entity(CObjRef xmlwriter) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_end_dtd_entity);
  return f_xmlwriter_end_dtd_entity(xmlwriter);
}

inline bool x_xmlwriter_end_dtd(CObjRef xmlwriter) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_end_dtd);
  return f_xmlwriter_end_dtd(xmlwriter);
}

inline Variant x_xmlwriter_flush(CObjRef xmlwriter, bool empty = true) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_flush);
  return f_xmlwriter_flush(xmlwriter, empty);
}

inline String x_xmlwriter_output_memory(CObjRef xmlwriter, bool flush = true) {
  FUNCTION_INJECTION_BUILTIN(xmlwriter_output_memory);
  return f_xmlwriter_output_memory(xmlwriter, flush);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_XMLWRITER_H__
