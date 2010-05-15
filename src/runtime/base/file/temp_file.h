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

#ifndef __HPHP_TEMP_FILE_H__
#define __HPHP_TEMP_FILE_H__

#include <runtime/base/file/plain_file.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/**
 * A temporary read/write file system file for php://temp, it will be deleted
 * from the file system on close.
 */
class TempFile : public PlainFile {
public:
  DECLARE_OBJECT_ALLOCATION(TempFile);

  TempFile(bool autoDelete = true);
  virtual ~TempFile();

  const std::string getName() const { return m_name;}

  // overriding ResourceData
  const char *o_getClassName() const { return "TempFile";}

  // implementing File
  virtual bool open(CStrRef filename, CStrRef mode);
  virtual bool close();

private:
  bool m_autoDelete;
  std::string m_name;

  bool closeImpl();
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __HPHP_TEMP_FILE_H__
