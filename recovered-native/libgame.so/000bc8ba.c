/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bc8ba  Symbol: Stack */

/* rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>
   >::Stack(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>*, unsigned int) */

Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> * __thiscall
rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Stack
          (Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *this,
          MemoryPoolAllocator *param_1,uint param_2)

{
  MemoryPoolAllocator<rapidjson::CrtAllocator> *this_00;
  int iVar1;
  
  *(MemoryPoolAllocator **)this = param_1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(uint *)(this + 0x14) = param_2;
  if (param_1 == (MemoryPoolAllocator *)0x0) {
    this_00 = (MemoryPoolAllocator<rapidjson::CrtAllocator> *)operator_new(0x14);
    MemoryPoolAllocator<rapidjson::CrtAllocator>::MemoryPoolAllocator
              (this_00,0x10000,(CrtAllocator *)0x0);
    *(MemoryPoolAllocator<rapidjson::CrtAllocator> **)this = this_00;
    *(MemoryPoolAllocator<rapidjson::CrtAllocator> **)(this + 4) = this_00;
  }
  iVar1 = MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc
                    (*(MemoryPoolAllocator<rapidjson::CrtAllocator> **)this,*(uint *)(this + 0x14));
  *(int *)(this + 8) = iVar1;
  *(int *)(this + 0xc) = iVar1;
  *(int *)(this + 0x10) = iVar1 + *(int *)(this + 0x14);
  return this;
}


