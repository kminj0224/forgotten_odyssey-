/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ea180  Symbol: ccTouchesBegan */

/* Hero_HeroEquip::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

undefined8 Hero_HeroEquip::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  CCNode *pCVar3;
  int *piVar4;
  CCSet *in_r2;
  CCEvent *in_r3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  CCSet *local_20;
  CCEvent *local_1c;
  CCSet *local_18;
  CCEvent *local_14;
  
  local_20 = param_1;
  local_1c = param_2;
  if (**(char **)(DAT_000ea26c + 0xea18a) == '\0') {
    local_18 = in_r2;
    local_14 = in_r3;
    iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
    uVar5 = *(undefined4 *)(iVar1 + 0x18);
    puVar7 = *(undefined4 **)(DAT_000ea270 + 0xea1a0);
    uVar6 = *(undefined4 *)(iVar1 + 0x1c);
    uVar2 = __divsf3(*puVar7,DAT_000ea274);
    __divsf3(uVar5,uVar2);
    uVar2 = __divsf3(puVar7[1],DAT_000ea278);
    uVar8 = __divsf3(uVar6,uVar2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
    local_20 = local_18;
    local_1c = local_14;
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xe);
    iVar1 = Sprite_Touch2(pCVar3,(CCPoint)local_18);
    if (iVar1 != 0) {
      piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xe);
      (**(code **)(*piVar4 + 0x6c))(piVar4,1);
    }
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xf);
    iVar1 = Sprite_Touch2(pCVar3,(CCPoint)local_18);
    if (iVar1 != 0) {
      piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xf);
      (**(code **)(*piVar4 + 0x6c))(piVar4,1);
    }
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
    iVar1 = Sprite_Touch2(pCVar3,(CCPoint)local_18);
    if (iVar1 != 0) {
      piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
      (**(code **)(*piVar4 + 0x6c))(piVar4,1);
    }
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
    iVar1 = Sprite_Touch2(pCVar3,(CCPoint)local_18);
    if (iVar1 != 0) {
      piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
      (**(code **)(*piVar4 + 0x6c))(piVar4,1);
    }
  }
  return CONCAT44(local_1c,local_20);
}


