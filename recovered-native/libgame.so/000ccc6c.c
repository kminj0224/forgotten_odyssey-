/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ccc6c  Symbol: scene */

/* StageSelect::scene() */

undefined8 StageSelect::scene(void)

{
  undefined4 in_r0;
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  float extraout_s0;
  float extraout_s1;
  undefined4 auStack_20 [3];
  
  auStack_20[0] = in_r0;
  piVar1 = (int *)cocos2d::CCScene::node();
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)node();
    pcVar4 = *(code **)(*piVar2 + 0x74);
    puVar6 = (undefined4 *)(DAT_000ccccc + 0xccc8c);
    cocos2d::CCPoint::CCPoint((CCPoint *)auStack_20,extraout_s0,extraout_s1);
    (*pcVar4)(piVar2,auStack_20);
    puVar6 = (undefined4 *)*puVar6;
    iVar5 = *piVar2;
    uVar3 = __divsf3(*puVar6,DAT_000cccd0);
    (**(code **)(iVar5 + 0x2c))(piVar2,uVar3);
    uVar3 = __divsf3(puVar6[1],DAT_000cccd4);
    (**(code **)(*piVar2 + 0x34))(piVar2,uVar3);
    (**(code **)(*piVar1 + 0xc4))(piVar1,piVar2);
  }
  return CONCAT44(auStack_20[0],piVar1);
}


