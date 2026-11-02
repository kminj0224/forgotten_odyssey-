/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e0e38  Symbol: Item_CASH_Veiw */

/* Market_Store::Item_CASH_Veiw(int, int) */

void __thiscall Market_Store::Item_CASH_Veiw(Market_Store *this,int param_1,int param_2)

{
  CCNode *pCVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  In_App_Layer *this_00;
  code *pcVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  CCPoint aCStack_20 [12];
  
  Draw_Cahs((int)this);
  if (param_1 == 1) {
    *(int *)(this + 0x19c) = param_2;
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_000e0f04);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,1);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,param_2);
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x38))();
    uVar7 = *puVar3;
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_000e0f04);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,1);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,param_2);
    iVar4 = (**(code **)(*piVar2 + 0x38))();
    uVar5 = *(undefined4 *)(iVar4 + 4);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_000e0f04);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,1);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,DAT_000e0f08);
    pcVar6 = *(code **)(*piVar2 + 0x3c);
    __subsf3(uVar7,0x3f800000);
    uVar8 = __subsf3(uVar5,0x3f800000);
    cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
    (*pcVar6)(piVar2,aCStack_20);
    this_00 = (In_App_Layer *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_000e0f04);
    In_App_Layer::Buy_Item_Popup(this_00,param_2);
  }
  return;
}


