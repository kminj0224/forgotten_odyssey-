/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e8394  Symbol: update */

/* ReinforcementLayer::update(float) */

float ReinforcementLayer::update(float param_1)

{
  CCNode *in_r0;
  CCNode *pCVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 *puVar8;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined8 uVar9;
  char acStack_28 [8];
  CCPoint aCStack_20 [12];
  
  if (*(int *)(in_r0 + 0x110) == 2) {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,1);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    param_1 = extraout_s0;
    if ((pCVar1 != (CCNode *)0x0) &&
       (piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0), param_1 = extraout_s0_00,
       piVar2 != (int *)0x0)) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,1);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
      iVar5 = DAT_000e8470;
      uVar4 = (**(code **)(*piVar3 + 0x28))();
      __mulsf3(uVar4,DAT_000e8474);
      uVar4 = __fixsfsi();
      sprintf(acStack_28,(char *)(iVar5 + 0xe83e2),uVar4);
      param_1 = (float)(**(code **)(*piVar2 + 0x11c))(piVar2,acStack_28);
    }
  }
  else if (*(int *)(in_r0 + 0x110) == 3) {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(in_r0,2);
    iVar5 = (**(code **)(*piVar2 + 0xec))();
    param_1 = extraout_s0_01;
    if (iVar5 == 0) {
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(in_r0,2);
      puVar8 = *(undefined4 **)(DAT_000e8478 + 0xe8420);
      pcVar7 = *(code **)(*piVar2 + 0x3c);
      iVar5 = __fixsfsi(*puVar8);
      uVar4 = Random(0,iVar5);
      iVar5 = __fixsfsi(puVar8[1]);
      uVar6 = Random(0,iVar5);
      __floatsisf(uVar4);
      uVar9 = __floatsisf(uVar6);
      cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
      (*pcVar7)(piVar2,aCStack_20);
      param_1 = (float)cocos2d::CCParticleSystem::resetSystem((CCParticleSystem *)piVar2);
    }
  }
  return param_1;
}


