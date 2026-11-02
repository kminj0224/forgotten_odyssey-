/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015deb8  Symbol: tgaFlipImage */

/* cocos2d::tgaFlipImage(cocos2d::sImageTGA*) */

void cocos2d::tgaFlipImage(sImageTGA *param_1)

{
  short sVar1;
  void *__dest;
  int iVar2;
  uint uVar3;
  size_t __size;
  int iVar4;
  uint uVar5;
  
  __size = (int)*(short *)(param_1 + 6) * (uint)((byte)param_1[5] >> 3);
  __dest = malloc(__size);
  if (__dest != (void *)0x0) {
    iVar4 = 0;
    uVar5 = 0;
    while( true ) {
      sVar1 = *(short *)(param_1 + 8);
      iVar4 = iVar4 + __size;
      if ((int)sVar1 / 2 <= (int)uVar5) break;
      iVar2 = *(int *)(param_1 + 0xc);
      memcpy(__dest,(void *)(iVar2 + (iVar4 - __size)),__size);
      uVar3 = ~uVar5;
      uVar5 = uVar5 + 1;
      memcpy((void *)(*(int *)(param_1 + 0xc) + (iVar4 - __size)),
             (void *)(iVar2 + __size * ((int)sVar1 + uVar3)),__size);
      memcpy((void *)(*(int *)(param_1 + 0xc) + __size * ((int)*(short *)(param_1 + 8) + uVar3)),
             __dest,__size);
    }
    free(__dest);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


