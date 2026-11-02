/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bc7d4  Symbol: operator[] */

/* rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::operator[](char const*) */

int __thiscall
rapidjson::
GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
operator[](GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           *this,char *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  iVar1 = FindMember(this,param_1);
  if (iVar1 == 0) {
    puVar3 = *(uint **)(DAT_000bc824 + 0xbc7ec);
    iVar1 = *(int *)(DAT_000bc828 + 0xbc7f6);
    if (((*puVar3 & 1) == 0) && (iVar2 = __cxa_guard_acquire(puVar3), iVar2 != 0)) {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      __cxa_guard_release(puVar3);
      FUN_00201240(iVar1,*(undefined4 *)(DAT_000bc82c + 0xbc816),
                   *(undefined4 *)(DAT_000bc830 + 0xbc818));
    }
  }
  else {
    iVar1 = iVar1 + 0x10;
  }
  return iVar1;
}


