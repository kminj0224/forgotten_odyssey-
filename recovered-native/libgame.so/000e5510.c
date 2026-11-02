/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e5510  Symbol: NoticeTouchEnded */

/* Market_Unit::NoticeTouchEnded(cocos2d::CCPoint) */

void Market_Unit::NoticeTouchEnded(CCPoint param_1)

{
  CCNode *pCVar1;
  int *piVar2;
  CCSize *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CCPoint in_r1;
  CCPoint in_r2;
  undefined4 *puVar6;
  code *pcVar7;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  (**(code **)(*piVar2 + 0x7c))();
  iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
  if (iVar4 == 0) {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
    pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
    (**(code **)(*piVar2 + 0x7c))();
    iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
    if (iVar4 != 0) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
      KG_removeChild(pCVar1,true);
      pcVar7 = *(code **)(*(int *)param_1 + 0xd0);
      uVar5 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
      (*pcVar7)(param_1,uVar5,1);
      puVar6 = *(undefined4 **)(DAT_000e55e0 + 0xe55d6);
      *(undefined4 *)(param_1 + 0x140) = 0;
      *puVar6 = 1;
    }
  }
  else if (*(int *)(param_1 + 0x140) == 1) {
    Unit_Buy_Notice();
  }
  else if (*(int *)(param_1 + 0x140) == 2) {
    Unit_Upgrade_Notice((Market_Unit *)param_1);
  }
  return;
}


