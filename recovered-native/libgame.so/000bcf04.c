/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bcf04  Symbol: ParseStringToStream<2u,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::StackStream> */

/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseStringToStream<2u,
   rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::GenericStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>
   >::StackStream>(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StackStream&) */

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
::
ParseStringToStream<2u,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::StackStream>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           *this,GenericStringStream *param_1,StackStream *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  
  *(int *)param_1 = *(int *)param_1 + 1;
  do {
    while( true ) {
      pbVar5 = *(byte **)param_1;
      bVar1 = *pbVar5;
      if (bVar1 != 0x5c) break;
      *(byte **)param_1 = pbVar5 + 1;
      bVar1 = pbVar5[1];
      *(byte **)param_1 = pbVar5 + 2;
      cVar2 = *(char *)(*(int *)(DAT_000bd010 + 0xbcf2a) + (uint)bVar1);
      if (cVar2 == '\0') {
        if (bVar1 != 0x75) {
          iVar7 = DAT_000bd024 + 0xbcfa8;
          goto LAB_000bcfd4;
        }
        uVar4 = ParseHex4<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(this,param_1);
        uVar8 = uVar4 + DAT_000bd014;
        if (uVar8 <= DAT_000bd018) {
          pcVar6 = *(char **)param_1;
          cVar2 = *pcVar6;
          *(char **)param_1 = pcVar6 + 1;
          if ((cVar2 == '\\') && (cVar2 = pcVar6[1], *(char **)param_1 = pcVar6 + 2, cVar2 == 'u'))
          {
            uVar4 = ParseHex4<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(this,param_1);
            if (uVar4 + DAT_000bd034 <= DAT_000bd018) {
              uVar4 = (uVar4 + DAT_000bd034 | uVar8 * 0x400) + 0x10000;
              goto LAB_000bcf96;
            }
            iVar7 = DAT_000bd020 + 0xbcf7a;
          }
          else {
            iVar7 = DAT_000bd01c + 0xbcf70;
          }
          *(int *)(this + 0x118) = iVar7;
          iVar7 = (*(int *)param_1 - *(int *)(param_1 + 4)) + -2;
          goto LAB_000bcf80;
        }
LAB_000bcf96:
        UTF8<char>::
        Encode<rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::StackStream>
                  (param_2,uVar4);
      }
      else {
        StackStream::Put(param_2,cVar2);
      }
    }
    if (bVar1 == 0x22) {
      *(byte **)param_1 = pbVar5 + 1;
      StackStream::Put(param_2,'\0');
      return;
    }
    if (bVar1 == 0) {
      iVar7 = DAT_000bd028 + 0xbcfc8;
LAB_000bcfd4:
      *(int *)(this + 0x118) = iVar7;
      iVar7 = (*(int *)param_1 - *(int *)(param_1 + 4)) + -1;
      goto LAB_000bcf80;
    }
    if (bVar1 < 0x20) {
      iVar7 = DAT_000bd02c + 0xbcfd6;
      goto LAB_000bcfd4;
    }
    bVar3 = UTF8<char>::
            Validate<rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::StackStream>
                      (param_1,param_2);
  } while (bVar3);
  *(int *)(this + 0x118) = DAT_000bd030 + 0xbcff6;
  iVar7 = *(int *)param_1 - *(int *)(param_1 + 4);
LAB_000bcf80:
  *(int *)(this + 0x11c) = iVar7;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)(this + 0x18),1);
}


