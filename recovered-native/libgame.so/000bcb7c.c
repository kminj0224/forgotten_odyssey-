/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bcb7c  Symbol: ParseHex4<rapidjson::GenericStringStream<rapidjson::UTF8<char>>> */

/* unsigned int rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>
   >::ParseHex4<rapidjson::GenericStringStream<rapidjson::UTF8<char> >
   >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&) */

uint __thiscall
rapidjson::
GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
::ParseHex4<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           *this,GenericStringStream *param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  pbVar3 = *(byte **)param_1;
  iVar6 = *(int *)(param_1 + 4);
  iVar5 = 4;
  uVar1 = 0;
  do {
    uVar4 = (uint)*pbVar3;
    pbVar3 = pbVar3 + 1;
    iVar2 = uVar4 + uVar1 * 0x10;
    if (uVar4 - 0x30 < 10) {
      uVar1 = iVar2 - 0x30;
    }
    else if (uVar4 - 0x41 < 6) {
      uVar1 = iVar2 - 0x37;
    }
    else {
      if (5 < uVar4 - 0x61) {
        *(int *)(this + 0x118) = DAT_000bcbd4 + 0xbcbbe;
        *(byte **)(this + 0x11c) = pbVar3 + (-1 - iVar6);
                    /* WARNING: Subroutine does not return */
        longjmp((__jmp_buf_tag *)(this + 0x18),1);
      }
      uVar1 = iVar2 - 0x57;
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(byte **)param_1 = pbVar3;
  return uVar1;
}


