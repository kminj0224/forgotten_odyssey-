/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015de6a  Symbol: tgaLoadImageData */

/* cocos2d::tgaLoadImageData(unsigned char*, unsigned long, cocos2d::sImageTGA*) */

int cocos2d::tgaLoadImageData(uchar *param_1,ulong param_2,sImageTGA *param_3)

{
  undefined uVar1;
  undefined *puVar2;
  int iVar3;
  size_t __n;
  uint uVar4;
  
  uVar4 = (uint)((byte)param_3[5] >> 3);
  iVar3 = 0;
  __n = uVar4 * (int)*(short *)(param_3 + 8) * (int)*(short *)(param_3 + 6);
  if (__n + 0x12 <= param_2) {
    memcpy(*(void **)(param_3 + 0xc),param_1 + 0x12,__n);
    if (2 < uVar4) {
      for (; iVar3 < (int)__n; iVar3 = iVar3 + uVar4) {
        puVar2 = (undefined *)(*(int *)(param_3 + 0xc) + iVar3);
        uVar1 = *puVar2;
        *puVar2 = *(undefined *)(*(int *)(param_3 + 0xc) + iVar3 + 2);
        *(undefined *)(*(int *)(param_3 + 0xc) + iVar3 + 2) = uVar1;
      }
    }
    iVar3 = 1;
  }
  return iVar3;
}


