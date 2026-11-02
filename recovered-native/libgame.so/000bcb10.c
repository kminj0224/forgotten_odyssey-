/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bcb10  Symbol: ParseFalse<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>> */

/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseFalse<2u,
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
ParseFalse<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           *this,GenericStringStream *param_1,GenericDocument *param_2)

{
  char cVar1;
  GenericValue *pGVar2;
  int iVar3;
  
  iVar3 = *(int *)param_1;
  *(int *)param_1 = iVar3 + 1;
  cVar1 = *(char *)(iVar3 + 1);
  *(int *)param_1 = iVar3 + 2;
  if ((((cVar1 == 'a') && (cVar1 = *(char *)(iVar3 + 2), *(int *)param_1 = iVar3 + 3, cVar1 == 'l'))
      && (cVar1 = *(char *)(iVar3 + 3), *(int *)param_1 = iVar3 + 4, cVar1 == 's')) &&
     (cVar1 = *(char *)(iVar3 + 4), *(int *)param_1 = iVar3 + 5, cVar1 == 'e')) {
    pGVar2 = internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
             Push<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                       ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)
                        (param_2 + 0x10),1);
    if (pGVar2 != (GenericValue *)0x0) {
      *(undefined4 *)(pGVar2 + 0xc) = DAT_000bcb74;
    }
    return;
  }
  *(int *)(this + 0x118) = DAT_000bcb78 + 0xbcb5e;
  *(int *)(this + 0x11c) = (*(int *)param_1 - *(int *)(param_1 + 4)) + -1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)(this + 0x18),1);
}


