/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bc7a0  Symbol: FindMember */

/* rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::FindMember(char const*) */

void ** __thiscall
rapidjson::
GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
FindMember(GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           *this,char *param_1)

{
  int iVar1;
  void **ppvVar2;
  void **ppvVar3;
  
  ppvVar3 = *(void ***)this;
  ppvVar2 = ppvVar3;
  while( true ) {
    if (ppvVar2 == ppvVar3 + *(int *)(this + 4) * 8) {
      return (void **)0x0;
    }
    if ((param_1[(int)ppvVar2[1]] == '\0') &&
       (iVar1 = memcmp(*ppvVar2,param_1,(size_t)ppvVar2[1]), iVar1 == 0)) break;
    ppvVar2 = ppvVar2 + 8;
  }
  return ppvVar2;
}


