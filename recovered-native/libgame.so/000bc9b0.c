/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bc9b0  Symbol: Push<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>> */

/* rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >*
   rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>
   >::Push<rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(unsigned int) */

GenericValue * __thiscall
rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
Push<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
          (Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *this,uint param_1)

{
  GenericValue *pGVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1 * 0x10;
  if (*(uint *)(this + 0x10) <= (uint)(*(int *)(this + 0xc) + iVar5)) {
    iVar2 = *(int *)(this + 8);
    iVar6 = *(int *)(this + 0xc) - iVar2;
    uVar4 = iVar5 + iVar6;
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
    *(int *)(this + 0xc) = iVar2 + iVar6;
    *(uint *)(this + 0x10) = iVar2 + uVar4;
  }
  pGVar1 = *(GenericValue **)(this + 0xc);
  *(GenericValue **)(this + 0xc) = pGVar1 + iVar5;
  return pGVar1;
}


