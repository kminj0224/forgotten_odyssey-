/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e9c8  Symbol: setOpacity */

/* cocos2d::CCMenuItemToggle::setOpacity(unsigned char) */

void __thiscall cocos2d::CCMenuItemToggle::setOpacity(CCMenuItemToggle *this,uchar param_1)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  
  this[0x114] = (CCMenuItemToggle)param_1;
  iVar2 = *(int *)(this + 0x11c);
  if ((iVar2 != 0) &&
     (ppiVar3 = *(int ***)(iVar2 + 0x14), *(int *)(iVar2 + 0x18) - (int)ppiVar3 >> 2 != 0)) {
    while (ppiVar3 != *(int ***)(*(int *)(this + 0x11c) + 0x18)) {
      piVar1 = *ppiVar3;
      ppiVar3 = ppiVar3 + 1;
      if (piVar1 != (int *)0x0) {
        piVar1 = (int *)__dynamic_cast(piVar1,*(undefined4 *)(DAT_0014ea14 + 0x14e9f8),
                                       *(undefined4 *)(DAT_0014ea18 + 0x14e9fa),0xfffffffe);
      }
      (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
    }
  }
  return;
}


