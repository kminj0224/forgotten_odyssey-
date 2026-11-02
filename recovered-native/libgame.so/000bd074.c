/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bd074  Symbol: GenericValue */

/* rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(long long) */

void rapidjson::
     GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
     GenericValue(longlong param_1)

{
  uint *in_r0;
  uint in_r2;
  uint in_r3;
  uint uVar1;
  
  uVar1 = DAT_000bd0b4;
  *in_r0 = in_r2;
  in_r0[1] = in_r3;
  in_r0[3] = uVar1;
  if ((int)in_r3 < 0) {
    if ((int)(in_r3 + 1) < 0 != SCARRY4(in_r3,1)) {
      return;
    }
    uVar1 = DAT_000bd0c0;
    if ((in_r3 == 0xffffffff) && (in_r2 < 0x80000000)) {
      return;
    }
  }
  else {
    in_r0[3] = DAT_000bd0b8;
    if (in_r3 == 0) {
      in_r0[3] = DAT_000bd0bc;
    }
    if ((in_r3 | in_r2 & 0x80000000) != 0) {
      return;
    }
    uVar1 = in_r0[3] | 0x400;
  }
  in_r0[3] = uVar1;
  return;
}


