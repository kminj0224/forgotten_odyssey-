/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e3a4  Symbol: setOpacity */

/* cocos2d::CCMenuItemSprite::setOpacity(unsigned char) */

void __thiscall cocos2d::CCMenuItemSprite::setOpacity(CCMenuItemSprite *this,uchar param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(this + 0x114);
  iVar2 = DAT_0014e414 + 0x14e3b6;
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)__dynamic_cast(piVar1,*(undefined4 *)(iVar2 + DAT_0014e418),
                                   *(undefined4 *)(iVar2 + DAT_0014e41c),0xfffffffe);
  }
  (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
  if (*(int *)(this + 0x118) != 0) {
    piVar1 = (int *)__dynamic_cast(*(int *)(this + 0x118),*(undefined4 *)(iVar2 + DAT_0014e418),
                                   *(undefined4 *)(iVar2 + DAT_0014e41c),0xfffffffe);
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
  }
  if (*(int *)(this + 0x11c) != 0) {
    piVar1 = (int *)__dynamic_cast(*(int *)(this + 0x11c),*(undefined4 *)(iVar2 + DAT_0014e418),
                                   *(undefined4 *)(iVar2 + DAT_0014e41c),0xfffffffe);
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
  }
  return;
}


