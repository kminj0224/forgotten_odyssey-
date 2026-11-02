/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bc834  Symbol: HasMember */

/* rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::HasMember(char const*) const */

bool __thiscall
rapidjson::
GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
HasMember(GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          *this,char *param_1)

{
  int iVar1;
  
  iVar1 = FindMember(this,param_1);
  return iVar1 != 0;
}


