/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bd600  Symbol: ParseObject<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>> */

/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseObject<2u,
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
ParseObject<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           *this,GenericStringStream *param_1,GenericDocument *param_2)

{
  char cVar1;
  GenericValue *__s;
  int iVar2;
  uint uVar3;
  
  *(int *)param_1 = *(int *)param_1 + 1;
  __s = internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
        Push<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                  ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)
                   (param_2 + 0x10),1);
  if (__s != (GenericValue *)0x0) {
    *(undefined4 *)(__s + 0xc) = 3;
    memset(__s,0,0xc);
  }
  SkipWhitespace<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(param_1);
  uVar3 = 0;
  if (**(char **)param_1 == '}') {
    *(char **)param_1 = *(char **)param_1 + 1;
LAB_000bd6b8:
    GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    EndObject((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               *)param_2,uVar3);
    return;
  }
  do {
    if (**(char **)param_1 != '\"') {
      iVar2 = DAT_000bd6cc + 0xbd650;
LAB_000bd674:
      *(int *)(this + 0x118) = iVar2;
      *(int *)(this + 0x11c) = *(int *)param_1 - *(int *)(param_1 + 4);
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)(this + 0x18),1);
    }
    ParseString<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
              (this,param_1,param_2);
    SkipWhitespace<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(param_1);
    cVar1 = **(char **)param_1;
    *(char **)param_1 = *(char **)param_1 + 1;
    if (cVar1 != ':') {
      iVar2 = DAT_000bd6d0 + 0xbd676;
      goto LAB_000bd674;
    }
    SkipWhitespace<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(param_1);
    ParseValue<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
              (this,param_1,param_2);
    SkipWhitespace<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(param_1);
    uVar3 = uVar3 + 1;
    cVar1 = **(char **)param_1;
    *(char **)param_1 = *(char **)param_1 + 1;
    if (cVar1 != ',') {
      if (cVar1 == '}') goto LAB_000bd6b8;
      iVar2 = (int)&DAT_000bd6cc + DAT_000bd6d4;
      goto LAB_000bd674;
    }
    SkipWhitespace<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(param_1);
  } while( true );
}


