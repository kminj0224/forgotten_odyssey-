/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012d048  Symbol: MM_Notice_Touch */

/* MainMenuLayer::MM_Notice_Touch(cocos2d::CCPoint) */

void MainMenuLayer::MM_Notice_Touch(CCPoint param_1)

{
  CCNode *pCVar1;
  undefined4 uVar2;
  int *piVar3;
  CCSize *pCVar4;
  int iVar5;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined8 uVar6;
  CCPoint local_20;
  CCPoint local_1c;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x16);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0xd);
  __subsf3(in_r1,DAT_0012d16c);
  uVar2 = __subsf3(DAT_0012d170,in_r2);
  uVar6 = __subsf3(uVar2,DAT_0012d174);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  (**(code **)(*piVar3 + 0x7c))();
  iVar5 = KG_Touch(local_20,local_1c,*pCVar4);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_0012d178 + 0x12d0d8));
  }
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
  pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
  (**(code **)(*piVar3 + 0x7c))();
  iVar5 = KG_Touch(local_20,local_1c,*pCVar4);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_0012d17c + 0x12d144));
  }
  return;
}


