/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cb418  Symbol: vTransSpeakName */

/* vTransSpeakName(unsigned char*, long) */

void vTransSpeakName(uchar *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1[param_2 + 1];
  *(uint *)(*(int *)(DAT_000cb444 + 0xcb424) + DAT_000cb448) = uVar1;
  *(uint *)(*(int *)(DAT_000cb44c + 0xcb42e) + 8) = uVar1;
  *(uint *)(DAT_000cb450 + 0xcb436) = uVar1;
  if (uVar1 == 0x10) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_000cb454 + 0xcb440));
  }
  return;
}


