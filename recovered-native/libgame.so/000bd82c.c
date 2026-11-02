/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bd82c  Symbol: ParseStream<2u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>> */

/* rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseStream<2u, rapidjson::UTF8<char>,
   rapidjson::GenericStringStream<rapidjson::UTF8<char> >
   >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&) */

GenericDocument * __thiscall
rapidjson::
GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
ParseStream<2u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
          (GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           *this,GenericStringStream *param_1)

{
  bool bVar1;
  int iVar2;
  void *__src;
  Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> aSStack_130 [280];
  undefined4 local_18;
  undefined4 local_14;
  
  if (this != (GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               *)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Stack
            (aSStack_130,(MemoryPoolAllocator *)0x0,0x100);
  local_18 = 0;
  local_14 = 0;
  bVar1 = GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          Parse<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                    ((GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      *)aSStack_130,param_1,(GenericDocument *)this);
  if (bVar1) {
    iVar2 = *(int *)(this + 0x1c);
    __src = (void *)(iVar2 + -0x10);
    *(void **)(this + 0x1c) = __src;
    memcpy(this,__src,0x10);
    *(undefined4 *)(iVar2 + -4) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
  }
  else {
    *(undefined4 *)(this + 0x28) = local_18;
    *(undefined4 *)(this + 0x2c) = local_14;
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0x18);
  }
  internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::~Stack(aSStack_130);
  return (GenericDocument *)this;
}


