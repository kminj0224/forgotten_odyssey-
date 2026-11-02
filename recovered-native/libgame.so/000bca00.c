/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bca00  Symbol: String */

/* rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::String(char const*, unsigned int,
   bool) */

void __thiscall
rapidjson::
GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
String(GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
       *this,char *param_1,uint param_2,bool param_3)

{
  char *pcVar1;
  void **ppvVar2;
  void *__dest;
  char **ppcVar3;
  MemoryPoolAllocator<rapidjson::CrtAllocator> *this_00;
  
  if (param_3) {
    this_00 = *(MemoryPoolAllocator<rapidjson::CrtAllocator> **)(this + 0x10);
    ppvVar2 = (void **)internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
                       Push<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                                 ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)
                                  (this + 0x10),1);
    if (ppvVar2 != (void **)0x0) {
      ppvVar2[3] = DAT_000bca50;
      __dest = (void *)MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc(this_00,param_2 + 1);
      *ppvVar2 = __dest;
      ppvVar2[1] = (void *)param_2;
      memcpy(__dest,param_1,param_2);
      *(undefined *)((int)*ppvVar2 + param_2) = 0;
    }
  }
  else {
    ppcVar3 = (char **)internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
                       Push<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                                 ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)
                                  (this + 0x10),1);
    pcVar1 = DAT_000bca54;
    if (ppcVar3 != (char **)0x0) {
      *ppcVar3 = param_1;
      ppcVar3[1] = (char *)param_2;
      ppcVar3[3] = pcVar1;
    }
  }
  return;
}


