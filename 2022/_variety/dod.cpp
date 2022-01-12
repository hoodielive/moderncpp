#include <cstdint>
#include <iostream>
#include <assert.h>

using namespace std;


struct Temp_Allocator
{
  void *memory;
  uint64_t used, size;
};

struct Temp_Mem_Block
{
  Temp_Allocator *allocator;
  uint64_t saved_used;
};

void *alloc(Temp_Allocator* allocator, uint64_t size, uint64_t alignment)
{
  uint8_t *mem = ((uint8_t * )allocator->memory) + allocator->used;
  uint8_t *aligned = (uint8_t *)((((uint64_t)mem) + alignment - 1) & ~(alignment - 1));
  uint64_t offset = aligned - mem;
  size += offset;

  assert(allocator->used + size <= allocator->size);
  allocator->used += size;

  return aligned;
};

Temp_Mem_Block begin_temp_alloc(Temp_Allocator* allocator)
{
  struct Temp_Mem_Block result = { allocator, saved_used = allocator->used };
  return result;
};
