/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bc76a  Symbol: GetDouble */

/* rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GetDouble() const */

void rapidjson::
     GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
     GetDouble(void)

{
  undefined4 *in_r0;
  int iVar1;
  
  iVar1 = in_r0[3];
  if (-1 < iVar1 << 0x11) {
    if (iVar1 << 0x15 < 0) {
      __floatsidf();
    }
    else if (iVar1 << 0x14 < 0) {
      __floatunsidf();
    }
    else if (iVar1 << 0x13 < 0) {
      __floatdidf();
    }
    else {
      __floatundidf(*in_r0,in_r0[1]);
    }
  }
  return;
}


