#pragma once

#include "std/cstdint.hpp"

namespace downloader
{

class IHttpThreadCallback
{
public:
  virtual bool OnWrite(int64_t offset, void const * buffer, size_t size) = 0;
  virtual void OnFinish(long httpCode, int64_t begRange, int64_t endRange) = 0;
};

} // namespace downloader
