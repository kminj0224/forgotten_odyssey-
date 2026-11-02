/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bcc8c  Symbol: Encode<rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::StackStream> */

/* void rapidjson::UTF8<char>::Encode<rapidjson::GenericReader<rapidjson::UTF8<char>,
   rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>
   >::StackStream>(rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StackStream&, unsigned int) */

void rapidjson::UTF8<char>::
     Encode<rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::StackStream>
               (StackStream *param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_2;
  if (0x7f < param_2) {
    if (DAT_000bcd18 < param_2) {
      if (DAT_000bcd1c < param_2) {
        GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::StackStream::Put(param_1,(byte)(param_2 >> 0x12) | 0xf0);
        GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::StackStream::Put(param_1,(byte)(param_2 >> 0xc) & 0x3f | 0x80);
      }
      else {
        GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::StackStream::Put(param_1,(byte)(param_2 >> 0xc) | 0xe0);
      }
      GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
      ::StackStream::Put(param_1,(byte)(param_2 >> 6) & 0x3f | 0x80);
    }
    else {
      GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
      ::StackStream::Put(param_1,(byte)(param_2 >> 6) | 0xc0);
    }
    bVar1 = bVar1 & 0x3f | 0x80;
  }
  GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  ::StackStream::Put(param_1,bVar1);
  return;
}


