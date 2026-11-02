/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d8710  Symbol: MARKET_CASH_NOT_CP_TOUCH */

/* Market_Equip::MARKET_CASH_NOT_CP_TOUCH(cocos2d::CCPoint) */

void Market_Equip::MARKET_CASH_NOT_CP_TOUCH(CCPoint param_1)

{
  CCNode *this;
  int iVar1;
  int iVar2;
  int *piVar3;
  CCSize *pCVar4;
  CCNode *pCVar5;
  CCPoint in_r1;
  CCPoint in_r2;
  int *piVar6;
  
  iVar2 = DAT_000d8894;
  this = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x68);
  iVar1 = __aeabi_fcmpgt(in_r1,DAT_000d8898);
  piVar6 = *(int **)(iVar2 + 0xd8738);
  if ((((iVar1 == 0) || (iVar2 = __aeabi_fcmplt(in_r1,DAT_000d889c), iVar2 == 0)) ||
      (iVar2 = __aeabi_fcmpgt(in_r2,DAT_000d88a0), iVar2 == 0)) ||
     (iVar2 = __aeabi_fcmplt(in_r2,DAT_000d88a4), iVar2 == 0)) {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(this,0xb);
    pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(this,0xb);
    (**(code **)(*piVar3 + 0x7c))();
    iVar2 = KG_Touch(in_r1,in_r2,*pCVar4);
    if (iVar2 == 0) {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(this,0xc);
      pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(this,0xc);
      (**(code **)(*piVar3 + 0x7c))();
      iVar2 = KG_Touch(in_r1,in_r2,*pCVar4);
      if (iVar2 != 0) {
        pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x68);
        KG_removeChild(pCVar5,true);
        *piVar6 = 0x10;
        setInventory_Plus((Market_Equip *)param_1,true);
      }
    }
    else if (*(int *)(param_1 + 0x13c) != -1) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_000d88a8 + 0xd87a4));
    }
  }
  if ((*piVar6 == 8) && (iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x68), iVar2 != 0)
     ) {
    iVar2 = 2;
    do {
      piVar6 = (int *)cocos2d::CCNode::getChildByTag(this,iVar2);
      pCVar4 = (CCSize *)(**(code **)(*piVar6 + 0x38))();
      piVar6 = (int *)cocos2d::CCNode::getChildByTag(this,iVar2);
      (**(code **)(*piVar6 + 0x7c))();
      iVar1 = KG_Touch(in_r1,in_r2,*pCVar4);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x13c) = iVar2 + -2;
      }
      piVar6 = (int *)cocos2d::CCNode::getChildByTag(this,iVar2);
      iVar2 = iVar2 + 1;
      (**(code **)(*piVar6 + 0xec))(piVar6,0xff);
    } while (iVar2 != 8);
  }
  return;
}


