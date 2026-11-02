/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e11c8  Symbol: MARKET_CASH_NOT_CP_TOUCH */

/* Market_Store::MARKET_CASH_NOT_CP_TOUCH(cocos2d::CCPoint) */

void Market_Store::MARKET_CASH_NOT_CP_TOUCH(CCPoint param_1)

{
  CCNode *this;
  int iVar1;
  int *piVar2;
  CCSize *pCVar3;
  CCNode *pCVar4;
  int iVar5;
  CCPoint in_r1;
  CCPoint in_r2;
  int *piVar6;
  
  this = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000e134c);
  iVar1 = __aeabi_fcmpgt(in_r1,DAT_000e1350);
  piVar6 = *(int **)(DAT_000e1354 + 0xe11f0);
  if ((((iVar1 == 0) || (iVar1 = __aeabi_fcmplt(in_r1,DAT_000e1358), iVar1 == 0)) ||
      (iVar1 = __aeabi_fcmpgt(in_r2,DAT_000e135c), iVar1 == 0)) ||
     (iVar1 = __aeabi_fcmplt(in_r2,DAT_000e1360), iVar1 == 0)) {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(this,0xb);
    pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(this,0xb);
    (**(code **)(*piVar2 + 0x7c))();
    iVar1 = KG_Touch(in_r1,in_r2,*pCVar3);
    if (iVar1 == 0) {
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(this,0xc);
      pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(this,0xc);
      (**(code **)(*piVar2 + 0x7c))();
      iVar1 = KG_Touch(in_r1,in_r2,*pCVar3);
      if (iVar1 != 0) {
        pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000e134c);
        KG_removeChild(pCVar4,true);
        *piVar6 = 0x10;
        setInventory_Plus(SUB41(param_1,0));
      }
    }
    else if (*(int *)(param_1 + 0x198) != -1) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_000e1364 + 0xe125c));
    }
  }
  if ((*piVar6 == 8) &&
     (iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000e134c), iVar1 != 0)) {
    iVar1 = 2;
    do {
      piVar6 = (int *)cocos2d::CCNode::getChildByTag(this,iVar1);
      pCVar3 = (CCSize *)(**(code **)(*piVar6 + 0x38))();
      piVar6 = (int *)cocos2d::CCNode::getChildByTag(this,iVar1);
      (**(code **)(*piVar6 + 0x7c))();
      iVar5 = KG_Touch(in_r1,in_r2,*pCVar3);
      if (iVar5 != 0) {
        *(int *)(param_1 + 0x198) = iVar1 + -2;
      }
      piVar6 = (int *)cocos2d::CCNode::getChildByTag(this,iVar1);
      iVar1 = iVar1 + 1;
      (**(code **)(*piVar6 + 0xec))(piVar6,0xff);
    } while (iVar1 != 8);
  }
  return;
}


