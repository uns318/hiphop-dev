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

#ifndef __TEST_EXT_APC_H__
#define __TEST_EXT_APC_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtApc : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_apc_add();
  bool test_apc_store();
  bool test_apc_fetch();
  bool test_apc_delete();
  bool test_apc_compile_file();
  bool test_apc_cache_info();
  bool test_apc_clear_cache();
  bool test_apc_define_constants();
  bool test_apc_load_constants();
  bool test_apc_sma_info();
  bool test_apc_filehits();
  bool test_apc_delete_file();
  bool test_apc_inc();
  bool test_apc_dec();
  bool test_apc_cas();
  bool test_apc_bin_dump();
  bool test_apc_bin_load();
  bool test_apc_bin_dumpfile();
  bool test_apc_bin_loadfile();
};

///////////////////////////////////////////////////////////////////////////////

#endif // __TEST_EXT_APC_H__