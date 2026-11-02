/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e9338  Symbol: ccTouchesBegan */

/* Hero_BaseSkill::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

undefined8 Hero_BaseSkill::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  CCNode *pCVar3;
  int *piVar4;
  CCPoint in_r2;
  undefined4 in_r3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  CCPoint local_18;
  undefined4 local_14;
  
  local_18 = in_r2;
  local_14 = in_r3;
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar5 = *(undefined4 *)(iVar1 + 0x18);
  puVar7 = *(undefined4 **)(DAT_000e93ac + 0xe934c);
  uVar6 = *(undefined4 *)(iVar1 + 0x1c);
  uVar2 = __divsf3(*puVar7,DAT_000e93b0);
  __divsf3(uVar5,uVar2);
  uVar2 = __divsf3(puVar7[1],DAT_000e93b4);
  uVar8 = __divsf3(uVar6,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x18);
  iVar1 = Sprite_Touch2(pCVar3,local_18);
  if (iVar1 != 0) {
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x18);
    (**(code **)(*piVar4 + 0x6c))(piVar4,1);
  }
  return CONCAT44(local_14,local_18);
}


