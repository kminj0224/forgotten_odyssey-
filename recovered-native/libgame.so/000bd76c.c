/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bd76c  Symbol: Parse<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>> */

/* bool rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::Parse<2u,
   rapidjson::GenericStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >
   >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&) */

bool __thiscall
rapidjson::
GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
::
Parse<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           *this,GenericStringStream *param_1,GenericDocument *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  iVar2 = setjmp((__jmp_buf_tag *)(this + 0x18));
  if (iVar2 != 0) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(this + 8);
    return false;
  }
  SkipWhitespace<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(param_1);
  cVar1 = **(char **)param_1;
  if (cVar1 == '\0') {
    *(int *)(this + 0x118) = DAT_000bd820 + 0xbd7ae;
    iVar2 = *(int *)param_1;
    iVar3 = *(int *)(param_1 + 4);
LAB_000bd7e4:
    *(int *)(this + 0x11c) = iVar2 - iVar3;
  }
  else {
    if (cVar1 == '[') {
      ParseArray<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                (this,param_1,param_2);
    }
    else {
      if (cVar1 != '{') {
        *(int *)(this + 0x118) = DAT_000bd824 + 0xbd7e2;
        iVar2 = *(int *)param_1;
        iVar3 = *(int *)(param_1 + 4);
        goto LAB_000bd7e4;
      }
      ParseObject<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                (this,param_1,param_2);
    }
    SkipWhitespace<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(param_1);
    if (**(char **)param_1 == '\0') {
      return true;
    }
    *(int *)(this + 0x118) = DAT_000bd828 + 0xbd80c;
    *(int *)(this + 0x11c) = *(int *)param_1 - *(int *)(param_1 + 4);
  }
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)(this + 0x18),1);
}


