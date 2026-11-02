/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bcbd8  Symbol: Uint64 */

/* rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::Uint64(unsigned long long) */

void rapidjson::
     GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
     ::Uint64(ulonglong param_1)

{
  uint uVar1;
  int in_r0;
  uint *puVar2;
  uint in_r2;
  uint in_r3;
  
  puVar2 = (uint *)internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
                   Push<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                             ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)
                              (in_r0 + 0x10),1);
  uVar1 = DAT_000bcc1c;
  if (puVar2 != (uint *)0x0) {
    *puVar2 = in_r2;
    puVar2[1] = in_r3;
    puVar2[3] = uVar1;
    if (-1 < (int)in_r3) {
      puVar2[3] = DAT_000bcc20;
    }
    if (in_r3 == 0) {
      puVar2[3] = puVar2[3] | 0x800;
    }
    if ((in_r3 | in_r2 & 0x80000000) == 0) {
      puVar2[3] = puVar2[3] | 0x400;
    }
  }
  return;
}


