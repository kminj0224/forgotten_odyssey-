/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bc984  Symbol: EndArray */

/* rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::EndArray(unsigned int) */

void __thiscall
rapidjson::
GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
EndArray(GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
         *this,uint param_1)

{
  MemoryPoolAllocator<rapidjson::CrtAllocator> *this_00;
  void *__dest;
  void *__src;
  
  __src = (void *)(*(int *)(this + 0x1c) + param_1 * -0x10);
  *(void **)(this + 0x1c) = __src;
  this_00 = *(MemoryPoolAllocator<rapidjson::CrtAllocator> **)(this + 0x10);
  *(undefined4 *)((int)__src + -4) = 4;
  __dest = (void *)MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc(this_00,param_1 * 0x10);
  *(void **)((int)__src + -0x10) = __dest;
  memcpy(__dest,__src,param_1 * 0x10);
  *(uint *)((int)__src + -8) = param_1;
  *(uint *)((int)__src + -0xc) = param_1;
  return;
}


