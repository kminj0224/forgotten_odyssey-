/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cb3b4  Symbol: vTransSetDisplayCha */

/* vTransSetDisplayCha(unsigned char*, long) */

void vTransSetDisplayCha(uchar *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1[param_2 + 1];
  bVar1 = param_1[param_2 + 2];
  if (uVar3 == 0x10) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_000cb3f4 + 0xcb3c8));
  }
  if (param_1[param_2] == '\x05') {
    iVar2 = *(int *)(DAT_000cb3f8 + 0xcb3dc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(uint *)(iVar2 + 0x10) = uVar3;
    *(uint *)(iVar2 + 0x14) = (uint)bVar1;
  }
  else if (param_1[param_2] == '\b') {
    iVar2 = *(int *)(DAT_000cb3fc + 0xcb3ec);
    *(undefined4 *)(iVar2 + 0x18) = 1;
    *(uint *)(iVar2 + 0x1c) = uVar3;
    *(uint *)(iVar2 + 0x20) = (uint)bVar1;
  }
  return;
}


