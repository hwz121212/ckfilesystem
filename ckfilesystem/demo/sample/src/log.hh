#pragma once
#include <ckcore/types.hh>
#include <ckcore/log.hh>
#include <stdarg.h>

class Log : public ckcore::Log
{
public:
    // ckcore::Log interface.
    void print(const ckcore::tchar *format,...);
    void print_line(const ckcore::tchar *format,...);
};

