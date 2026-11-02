/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d7858  Symbol: MARKET_CASH_TOUCH */

/* Market_Equip::MARKET_CASH_TOUCH(cocos2d::CCPoint) */

void Market_Equip::MARKET_CASH_TOUCH(CCPoint param_1)

{
  CCNode *this;
  int iVar1;
  int iVar2;
  int *piVar3;
  CCNode *pCVar4;
  CCSize *pCVar5;
  CCPoint in_r1;
  CCPoint in_r2;
  int *piVar6;
  
  iVar2 = DAT_000d7a2c;
  this = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x68);
  iVar1 = __aeabi_fcmpgt(in_r1,DAT_000d7a30);
  piVar6 = *(int **)(iVar2 + 0xd7880);
  if ((((iVar1 == 0) || (iVar2 = __aeabi_fcmplt(in_r1,DAT_000d7a34), iVar2 == 0)) ||
      (iVar2 = __aeabi_fcmpgt(in_r2,DAT_000d7a38), iVar2 == 0)) ||
     (iVar2 = __aeabi_fcmplt(in_r2,DAT_000d7a3c), iVar2 == 0)) {
    iVar2 = __aeabi_fcmpgt(in_r1,DAT_000d7a40);
    if (((iVar2 == 0) || (iVar2 = __aeabi_fcmplt(in_r1,DAT_000d7a44), iVar2 == 0)) ||
       ((iVar2 = __aeabi_fcmpgt(in_r2,DAT_000d7a38), iVar2 == 0 ||
        (iVar2 = __aeabi_fcmplt(in_r2,DAT_000d7a3c), iVar2 == 0)))) {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(this,0xb);
      pCVar5 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(this,0xb);
      (**(code **)(*piVar3 + 0x7c))();
      iVar2 = KG_Touch(in_r1,in_r2,*pCVar5);
      if (iVar2 == 0) {
        piVar3 = (int *)cocos2d::CCNode::getChildByTag(this,0xc);
        pCVar5 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
        piVar3 = (int *)cocos2d::CCNode::getChildByTag(this,0xc);
        (**(code **)(*piVar3 + 0x7c))();
        iVar2 = KG_Touch(in_r1,in_r2,*pCVar5);
        if (iVar2 != 0) {
          pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x68);
          KG_removeChild(pCVar4,true);
          *piVar6 = 3;
          setInventory_Plus((Market_Equip *)param_1,true);
        }
      }
      else if (*(int *)(param_1 + 0x13c) != -1) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000d7a48 + 0xd793a));
      }
    }
    else {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(this,8);
      (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
      Draw_Cahs(param_1);
    }
  }
  if ((*piVar6 == 7) && (iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x68), iVar2 != 0)
     ) {
    iVar2 = 2;
    do {
      piVar6 = (int *)cocos2d::CCNode::getChildByTag(this,iVar2);
      pCVar5 = (CCSize *)(**(code **)(*piVar6 + 0x38))();
      piVar6 = (int *)cocos2d::CCNode::getChildByTag(this,iVar2);
      (**(code **)(*piVar6 + 0x7c))();
      iVar1 = KG_Touch(in_r1,in_r2,*pCVar5);
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


