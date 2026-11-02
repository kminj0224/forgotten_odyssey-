/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bcc72  Symbol: Put */

/* rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StackStream::Put(char) */

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
::StackStream::Put(StackStream *this,char param_1)

{
  char *pcVar1;
  
  pcVar1 = internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Push<char>
                     (*(Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> **)this,1);
  *pcVar1 = param_1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}


