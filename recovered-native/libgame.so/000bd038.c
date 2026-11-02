/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bd038  Symbol: ParseString<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>> */

/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseString<2u,
   rapidjson::GenericStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >
   >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&) */

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
::
ParseString<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           *this,GenericStringStream *param_1,GenericDocument *param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *local_18;
  int local_14;
  
  local_20 = *(undefined4 *)param_1;
  local_1c = *(undefined4 *)(param_1 + 4);
  local_14 = 0;
  local_18 = this;
  ParseStringToStream<2u,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::StackStream>
            (this,(GenericStringStream *)&local_20,(StackStream *)&local_18);
  iVar1 = *(int *)(this + 0xc);
  *(char **)(this + 0xc) = (char *)(iVar1 - local_14);
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  String((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          *)param_2,(char *)(iVar1 - local_14),local_14 - 1,true);
  *(undefined4 *)param_1 = local_20;
  *(undefined4 *)(param_1 + 4) = local_1c;
  return;
}


