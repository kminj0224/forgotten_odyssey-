/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e0fcc  Symbol: MARKET_CASH_TOUCH */

/* Market_Store::MARKET_CASH_TOUCH(cocos2d::CCPoint) */

void Market_Store::MARKET_CASH_TOUCH(CCPoint param_1)

{
  CCNode *this;
  int iVar1;
  int *piVar2;
  CCNode *pCVar3;
  CCSize *pCVar4;
  int iVar5;
  CCPoint in_r1;
  CCPoint in_r2;
  int *piVar6;
  
  this = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000e11a0);
  iVar1 = __aeabi_fcmpgt(in_r1,DAT_000e11a4);
  piVar6 = *(int **)(DAT_000e11a8 + 0xe0ff4);
  if ((((iVar1 == 0) || (iVar1 = __aeabi_fcmplt(in_r1,DAT_000e11ac), iVar1 == 0)) ||
      (iVar1 = __aeabi_fcmpgt(in_r2,DAT_000e11b0), iVar1 == 0)) ||
     (iVar1 = __aeabi_fcmplt(in_r2,DAT_000e11b4), iVar1 == 0)) {
    iVar1 = __aeabi_fcmpgt(in_r1,DAT_000e11b8);
    if (((iVar1 == 0) || (iVar1 = __aeabi_fcmplt(in_r1,DAT_000e11bc), iVar1 == 0)) ||
       ((iVar1 = __aeabi_fcmpgt(in_r2,DAT_000e11b0), iVar1 == 0 ||
        (iVar1 = __aeabi_fcmplt(in_r2,DAT_000e11b4), iVar1 == 0)))) {
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(this,0xb);
      pCVar4 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(this,0xb);
      (**(code **)(*piVar2 + 0x7c))();
      iVar1 = KG_Touch(in_r1,in_r2,*pCVar4);
      if (iVar1 == 0) {
        piVar2 = (int *)cocos2d::CCNode::getChildByTag(this,0xc);
        pCVar4 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
        piVar2 = (int *)cocos2d::CCNode::getChildByTag(this,0xc);
        (**(code **)(*piVar2 + 0x7c))();
        iVar1 = KG_Touch(in_r1,in_r2,*pCVar4);
        if (iVar1 != 0) {
          pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000e11a0);
          KG_removeChild(pCVar3,true);
          *piVar6 = 4;
          setInventory_Plus(SUB41(param_1,0));
        }
      }
      else if (*(int *)(param_1 + 0x198) != -1) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000e11c0 + 0xe10ae));
      }
    }
    else {
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(this,8);
      (**(code **)(*piVar2 + 0xec))(piVar2,0xff);
      Draw_Cahs(param_1);
    }
  }
  if ((*piVar6 == 7) &&
     (iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000e11a0), iVar1 != 0)) {
    iVar1 = 2;
    do {
      piVar6 = (int *)cocos2d::CCNode::getChildByTag(this,iVar1);
      pCVar4 = (CCSize *)(**(code **)(*piVar6 + 0x38))();
      piVar6 = (int *)cocos2d::CCNode::getChildByTag(this,iVar1);
      (**(code **)(*piVar6 + 0x7c))();
      iVar5 = KG_Touch(in_r1,in_r2,*pCVar4);
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


