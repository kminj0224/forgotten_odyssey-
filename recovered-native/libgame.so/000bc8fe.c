/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bc8fe  Symbol: FUN_000bc8fe */

void * FUN_000bc8fe(uint **param_1,void *param_2,size_t param_3,uint param_4)

{
  void *__dest;
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *param_1;
  if ((param_2 == (void *)((int)puVar2 + ((puVar2[1] + 0xc) - param_3))) &&
     (uVar1 = ((param_4 - param_3) + 3 & 0xfffffffc) + puVar2[1], uVar1 <= *puVar2)) {
    puVar2[1] = uVar1;
  }
  else {
    __dest = (void *)rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc
                               ((MemoryPoolAllocator<rapidjson::CrtAllocator> *)param_1,param_4);
    param_2 = memcpy(__dest,param_2,param_3);
  }
  return param_2;
}


