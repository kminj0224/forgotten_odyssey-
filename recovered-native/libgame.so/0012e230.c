/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012e230  Symbol: onEnter */

/* MainMenuLayer::onEnter() */

undefined8 MainMenuLayer::onEnter(void)

{
  int *in_r0;
  undefined4 uVar1;
  undefined4 in_r1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  float in_s0;
  float in_s1;
  int *piStack_18;
  undefined4 uStack_14;
  
  pcVar2 = *(code **)(*in_r0 + 0x74);
  puVar4 = (undefined4 *)(DAT_0012e2a4 + 0x12e244);
  piStack_18 = in_r0;
  uStack_14 = in_r1;
  cocos2d::CCPoint::CCPoint((CCPoint *)&piStack_18,in_s0,in_s1);
  (*pcVar2)(in_r0,&piStack_18);
  puVar4 = (undefined4 *)*puVar4;
  iVar3 = *in_r0;
  uVar1 = __divsf3(*puVar4,DAT_0012e2a8);
  (**(code **)(iVar3 + 0x2c))(in_r0,uVar1);
  uVar1 = __divsf3(puVar4[1],DAT_0012e2ac);
  (**(code **)(*in_r0 + 0x34))(in_r0,uVar1);
  in_r0[0x44] = 0;
  puVar4 = *(undefined4 **)(DAT_0012e2b0 + 0x12e284);
  in_r0[0x45] = -1;
  *puVar4 = 0xffffffff;
  (**(code **)(*in_r0 + 0x114))(in_r0,1);
  FileLode((MainMenuLayer *)in_r0);
  cocos2d::CCLayer::onEnter((CCLayer *)in_r0);
  return CONCAT44(uStack_14,piStack_18);
}


