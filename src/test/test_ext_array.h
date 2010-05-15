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

#ifndef __TEST_EXT_ARRAY_H__
#define __TEST_EXT_ARRAY_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtArray : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_array_change_key_case();
  bool test_array_chunk();
  bool test_array_combine();
  bool test_array_count_values();
  bool test_array_fill_keys();
  bool test_array_fill();
  bool test_array_filter();
  bool test_array_flip();
  bool test_array_key_exists();
  bool test_array_keys();
  bool test_array_map();
  bool test_array_merge_recursive();
  bool test_array_merge();
  bool test_array_replace_recursive();
  bool test_array_replace();
  bool test_array_multisort();
  bool test_array_pad();
  bool test_array_pop();
  bool test_array_product();
  bool test_array_push();
  bool test_array_rand();
  bool test_array_reduce();
  bool test_array_reverse();
  bool test_array_search();
  bool test_array_shift();
  bool test_array_slice();
  bool test_array_splice();
  bool test_array_sum();
  bool test_array_unique();
  bool test_array_unshift();
  bool test_array_values();
  bool test_array_walk_recursive();
  bool test_array_walk();
  bool test_compact();
  bool test_shuffle();
  bool test_count();
  bool test_sizeof();
  bool test_each();
  bool test_current();
  bool test_next();
  bool test_pos();
  bool test_prev();
  bool test_reset();
  bool test_end();
  bool test_in_array();
  bool test_key();
  bool test_range();
  bool test_array_diff();
  bool test_array_udiff();
  bool test_array_diff_assoc();
  bool test_array_diff_uassoc();
  bool test_array_udiff_assoc();
  bool test_array_udiff_uassoc();
  bool test_array_diff_key();
  bool test_array_diff_ukey();
  bool test_array_intersect();
  bool test_array_uintersect();
  bool test_array_intersect_assoc();
  bool test_array_intersect_uassoc();
  bool test_array_uintersect_assoc();
  bool test_array_uintersect_uassoc();
  bool test_array_intersect_key();
  bool test_array_intersect_ukey();
  bool test_sort();
  bool test_rsort();
  bool test_asort();
  bool test_arsort();
  bool test_ksort();
  bool test_krsort();
  bool test_usort();
  bool test_uasort();
  bool test_uksort();
  bool test_natsort();
  bool test_natcasesort();
  bool test_i18n_loc_get_default();
  bool test_i18n_loc_set_default();
  bool test_i18n_loc_set_attribute();
  bool test_i18n_loc_set_strength();
  bool test_i18n_loc_get_error_code();
};

///////////////////////////////////////////////////////////////////////////////

#endif // __TEST_EXT_ARRAY_H__