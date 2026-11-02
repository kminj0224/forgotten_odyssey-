/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012c8f8  Symbol: init */

/* LogoLayer::init() */

int LogoLayer::init(void)

{
  int *in_r0;
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  float extraout_s0;
  float extraout_s1;
  CCPoint aCStack_18 [8];
  
  iVar1 = cocos2d::CCLayer::init();
  if (iVar1 != 0) {
    pcVar3 = *(code **)(*in_r0 + 0x74);
    puVar4 = (undefined4 *)(DAT_0012c948 + 0x12c914);
    cocos2d::CCPoint::CCPoint(aCStack_18,extraout_s0,extraout_s1);
    (*pcVar3)(in_r0,aCStack_18);
    puVar4 = (undefined4 *)*puVar4;
    iVar1 = *in_r0;
    uVar2 = __divsf3(*puVar4,DAT_0012c94c);
    (**(code **)(iVar1 + 0x2c))(in_r0,uVar2);
    uVar2 = __divsf3(puVar4[1],DAT_0012c950);
    (**(code **)(*in_r0 + 0x34))(in_r0,uVar2);
    iVar1 = 1;
  }
  return iVar1;
}


