/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bcd20  Symbol: Validate<rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::StackStream> */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000bcd50) */
/* WARNING: Removing unreachable block (ram,0x000bcd50) */
/* bool rapidjson::UTF8<char>::Validate<rapidjson::GenericStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>
   >::StackStream>(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::StackStream&) */

bool rapidjson::UTF8<char>::
     Validate<rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::StackStream>
               (GenericStringStream *param_1,StackStream *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool local_20;
  
  bVar1 = **(byte **)param_1;
  *(byte **)param_1 = *(byte **)param_1 + 1;
  GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  ::StackStream::Put(param_2,bVar1);
  if (-1 < (int)((uint)bVar1 * 0x1000000)) {
    return true;
  }
  iVar3 = *(int *)(DAT_000bcf00 + 0xbcd46);
  switch(*(undefined *)(iVar3 + (uint)bVar1)) {
  case 2:
    bVar1 = **(byte **)param_1;
    *(byte **)param_1 = *(byte **)param_1 + 1;
    GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
    ::StackStream::Put(param_2,bVar1);
    return (bool)('\x01' - ((*(byte *)(iVar3 + (uint)bVar1) & 0x70) == 0));
  case 3:
    bVar1 = **(byte **)param_1;
    *(byte **)param_1 = *(byte **)param_1 + 1;
    GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
    ::StackStream::Put(param_2,bVar1);
    local_20 = (*(byte *)(iVar3 + (uint)bVar1) & 0x70) != 0;
    break;
  case 4:
    bVar1 = **(byte **)param_1;
    *(byte **)param_1 = *(byte **)param_1 + 1;
    GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
    ::StackStream::Put(param_2,bVar1);
    local_20 = (*(byte *)(iVar3 + (uint)bVar1) & 0x50) != 0;
    goto LAB_000bce7e;
  case 5:
    bVar1 = **(byte **)param_1;
    *(byte **)param_1 = *(byte **)param_1 + 1;
    GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
    ::StackStream::Put(param_2,bVar1);
    bVar2 = *(byte *)(iVar3 + (uint)bVar1);
    bVar1 = **(byte **)param_1;
    *(byte **)param_1 = *(byte **)param_1 + 1;
    GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
    ::StackStream::Put(param_2,bVar1);
    local_20 = (bool)((byte)(((uint)bVar2 << 0x1b) >> 0x1f) &
                     (*(byte *)(iVar3 + (uint)bVar1) & 0x70) != 0);
    break;
  case 6:
    bVar1 = **(byte **)param_1;
    *(byte **)param_1 = *(byte **)param_1 + 1;
    GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
    ::StackStream::Put(param_2,bVar1);
    bVar2 = *(byte *)(iVar3 + (uint)bVar1);
    bVar1 = **(byte **)param_1;
    *(byte **)param_1 = *(byte **)param_1 + 1;
    GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
    ::StackStream::Put(param_2,bVar1);
    local_20 = (bVar2 & 0x70) != 0 && (*(byte *)(iVar3 + (uint)bVar1) & 0x70) != 0;
    bVar1 = **(byte **)param_1;
    *(byte **)param_1 = *(byte **)param_1 + 1;
    GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
    ::StackStream::Put(param_2,bVar1);
    bVar1 = *(byte *)(iVar3 + (uint)bVar1);
    goto LAB_000bcef6;
  default:
    return false;
  case 10:
    bVar1 = **(byte **)param_1;
    *(byte **)param_1 = *(byte **)param_1 + 1;
    GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
    ::StackStream::Put(param_2,bVar1);
    local_20 = SUB41(((uint)*(byte *)(iVar3 + (uint)bVar1) << 0x1a) >> 0x1f,0);
LAB_000bce7e:
    bVar1 = **(byte **)param_1;
    *(byte **)param_1 = *(byte **)param_1 + 1;
    GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
    ::StackStream::Put(param_2,bVar1);
    bVar1 = *(byte *)(iVar3 + (uint)bVar1);
    goto LAB_000bce94;
  case 0xb:
    bVar1 = **(byte **)param_1;
    *(byte **)param_1 = *(byte **)param_1 + 1;
    GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
    ::StackStream::Put(param_2,bVar1);
    bVar2 = *(byte *)(iVar3 + (uint)bVar1);
    bVar1 = **(byte **)param_1;
    *(byte **)param_1 = *(byte **)param_1 + 1;
    GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
    ::StackStream::Put(param_2,bVar1);
    local_20 = (bVar2 & 0x60) != 0 && (*(byte *)(iVar3 + (uint)bVar1) & 0x70) != 0;
    bVar1 = **(byte **)param_1;
    *(byte **)param_1 = *(byte **)param_1 + 1;
    GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
    ::StackStream::Put(param_2,bVar1);
    bVar1 = *(byte *)(iVar3 + (uint)bVar1);
LAB_000bcef6:
    return (bool)(1U - ((bVar1 & 0x70) == 0) & local_20);
  }
  bVar1 = **(byte **)param_1;
  *(byte **)param_1 = *(byte **)param_1 + 1;
  GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  ::StackStream::Put(param_2,bVar1);
  bVar1 = *(byte *)(iVar3 + (uint)bVar1);
LAB_000bce94:
  return (bool)(1U - ((bVar1 & 0x70) == 0) & local_20);
}


