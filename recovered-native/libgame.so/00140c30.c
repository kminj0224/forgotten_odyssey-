/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140c30  Symbol: shuffle */

/* cocos2d::CCShuffleTiles::shuffle(int*, unsigned int) */

CCShuffleTiles * __thiscall
cocos2d::CCShuffleTiles::shuffle(CCShuffleTiles *this,int *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = 0;
  uVar3 = param_2;
  while( true ) {
    iVar4 = iVar4 + -4;
    if ((int)(uVar3 - 1) < 0) break;
    lVar1 = lrand48();
    iVar2 = *(int *)((int)param_1 + iVar4 + param_2 * 4);
    uVar5 = __aeabi_idivmod(lVar1,uVar3);
    this = (CCShuffleTiles *)uVar5;
    *(int *)((int)param_1 + iVar4 + param_2 * 4) = param_1[(int)((ulonglong)uVar5 >> 0x20)];
    param_1[(int)((ulonglong)uVar5 >> 0x20)] = iVar2;
    uVar3 = uVar3 - 1;
  }
  return this;
}


