/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bd6d8  Symbol: ParseArray<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>> */

/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseArray<2u,
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
ParseArray<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           *this,GenericStringStream *param_1,GenericDocument *param_2)

{
  char cVar1;
  GenericValue *__s;
  uint uVar2;
  
  *(int *)param_1 = *(int *)param_1 + 1;
  __s = internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
        Push<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                  ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)
                   (param_2 + 0x10),1);
  if (__s != (GenericValue *)0x0) {
    *(undefined4 *)(__s + 0xc) = 4;
    memset(__s,0,0xc);
  }
  SkipWhitespace<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(param_1);
  uVar2 = 0;
  if (**(char **)param_1 == ']') {
    *(char **)param_1 = *(char **)param_1 + 1;
  }
  else {
    while( true ) {
      ParseValue<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                (this,param_1,param_2);
      SkipWhitespace<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(param_1);
      uVar2 = uVar2 + 1;
      cVar1 = **(char **)param_1;
      *(char **)param_1 = *(char **)param_1 + 1;
      if (cVar1 != ',') break;
      SkipWhitespace<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(param_1);
    }
    if (cVar1 != ']') {
      *(int *)(this + 0x118) = DAT_000bd768 + 0xbd756;
      *(int *)(this + 0x11c) = *(int *)param_1 - *(int *)(param_1 + 4);
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)(this + 0x18),1);
    }
  }
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  EndArray((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            *)param_2,uVar2);
  return;
}


