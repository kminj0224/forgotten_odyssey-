/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e258  Symbol: ccInflateMemoryWithHint */

/* cocos2d::ZipUtils::ccInflateMemoryWithHint(unsigned char*, unsigned int, unsigned char**,
   unsigned int) */

uint cocos2d::ZipUtils::ccInflateMemoryWithHint
               (uchar *param_1,uint param_2,uchar **param_3,uint param_4)

{
  int iVar1;
  uchar *puVar2;
  uint local_c;
  
  local_c = 0;
  iVar1 = ccInflateMemoryWithHint(param_1,param_2,param_3,&local_c,param_4);
  puVar2 = *param_3;
  if ((iVar1 != 0) || (puVar2 == (uchar *)0x0)) {
    if (puVar2 != (uchar *)0x0) {
      operator_delete__(puVar2);
    }
    *param_3 = (uchar *)0x0;
    local_c = 0;
  }
  return local_c;
}


