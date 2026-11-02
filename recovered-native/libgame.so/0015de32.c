/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015de32  Symbol: tgaLoadHeader */

/* cocos2d::tgaLoadHeader(unsigned char*, unsigned long, cocos2d::sImageTGA*) */

void cocos2d::tgaLoadHeader(uchar *param_1,ulong param_2,sImageTGA *param_3)

{
  byte bVar1;
  
  if ((2 < param_2) && (param_3[4] = *(sImageTGA *)(param_1 + 2), 0x10 < param_2)) {
    param_3[6] = *(sImageTGA *)(param_1 + 0xc);
    param_3[7] = *(sImageTGA *)(param_1 + 0xd);
    param_3[8] = *(sImageTGA *)(param_1 + 0xe);
    param_3[9] = *(sImageTGA *)(param_1 + 0xf);
    param_3[5] = *(sImageTGA *)(param_1 + 0x10);
    if ((param_2 != 0x11) &&
       (bVar1 = param_1[0x11], *(undefined4 *)(param_3 + 0x10) = 0, (int)((uint)bVar1 << 0x1a) < 0))
    {
      *(undefined4 *)(param_3 + 0x10) = 1;
    }
  }
  return;
}


