/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bcc24  Symbol: Push<char> */

/* char* rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>
   >::Push<char>(unsigned int) */

char * __thiscall
rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Push<char>
          (Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *this,uint param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(uint *)(this + 0x10) <= *(int *)(this + 0xc) + param_1) {
    iVar2 = *(int *)(this + 8);
    iVar5 = *(int *)(this + 0xc) - iVar2;
    uVar4 = iVar5 + param_1;
    uVar3 = *(uint *)(this + 0x14) * 2;
    if (uVar4 < uVar3) {
      uVar4 = uVar3;
    }
    if (iVar2 == 0) {
      iVar2 = MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc
                        (*(MemoryPoolAllocator<rapidjson::CrtAllocator> **)this,uVar4);
    }
    else if (*(uint *)(this + 0x14) < uVar4) {
      iVar2 = FUN_000bc8fe();
    }
    *(uint *)(this + 0x14) = uVar4;
    *(int *)(this + 8) = iVar2;
    *(int *)(this + 0xc) = iVar2 + iVar5;
    *(uint *)(this + 0x10) = iVar2 + uVar4;
  }
  pcVar1 = *(char **)(this + 0xc);
  *(char **)(this + 0xc) = pcVar1 + param_1;
  return pcVar1;
}


