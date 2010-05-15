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
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_badmethodcallexception_h__
#define __GENERATED_cls_badmethodcallexception_h__

#include <cls/badfunctioncallexception.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 82 */
class c_badmethodcallexception : public c_badfunctioncallexception {
  BEGIN_CLASS_MAP(badmethodcallexception)
    PARENT_CLASS(badfunctioncallexception)
    PARENT_CLASS(exception)
    PARENT_CLASS(logicexception)
  END_CLASS_MAP(badmethodcallexception)
  DECLARE_CLASS(badmethodcallexception, BadMethodCallException, badfunctioncallexception)
  DECLARE_INVOKES_FROM_EVAL
  void init();
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_badmethodcallexception_h__
