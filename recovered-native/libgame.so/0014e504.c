/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e504  Symbol: setOpacity */

/* cocos2d::CCMenuItemLabel::setOpacity(unsigned char) */

void __thiscall cocos2d::CCMenuItemLabel::setOpacity(CCMenuItemLabel *this,uchar param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x118);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)__dynamic_cast(piVar1,*(undefined4 *)(DAT_0014e530 + 0x14e51a),
                                   *(undefined4 *)(DAT_0014e534 + 0x14e51c),0xfffffffe);
  }
  (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
  return;
}


