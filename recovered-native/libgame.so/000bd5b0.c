/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bd5b0  Symbol: ParseValue<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>> */

/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseValue<2u,
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
ParseValue<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           *this,GenericStringStream *param_1,GenericDocument *param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)param_1;
  if (bVar1 == 0x6e) {
    ParseNull<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
              (this,param_1,param_2);
    return;
  }
  if (bVar1 < 0x6f) {
    if (bVar1 == 0x5b) {
      ParseArray<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                (this,param_1,param_2);
      return;
    }
    if (bVar1 == 0x66) {
      ParseFalse<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                (this,param_1,param_2);
      return;
    }
    if (bVar1 == 0x22) {
      ParseString<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                (this,param_1,param_2);
      return;
    }
  }
  else {
    if (bVar1 == 0x74) {
      ParseTrue<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                (this,param_1,param_2);
      return;
    }
    if (bVar1 == 0x7b) {
      ParseObject<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                (this,param_1,param_2);
      return;
    }
  }
  ParseNumber<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
            (this,param_1,param_2);
  return;
}


