/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d0730  Symbol: Set_Sell_Money */

/* Item_Text_View_Layer::Set_Sell_Money(int, int) */

void __thiscall
Item_Text_View_Layer::Set_Sell_Money(Item_Text_View_Layer *this,int param_1,int param_2)

{
  int iVar1;
  CCNode *pCVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar11;
  int local_78;
  CCPoint local_6c;
  int local_68;
  CCPoint local_64;
  int local_60;
  CCPoint local_5c;
  int local_58;
  CCPoint local_54;
  CCPoint local_50;
  int local_4c;
  int local_48;
  char acStack_44 [20];
  char acStack_30 [20];
  int local_1c;
  
  piVar9 = *(int **)(DAT_000d090c + 0xd073c);
  local_1c = *piVar9;
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,6);
  if (iVar1 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,6);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar2,true);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,5);
  if (iVar1 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,5);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar2,true);
  }
  if (*(int *)(this + 0x110) != 0xa9) {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_6c);
    memset(acStack_44,0,0x14);
    if (param_2 - 4U < 2) {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_64,extraout_s0,extraout_s1);
      local_6c = local_64;
      local_68 = local_60;
      if (*(int *)(this + 0x110) - 0x9eU < 2) {
        strcpy(acStack_44,(char *)(DAT_000d0918 + 0xd07ba));
        local_78 = 0;
      }
      else {
        strcpy(acStack_44,(char *)(DAT_000d091c + 0xd07c8));
        local_78 = 0;
      }
    }
    else {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_5c,extraout_s0,extraout_s1);
      local_6c = local_5c;
      local_68 = local_58;
      iVar1 = *(int *)(this + 0x110);
      if (((iVar1 - 0x97U < 0x14) && (iVar1 != 0x9e)) && (iVar1 != 0x9f)) {
        strcpy(acStack_44,(char *)(DAT_000d0924 + 0xd07fe));
        local_78 = 0;
      }
      else {
        strcpy(acStack_44,(char *)(DAT_000d0934 + 0xd08f2));
        local_78 = 1;
      }
    }
    iVar1 = *(int *)(DAT_000d0928 + 0xd0816);
    vDrawMoney((CCNode *)this,*(int *)((*(int *)(this + 0x110) * 6 + local_78) * 4 + iVar1),local_6c
               ,local_68,1,2,6);
    memset(acStack_30,0,0x14);
    sprintf(acStack_30,(char *)(DAT_000d092c + 0xd084e),
            *(undefined4 *)((*(int *)(this + 0x110) * 6 + local_78) * 4 + iVar1));
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,6);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,0);
    iVar10 = 0;
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
    iVar5 = __fixsfsi(*puVar4);
    iVar8 = 9;
    iVar1 = 0;
    do {
      if (iVar10 - iVar1 == (iVar1 + 1) * 3) {
        if (acStack_30[iVar8] != '\0') {
          iVar10 = iVar10 + 1;
          iVar8 = iVar8 + 1;
          iVar1 = iVar1 + 1;
        }
      }
      else {
        iVar10 = iVar10 + (uint)(acStack_30[iVar8] != '\0');
      }
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    uVar6 = __subsf3(local_6c,DAT_000d0930);
    uVar7 = __floatsisf(iVar5 * iVar10);
    uVar11 = __subsf3(uVar6,uVar7);
    uVar11 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&local_54,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_4c,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20))
    ;
    vDrawFrame((CCNode *)this,acStack_44,local_54,local_50,local_4c,local_48);
  }
  if (local_1c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


